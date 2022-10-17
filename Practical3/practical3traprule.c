#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int N=12;
    int i=0;
    float a=0.0;
    float bdeg=60.0;

    float brad, area, mult_rad;

    // Convert deg to rad
    brad = (M_PI*bdeg)/180.0;
    printf("pi/3 in rad =%f\n",brad);



    // sum tan(a) tan(b)
    area = tan(a) + tan(brad);
    // calculating area by adding segments
    for(i=5; i<60; i=i+5){

        area = area+2*tan((M_PI*i)/180.0);

    }


    //Multiply partial area by (pi/3)/(2*12)

    mult_rad=(M_PI*((bdeg)/(2*N)))/180.0;
    area = mult_rad*area;

    printf("Approximated=%f, Exact is = %f\n",area,log(2.0));

    return 0;
}
