#include <stdio.h>
#include <omp.h>
#define NUM_STEPS 10000000

int main (int argc, char **argv){

//Variables
long int i, num_steps = NUM_STEPS;
double x, step, sum, pi; 
sum = 0.0;
step = 1.0 / (double) num_steps;
 #pragma omp parallel private(i,x)
 {
  #pragma omp for reduction(+:sum)
    for (i=0; i<num_steps; ++i) {
        x = (i+0.5)*step;
        sum += 4.0/(1.0+x*x);

    }
 } 

 / All threads join master thread and terminate /
 pi= step*sum;
 printf("PI value = %.24f\n", pi);
}