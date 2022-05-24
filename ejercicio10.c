#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  int max = INT_MIN;
  int min = INT_MAX;
  double total = 0.0;

  for ( int i = 1 ; i < argc ; i++ ) {
    int n = atoi(argv[i]);
    if ( n > max ) max = n;
    if ( n < min ) min = n;
    printf ("%d ", n);
    total += n;
  }
  printf("\n");
  printf("max = %d\n", max);
  printf("min = %d\n", min);
  printf("prom = %.2f\n", total/(argc-1));
  return 0;
}  
