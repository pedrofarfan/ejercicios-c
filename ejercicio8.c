#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int n = atoi(argv[1]);

  for (int i = 0; i < n; i++ ){
    for (int j = 0; j < n; j++ ){

      if (i % 2 == 0){
        if (j % 2 == 0){
          printf("O");
        } else printf("#");

      } else if (j % 2 == 0) {
          printf("#");
        } else printf("O");

      printf("\n");
    }
  return 0;
}
