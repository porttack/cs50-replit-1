#include "cs50.h"
#include <stdio.h>

int main(void) {
  string name = get_string("Student's name? ");
  // TODO: Ask for other values
  // Note: May want to convert to float or double if multiplying ints and floats creates issues.

  // TODO: Check at least two input values are within range
  // TODO: Compute student's grade
  char grade = 'B';

  printf("%s's Grade: %c\n", name, grade);
  
  return 0;
}