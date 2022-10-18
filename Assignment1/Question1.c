#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// code that prints numbers after being applied to a function
// output to screen is limited to 40 chars per line.
// code starts at value n, and ends when n's value becomes 1

// Version 1.0: MGC, 18-10-22

int main(){

    int n = 50;         // initialise number of ints
    int storage[3];     //storage for last 3 numbers
    int counter = 0;    // counter to ensure no more than 40 characters printed

    while(1){

        // test to make sure that the screen prints no more than 40 characters
        if(counter + 2 + floor(log10(n))+1 > 40){
            printf("\n");
            counter = 0;        // reset counter
        }
        printf("%d, ",n);       //print to screen
        counter = counter + 2 + floor(log10(n))+1; // the + 2 is for the space and comma // log10 smart way to count character in integer


        // function
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = (3*n)+1;
        }
        //storage assignment
        if(n==4){
            storage[0]=n;
        }
        if(n==2){
            storage[1]=n;
        }
        if(n==1){
            storage[2]=n;
            printf("%d, ",n);
            break; // break loop when n-1
        }
    }
    // print last 3 numbers
    printf("\n\nLast 3 stored are %d, %d, and %d\n",storage[0],storage[1],storage[2]);

    return 0;
}

