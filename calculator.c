#include <stdio.h>
#include <stdlib.h>

int main() {

	double num1;
	double num2;
	char operator;
	int choice=1;

	while(choice==1){

		
		printf("Enter first number: ");
		if (scanf("%lf", &num1)!=1) {
			fprintf(stderr, "error: Input must be a fucking number\n");
			return EXIT_FAILURE;
		}
		printf("Enter second number: ");
		if (scanf("%lf", &num2)!=1) {
			fprintf(stderr, "error: Input must be a fucking number\n");
			return EXIT_FAILURE;
		}

	printf("Enter operator: ");
		scanf("%s", &operator);



		switch(operator) {
			case '+':
				printf("%f\n", num1 + num2);
				break;
			case '-':
				printf("%f\n", num1 - num2);
				break;
			case '*':
				printf("%f\n", num1 * num2);
				break;
			case '/':
				printf("%f\n", num1 / num2);
				break;
			default:
				printf("Invalid Operator chosen");

	}
           	printf("Do you want to calculate again (yes/no): ");
			scanf("%d", &choice);
	}


	return 0;

}
