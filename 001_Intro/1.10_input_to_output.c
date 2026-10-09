// Excercise 1.10: Write a program to copy its input to its output, replacing
// each tab by \t, each backspace by \b and each backslash by \\. This makes
// tabs and backspaces visible in an unambiguous way.

#include <ctype.h>
#include <stdio.h>

void main() {

  int c;

  while ((c = getchar()) != '\n') {
    if (c == '\t') {
      printf("\\t");
    } else if (c == '\\') {
      printf("\\");
    }
    putchar(c);
  }
}
