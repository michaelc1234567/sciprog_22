#include <stdio.h>

int main(void){

    int i;
    double a;
    int ierr;

    // user info

    printf("Enter an integer and a double\n");

    ierr = scanf("%d %lf",&i,&a);

    if(ierr !=2) printf("Problem with input");
    else printf("Entered int: %d, Entered double: %lf\n",i,a);



return 0;
}
