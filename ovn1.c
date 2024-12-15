#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
  // Skriv din kod här
  if (argc != 2) {
    printf("Namn ska uppges som argument");
    return 1;
  }

  printf("Hej ");
  printf("%s", argv[1]);
  printf("!");

  return 0;
}
