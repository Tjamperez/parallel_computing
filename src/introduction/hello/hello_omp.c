#include <stdio.h>
#include "omp.h"

int main(int argc, char **argv){

    omp_set_num_threads(4);
    #pragma omp parallel //num_threads(4)
    printf("Hello World\n");

    omp_set_num_threads(3);
    #pragma omp parallel// num_threads(4)
    printf("Goodbye World\n");



    return 0;
}