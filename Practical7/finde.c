#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long int factorial(int n);


int main(){

    int i, order;

    double e;
    double *terms;

    // getting expansion order
    printf("Enter the order of the expansion\n");
    scanf("%d",&order);

    // memory allocation

    terms = (double*)malloc(order*sizeof(double)); //terms is like an array of length order

    // assigning values to the array

    for(i=0;i<order; i++){
        terms[i] = 1.0/(double)factorial(i+1);
        printf("e term is: %1.14lf for order: %d\n",terms[i],order);
    }

    e = 1.0;

    // summation of the array

    for(i=0; i<order; i++){
        e = e + terms[i];
    }

    // free dynamic memory
    free(terms);

    printf("The calculated value of e is %1.14lf, The difference from the true value is %1.14lf\n",e,exp(1.0)-e);


    return 0;
}


long int factorial(int n){

    if(n<0){
        printf("value should be positive");
        return -1;
    }
    int value = n; //initialise value
    int j; //counter

    for(j=n;j>1;j--){
        value = value*(j-1);
    }
    return value;
}


