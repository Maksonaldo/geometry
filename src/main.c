#include "palindrom.h"

int main(){
	{
  char *line = NULL;
  line = (char *)malloc(1000000 * sizeof(char));

  char *btr = NULL;
  btr = (char *)malloc(1000000 * sizeof(char));

  transformation_A_a();
  freopen("text.txt", "a", stdout);

  char *str = NULL;
  str = (char *)malloc(20 * sizeof(char));
  FILE *file;

  if ((file = fopen("test.txt", "r")) == NULL) {
    puts("File not found!");
    return 1;
  }

  char *mass;

  mass = calloc(sizeof(char), 1000);
  fgets(str, 80, file);
  int i, j;
  for (i = 0, j = 0; str[i]; ++i) {
    if ((str[i] >= ' ' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '\\') ||
        (str[i] >= ',' && str[i] <= '_') || str[i] == '\n')
      continue;
    mass[j] = str[i];
    j++;
  }

  if (check(mass)) {
    printf("\nPredlozenie:%s  Palandrom \n", mass);
  } else {


    deleting_punctuation_marks(btr);


    
    word_comparison(line);
  }


  return 0;
}
}
