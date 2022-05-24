#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
  srand(time(NULL));
  int d = (rand() % 8) + 1;
  if (d < 6) printf("%d\n", d);
  else       printf("6\n");
  return 0;

}
