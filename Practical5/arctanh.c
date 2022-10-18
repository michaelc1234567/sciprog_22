#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){

    double delta;
    double x;
    printf("Enter Mac Series Precision:\n");
    scanf("%lf",&delta);

    int length = 1000;
    double tan1[length];// value storage
    double tan2[length]; //value storage

    int j=0;
    x=-0.9;

    while(x<=0.9 && j<length){

        tan1[j] = arctanh1(x,delta);
        tan2[j] = arctanh2(x);

        printf("The x value is: %lf, The difference between methods is: %lf\n",x,fabs(tan1[j]-tan2[j]));
        j++;
        x = x + 0.1; //increment x by 0.1
    }


return 0;
}


double arctanh1(const double x, const double delta){
    //printf("x is %lf",x);
    double arcTAN = 0.0;
    double elem = 1.0, val;
    int n = 0;
    while(fabs(elem) >= delta){
        val = 2*n + 1;
        elem = pow(x,val)/val;
        arcTAN = arcTAN + elem;
        n++;
    }

    return arcTAN;

}

double arctanh2(const double x){

    return (log(1+x) - log(1-x))/2;
}


