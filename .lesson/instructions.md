# Calculating Student Grades

This assignment is meant to reinforce topics covered in the cs50 week 1 [Operators Video](https://cs50.harvard.edu/ap/2024/curriculum/x/shorts/operators/)

You are tasked with writing a C program to calculate the final grades for a class of students. The program should take the following inputs for each student:

* Student's name (string)
* Midterm score (integer, out of 100)
* Final exam score (integer, out of 100)
* Homework average (integer, out of 100)
* Attendance percentage (integer, out of 100)

The grading criteria are as follows:

* Midterm exam contributes 30% to the final grade.
* Final exam contributes 30% to the final grade.
* Homework average contributes 20% to the final grade.
* Attendance contributes 20% to the final grade.

Grades should be calculated using the formula:
```
FinalGrade = (0.3 * Midterm) + (0.3 * FinalExam) + (0.2 * Homework) + (0.2 * Attendance)
```

After calculating the final grade, the program should determine and print the letter grade based on the following scale:

* A: 90-100
* B: 80-89
* C: 70-79
* D: 60-69
* F: below 60

Your task is to:

1. Write a C program that takes input for each student's information, calculates the final grade, and determines the letter grade based on the scale provided.
2. Implement appropriate error checking to ensure that input values are within valid ranges (0-100). Check at least 2 input values.
3. Use the required operators and concepts as mentioned in the challenge requirements.

Note: This challenge involves using various operators such as arithmetic operators (+, -, *, /), assignment operators (+=, *=), relational operators (<, >, <=, ==, !=), logical operators (&&, ||, !), and the use of conditional statements to determine letter grades.

## Example Output

```
Student's name? Eric Brown
Midterm score? 95
Final exam score? 93
Homework average? 88
Attendance percentage? 100
Eric Brown's Grade: A
```