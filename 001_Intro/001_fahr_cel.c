#include <stdio.h>

// Excercise 1.3: Modify the temperature conversion function to print a heading
// above the table.

// void
// main()
// {
//   float fahr, celsius;
//   float lower, upper, step;
//
//   printf("F    C\n");
//   lower = 0;
//   upper = 300;
//   step = 20;
//
//   fahr = lower;
//
//   while (fahr <= upper){
//
//   celsius = (5.0/9.0) * (fahr - 32);
//   printf("%3.0f %6.1f\n", fahr, celsius);
//   fahr = fahr + step;
// }
// }

// Excercise 1.4: Write a program to print the corresponding celsius to
// Fahrenhiet table

void main() {
  float fahr, celsius;
  float lower, upper, step;

  printf("C    F\n");
  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  while (celsius <= upper) {

    fahr = (9.0 / 5.0) * (celsius + 32);
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
