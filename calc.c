#include <stdio.h>
#include <stdlib.h>

int main() {

	double num1;
	double num2;
	char operator;
	char proceed;
	char choice='n';

	while(proceed!=choice){



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
		printf("Calculate again? (y/n): ");
		scanf("%s", &proceed);

	}



	return 0;

}
