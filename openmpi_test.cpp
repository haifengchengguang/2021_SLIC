#include<stdio.h>
#ifdef _OPENMP
#include<omp.h>
#endif

int main(){
#pragma omp parallel
    printf("is parallel ! \n");
    printf("is sequential ! \n");

}