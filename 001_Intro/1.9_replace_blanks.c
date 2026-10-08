// Excercise 1.9: Write a program to copy its input to its output, replacing
// each string of one or more blanks with a single blank

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void main() {

  int c;
  bool last_was_space = true;

  while ((c = getchar()) != '\n') {
    if (c == ' ') {
      if (last_was_space) {
        continue;
      }
      last_was_space = true;

    } else {
      last_was_space = false;
    }
    putchar(c);
  }
}
