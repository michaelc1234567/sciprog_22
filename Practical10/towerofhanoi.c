#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int n, int source, int destination, int inter){

    if(n==1) printf("Move disc %d to %d\n",source,destination);
    else{
        hanoi(n-1,source,inter,destination);
        printf("Move disc %d to %d\n",source,destination);
        hanoi(n-1,inter,destination,source);
    }
}



int main(){

    int h=3;
    printf("Solution for %d discs\n",h);
    hanoi(h,1,3,2);


    return 0;
}
