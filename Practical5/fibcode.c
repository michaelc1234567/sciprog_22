#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void fib(int *a, int *b);

int main(){

    int n, i;
    int f1=1;
    int f0=0;

    printf("Enter the max number of terms in Fib series:\n");
    scanf("%d",&n);

    if(n < 1){
        printf("entered value is not a natural number");
        exit(1);
    }

    printf("The Fib sequence is:\n");
    printf("%d, %d, ",f0,f1);

    for(i=2;i<=n;i++){
        fib(&f1, &f0);
        printf("%d, ",f1);

        if((i+1)%10 == 0) printf("\n");
    }


return 0;}

void fib(int *a, int *b){

    int temp;

    temp = *a + *b;
    *b = *a;
    *a = temp;


}
