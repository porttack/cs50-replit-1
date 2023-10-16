#include "cs50.h"
#include <stdio.h>

int main(void) {
  string name = get_string("Student's name? ");
  // Read input as ints, but convert to floats
  // to ensure final_score computation works
  float midterm = get_int("Midterm score? ");
  float final_exam = get_int("Final exam score? ");
  float homework = get_int("Homework average? ");
  float attendance = get_int("Attendance percentage? ");

  // Check input is within ranges
  if (midterm < 0 || midterm > 100) {
    printf("Midterm score out of range\n");
    return 1;
  }
  if (final_exam < 0 || final_exam > 100) {
    printf("Final exam score out of range\n");
    return 1;
  }
  // ...

  // Compute the final score
  float final_score = 
    (0.3 * midterm) +
    (0.3 * final_exam) +
    (0.2 * homework) +
    (0.2 * attendance);

  char grade = 'F';
  if (final_score >= 90.) {
    grade = 'A';
  } else if (final_score >= 80.) {
    grade = 'B';
  } else if (final_score >= 70.) {
    grade = 'C';
  } else if (final_score >= 60.) {
    grade = 'D';
  }

  printf("%s's Grade: %c (%d)\n", name, grade, (int)final_score);

  return 0;
}