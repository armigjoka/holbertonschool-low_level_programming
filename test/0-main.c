#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "student.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	student *student1 = NULL;
	student *student2 = NULL;
	student *student3 = NULL;
	int n, s, max;
	float a;
	
	student1 = malloc(sizeof(student));
	student2 = malloc(sizeof(student));
	student3 = malloc(sizeof(student));
	
	student1->name = "Armela";
	student1->grade = 10;
	student1->next = student2;
	student2->name = "Leo";
	student2->grade = 9;
	student2->next = student3;
	student3->name = "Elisa";
	student3->grade = 8;
	student3->next = NULL;
	n = print_list(student1);
	printf("There are %d records.\n", n);
	s = sum(student1);
	printf("The sum of grades is %d.\n", s);
	a = avg(student1);
	printf("The average of grades is %f\n", a);
	max = max_grade(student1);
	printf("The highest grade is %d.\n", max);
	return (0);
}
