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

  int lettersSorted[26];

  for (int i = 0; i < 26; i++) {
    lettersSorted[i] = i;
  }

  int swapped = 1;
  while (swapped == 1) {
    swapped = -1;
    for (int i = 1; i < 26; i++) {
      if (letterCounts[i - 1] < letterCounts[i]) {
        int temp = letterCounts[i];
        letterCounts[i] = letterCounts[i - 1];
        letterCounts[i - 1] = temp;

        temp = lettersSorted[i];
        lettersSorted[i] = lettersSorted[i - 1];
        lettersSorted[i - 1] = temp;

        swapped = 1;
      }
    }
  }

  for (int i = 0; i < 26; i++) {
    if (letterCounts[i] == 0) {
      continue;
    }


    printf("%c", lettersSorted[i] + 97);
    printf(" ");
    printf("%d", letterCounts[i]);
    printf("\n");
  }

  return 0;
}
