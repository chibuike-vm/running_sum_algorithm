#include <stdio.h>

int main(void) {
	int i = 0, sum = 0, a;

	do {
		if (i == 0) {
			printf("kindly type in the positive integer you want to sum: ");
			scanf("%d", &a);
		}

		if (i >= 1) {
			printf("kindly input another positive integer you want to sum: ");
			scanf("%d", &a);
		}
		
		if (a >= 0) {
			sum += a;
			i++;	
		} else {
			break;
		}
		
		continue;

		/* the  printf stdout will be skipped by the "continue" execution control flow
		   statement. the continue statement then proceeds to checkout the do..while 
		   condition for another possible iteration if true */
		printf("This should be skipped by the 'continue' execution flow control statement\n");
	} while (i <= 4);

	printf("The total sum of %d positive integer input(s) is = %d\n", i, sum);

	return 0;
}
