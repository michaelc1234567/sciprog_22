#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double A[n][q]){


    int i,j,k;
    for(i=0; i<n; i++){
        for(j=0; j<q; j++){
            for(k=0; k<p; k++){
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }


}