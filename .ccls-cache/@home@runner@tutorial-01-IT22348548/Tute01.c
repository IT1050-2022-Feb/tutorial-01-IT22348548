/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2;
  float total ,avg;

  printf("Enter subject 1 marks : ");
  scanf("%f",&mark1);

  printf("Enter subject 2 marks : ");
  scanf("%f",&mark2);  

  total = mark1 + mark2;
  avg = total / 2.0;

  printf("Average of the two marks : %.2f",avg);
  
  return 0;
}

