#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  printf("Esta é a avaliação 1.");
  return 0;
}
