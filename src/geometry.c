#include "geometry_header.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 50;
  int p = 0;
  int s = 0;
  int i = 0;
  char *string = NULL;
  char *string_c = NULL;
  int *string_i = NULL;
  string = (char *)calloc(n, sizeof(char));
  string_i = (int *)calloc(n, sizeof(int));
  string_c = (char *)calloc(n, sizeof(char));

  FILE *geom;

  geom = fopen("geometry_input.txt", "r");
  while (feof(geom) == 0) {
    int j = 0;
    fgets(string_c, 50, geom);
    // fgets(string_i, 50, geom);
    ++i;
    while (string_c[j] != '\n') {
      string[j] = string_c[j];
      ++j;
    }
    // recognition(string, &p, &s);
    output_geometry(string, p, s, i);
  }

  fclose(geom);

  // printf("%d\t%d", p, s);
  return 0;
}
