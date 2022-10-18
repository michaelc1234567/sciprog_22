#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float degtorad(float deg);
float trapsum(float stepsize, int numsteps, float functvalue[numsteps+1]);

int main(){

    int N=10000; // no of steps
    int i=0;
    float adeg=0.0;
    float bdeg=60.0;
    float stepsize = (bdeg-adeg)/N;
    printf("stepsize = %f\n",stepsize);
    float answer;

    float functvalue[N+1]; // has to be of size N+1 as has N gaps but N+1 heights.

    // calculating function values.

    for(i=0; i<N+1;i++){
        functvalue[i] = tan(degtorad(i*stepsize));
    //    printf("function value at %d, is %f\n",i,functvalue[i]); //all correct
    }

    answer = trapsum(degtorad(stepsize), N, functvalue); // note there is no need to pass arrays size

    printf("Approximated=%f, Exact is = %f\n",answer,log(2.0));

    return 0;
}

float degtorad(float deg){

    float radvalue = (deg/180.0)*M_PI;

    return radvalue;
}

float trapsum(float stepsize, int numsteps, float functvalue[numsteps+1]){

    float area = 0.0;
    float workings;
    int i=0;
    for(i=0;i<numsteps+1;i++){

        if(i==0||i==numsteps){
            workings  = workings + functvalue[i];
        }
        else{
            workings  = workings + 2.0*functvalue[i];
        }
    }
    area = (stepsize/2.0)*workings;

    return area;
}

