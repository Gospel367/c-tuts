#include <stdio.h>
#include <stdlib.h>



int main() {

/* Arrays */
int numberlist[] = {2,3,8,99.23,7,0 };

numberlist[2] = 108;
	printf("%d\n", numberlist[2]);
	printf("%d\n\n", numberlist[6]);

/*While Loops*/

	int i = 1;
	while(i <= 5) {
		printf("%d\n", i);
		i++;
		}

/*For Loops*/
	int g;
	for (g = 1; g <= 5; g++) {
		printf("%d\n\n", g);
	
	}

/* for loop example */

 int luckynum[] = {45,7, 67, 32, 11, 9};
 luckynum[0] =44;

 int h;
 	for (h = 0; h <= 5; h++) {
		printf("%d\n", luckynum[h]);
		
		}

/* Using while loop for above example */
 int k = 0;
 
 int luckynumber[] = {45,7, 67, 32, 11, 9};

 while(k <= 6) {
		printf("%d\n\n", luckynumber[k]);
		k++;

		}

/* 2D arrays */
int nums[4][3] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9},
				{10, 11, 12 }
				};

printf("%d %d\n", nums[0][1], nums[2][0]);


/* Nested For Loops */
int l, m;
for(l = 0; l < 4; l++) {
	for(m = 0; m < 3; m++ ) {
	 printf("%d,", nums[l][m]);
	 }
	 printf("\n");
	  }
	
	return 0; 

		}
