#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *allocatearray(int n){ //note it will return a pointer from this specification

    int *p;
    p = (int *)malloc(n*sizeof(int));
    return p; // here it returns this pointer
}

void fillwithones(int *array, int n){ //filling array up with ones
    int i;
    for (i=0;i<n;i++) array[i]=1;
}

void printarray(int *array, int n){
    int i;
    for(i=0;i<n;i++) printf("a[%d] = %d\n",i,array[i]);
}

void freearray(int *array){
    free(array);
}

int main(){

    int length;
    int *a; // making this just so I can save my generated pointer to it

    printf("Enter length of the array \n");
    scanf("%d",&length);

    a=allocatearray(length);
    fillwithones(a,length);
    printarray(a,length);
    freearray(a);

    return 0;

}
