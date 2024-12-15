#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
  if (argc != 2) {
    printf("Fil måste anges");
    return 1;
  }

  FILE *fptr;

  // Open a file in read mode
  fptr = fopen(argv[1], "r");

  if (fptr == NULL) {
    printf("Filen finns inte");
    return 2;
  }

  char character;
  int letters = 0;

  // Skriv din kod här
  while ((character = fgetc(fptr)) != EOF) {
    if (character != '\n' && character !='\r' && character != '\t' && character != ' ') {
      letters++;
    }
  }
  fclose(fptr);

  printf("Antal tecken ");
  printf("%d", letters);

  return 0;
}