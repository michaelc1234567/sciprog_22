#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int interativeGCD(int a, int b);
int recursiveGCD(int a, int b);

int main(){

    int a,b;
    clock_t start,end;
    //Generate two random integers between 1 and 50

    srand(time(NULL));
    a = (rand()%50) + 1;
    b = (rand()%50) + 1;

    start = clock();

    printf("Iterative GCD(%d,%d) = %d\n",a,b,interativeGCD(a,b));
    printf("Recursive GCD(%d,%d) = %d\n",a,b,recursiveGCD(a,b));

    end = clock();

    printf("Total time elapsed: %1.15lf s\n",(double)((end-start)/CLOCKS_PER_SEC));

    return 0;
}

int interativeGCD(int a, int b){

    int temp;

    while(b != 0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int recursiveGCD(int a, int b){

    if(b==0) return a;
    else{
        recursiveGCD(b,a%b);
    }
}
