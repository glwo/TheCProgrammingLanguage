// Exercise 1.8: Write a program to count blanks, tabs, and newlines

#include <stdio.h>

int main(void) {
  int n1 = 0;
  int c;

  while ((c = getchar()) != '\n') {
    printf("got: %d\n", n1);
    if (c == '\n') {
      n1++;
    } else if (c == ' ') {
      n1++;
    } else if (c == '\t') {
      n1++;
    }
  }

  printf("%d\n", n1);
  return 0;
}
