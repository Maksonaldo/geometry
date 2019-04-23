#include <stdio.h>
#include <stdlib.h>

void output_geometry(char *string_two, double p, double s, int i) {
  FILE *geom;
  geom = fopen("geometry_output.txt", "a");

  fprintf(geom, "%d. ", i);
  fputs(string_two, geom);
  fprintf(geom, "\n\tperimeter = %.4f\n", p);
  fprintf(geom, "\tarea = %.4f\n", s);
  fprintf(geom, "\tintersects: \n\n");

  fclose(geom);
}
