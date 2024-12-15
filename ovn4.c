#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
  if (argc != 2) {
    printf("Fil måste anges");
    return 1;
  } FILE *fptr;
  // Open a file in read mode
  fptr = fopen(argv[1], "r");

  if (fptr == NULL) {
    printf("Filen finns inte");
    return 2;
  }

  char character;
  int letterCounts[26] = {0};

  // Skriv din kod här
  while ((character = fgetc(fptr)) != EOF) {
    if ((int) character >= 97 && (int) character <= 97+26) {
      letterCounts[(int) character - 97]++;
    }

    if ((int) character >= 65 && (int) character <= 65+26) {
      letterCounts[(int) character - 65]++;
    }
  }
  fclose(fptr);

  for (int i = 0; i < 26; i++) {
    if (letterCounts[i] == 0) {
      continue;
    }

    printf("%c", i + 97);
    printf(" ");
    printf("%d", letterCounts[i]);
    printf("\n");
  }

  return 0;
}