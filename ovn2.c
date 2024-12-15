#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
  // Skriv din kod här
  if (argc == 1) {
    printf("Minst ett namn ska uppges som argument");
    return 1;
  }

  if (argc > 101) {
    printf("Max 100 namn kan skickas som argument");
    return 2;
  }

  printf("Hej ");
  for (int i = 1; i < argc; i++) {
    printf("%s", argv[i]);

    if (i + 1 != argc) {
      printf(" ");
    }
  }
  printf("!");

  return 0;
}
