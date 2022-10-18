#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// code that runs 3 cases with different initial values for the sum of a geometric series
// calculated using formula and by iteration
// values shown to deviate when the numbers become large, this is due to rounding errors
// as adding a small value on to a large value loses precision and visa versa as the max number of digits
// in the mantisa are already used up so truncation occurs.

// Version 1.0: MGC, 18-10-22

double formula(double a,int n,double r); // function definitions
double summation(double a,int n,double r);

int main(){

    // variable definitions
    int i = 0;
    int n;
    double a,r;
    double sum_formula=0.0;
    double sum_summation=0.0;
    double difference = 0.0;

    // switch case
    for(i=0;i<3;i++){
        switch(i){
        case 0: // this case has no issue as numbers are not large due to r<1 and the series converging after a few n.
            n=10000,
            a=2.0;
            r=0.01;
            sum_formula = formula(a,n,r);
            sum_summation = summation(a,n,r);
            difference = sum_formula-sum_summation;
            printf("Case %d:\nFormula value = %f, Summation value = %f, Difference %f\n",i,sum_formula,sum_summation,difference);
            break;
        case 1:
            n=500,
            a=0.01;
            r=1.1; // due to r > 1  large numbers occur after a while and truncation error starts
            sum_formula = formula(a,n,r);
            sum_summation = summation(a,n,r);
            difference = sum_formula-sum_summation;
            printf("Case %d:\nFormula value = %f, Summation value = %f, Difference %f\n",i,sum_formula,sum_summation,difference);
            break;
        case 2:
            n=100,
            a=0.0001;
            r=2.0; // large truncation errors in this case as r = 2 causes very large numbers and hence the largest error/difference occurs here
            sum_formula = formula(a,n,r);
            sum_summation = summation(a,n,r);
            difference = sum_formula-sum_summation;
            printf("Case %d:\nFormula value = %f, Summation value = %f, Difference %f\n",i,sum_formula,sum_summation,difference);
            break;
        }
    }


    return 0;
}

double formula(double a,int n,double r){

    double sum = ((a)*(1-(double)pow(r,n+1)))/(1-r);

    return sum;
}

double summation(double a,int n,double r){

    int i =0;
    double sum = 0.0;

    for(i=0;i<n+1;i++){
        sum = sum + a * pow(r,i);
    }

    return sum;
}



