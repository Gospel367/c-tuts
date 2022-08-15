#include <stdio.h>
#include <stdlib.h>

int main() {

	int age = 18;
	int *pAge = &age; //This is a pointer saving the mem address of age
	char grade = 'A';
	char *pGrade = &grade;
	double gpa = 3.8;
	double *pGpa = &gpa;

//To print the memory address of the variables
printf("Age: %p\nGrade: %p\nGpa: %p\n", &age, &grade, &gpa);
//To dereference the pointers (grab the data inside the pointer)
printf("%d", *pAge);

return 0;
}
