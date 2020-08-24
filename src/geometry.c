#include <stdio.h>
#include "palindrom.h"
//проверка на палиндром----------------------------------------
int check(char str[]) {
  int i, length;
     length = strlen(str);
  if (length == 1)
    return 0;
  for (i = 0; i < length; i++)
    if (str[i] != str[(length - 1) - i])
      return 0;
  return 1;
}
//конец проверки ----------------------------------------

//преобразование заглавных букв в строчные------------------------------------
void transformation_A_a() {

  FILE *fp = fopen("file.txt", "r+");
  if (fp == NULL) {
    fprintf(stderr, "Невозможно открыть файл\n");
    return 0;
  }
  freopen("test.txt", "a", stdout);
  char c;
  while ((c = fgetc(fp)) != EOF) {
    if (c >= 'A' && c <= 'Z')
      putchar(c - 'A' + 'a');

    else
      putchar(c);
  }
  fclose(stdout);
}
//----------------------------------------------------

//удаление знаков препинания----------------------------------------------
void deleting_punctuation_marks(char *str) {

  freopen("text.txt", "a", stdout);

  FILE *file;

  if ((file = fopen("test.txt", "r")) == NULL) {
    puts("File not found!");
    return 1;
  }


  char *mas;
 
  mas = calloc(sizeof(char), 1000);
  fgets(str, 80, file);
  int i, j;
  for (i = 0, j = 0; str[i]; ++i) {
    if (str[i] == '.' || str[i] == ':' || str[i] == ',' || str[i] == '!' ||
        str[i] == '?' || str[i] == ';' || str[i] == '-' || str[i] == '<' ||
        str[i] == '>')
      continue;
    mas[j] = str[i];
    j++;
  }

  if (check(mas))
    printf("\n%s  \n", mas);
  else
    printf("\n%s \n", mas);

  fclose(stdout);
}
//---------------------------------------------------------------------------
//сравнение слов, поиск паландрома
void word_comparison(char *ptr) {
  freopen("text.txt", "a", stdout);

  FILE *f;
  if ((f = fopen("text.txt", "r")) == NULL) {
    puts("File not found!");
    return 1;
  }
  while (!feof(f)) {
    fscanf(f, "%s", ptr);
    if (check(ptr) == 1)
      printf(" \n Slovo: %s Palindrome \n", ptr);
    else
      printf("\n SLOVO: %s Not palindrome \n", ptr);
  }
}
