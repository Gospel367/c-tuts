#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*functions intro */
void comment(){
	printf("\nCongratulations guy! You made it!");
}

struct Student {
	char name[50];
	char major[50];
	double gpa;

	int age;

};

int main()
{
	/*iIntro to data types*/

	char grade ='A';
	char thename[] = "Samuel iPeter";
	int age = 17;
	double gpa = 3.8;

	printf("Hello %s!\n", thename);
	printf("Your age is %d!\n", age);
	char nameF[60];
	char nameL[60];
	char school[60];
	char class_enrolledF[60];
	char class_enrolledL[60];
	double class_gpa;
	int the_age;

	/*Keyboard inputs using fgets and scanf*/

	printf("What is your school name: ");
	fgets(school, 60, stdin);
	printf("What is your name: ");
	scanf("%s%s", nameF, nameL);
	printf("What is your class name: ");
	scanf("%s%s", class_enrolledF, class_enrolledL);
	printf("What is your age: ");
	scanf("%d", &the_age);
	printf("What is your class gpa: ");
	scanf("%lf", &class_gpa);
	printf("Your name is %s %s\n", nameF, nameL);
	printf("You are in %s %s\n", class_enrolledF, class_enrolledL);
	printf("The name of your school is %s", school);
	printf("Your age is %d\n", the_age);
	printf("Your class_gpa is %f\n", class_gpa);

	/*If and elif statements with operators: ==, ||, &&, <==, >==*/

	if(class_gpa > 4.0){
		comment();
	}

	else if(class_gpa > 3.5 && class_gpa < 4.0) {
		printf("\nYou really tried Friend\n!");
	}

	else {
		printf("Very poor guy! You failed!\n");
	}

	/* Switch statements*/

	char class_grade='B';

	switch(class_grade){
		case 'A':
			printf("Congrats, You did Perfect\n");
			break;
		case 'B':
			printf("Congrats, You did great\n");
			break;
		case 'C':
			printf("Congrats, You did fairly\n");
			break;
		case 'D':
			printf("Congrats, You did poorly\n");
			break;
		default:
			printf("Invalid grade\n");
	}

	/* structs explained */

	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.5;
	strcpy(student1.name, "Ferdinand");
	strcpy(student1.major, "Computer Science");

	printf("%s\n", student1.name);

	struct Student student2;
	student2.age = 22;
	student2.gpa = 3.5;
	strcpy(student2.name, "Ferdinand");
	strcpy(student2.major, "Computer Science");

	printf("%s\n", student2.major);

	/* While Loops */

	int index = 1;
	while(index <= 6) {
		printf("%d\n", index);
		index++;
	}

	/* guess game */

	int secretnum = 4;
	int guess;
	int guess_limit = 1;

	while(guess_limit <= 3){
		printf("Enter your guess number: ");
		scanf("%d", guess);
	/*	if (scanf("%d", guess)==secretnum){
		printf("You Win");
		}
		else {
		printf("Oops!");
		}
		guess_limit++;
	}
	printf("You lose"); */

	return 0;

}


