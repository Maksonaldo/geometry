#include <stdio.h>
#include <stdlib.h>

void recognition(char *string) {
  int j = 0;
  int circ = 0;
  int tri = 0;
  int error = 0;
  char circle[6] = {'c', 'i', 'r', 'c', 'l', 'e'};
  char triangle[8] = {'t', 'r', 'i', 'a', 'n', 'g', 'l', 'e'};

  while (string[j] != '(') {
    if (string[j] == circle[j]) {
      circ = 1;
    } else {
      error = 1;
    }
    if (string[j] == triangle[j]) {
      tri = 1;
    } else {
      error = 1;
    }
    j++;
  }
  if (circ == 1)
    printf("Cirle\n");
  if (tri == 1)
    printf("Triangle\n");
  if (error == 1)
    printf("Error\n");
}
