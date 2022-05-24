#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  int max = INT_MIN;

  for ( int i = 0 ; i < argc ; i++ ) {
    int n = atoi(argv[i]);
    if ( n > max ) max = n;
    printf ("%d ", n);
  }
  printf("\n");
  printf("max = %d\n", max);
  return 0;
}
