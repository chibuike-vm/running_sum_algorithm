#include <stdio.h>

int main(void) {
	int i = 0, sum = 0, a;
	printf("kindly type in the positive integer you want to sum: ");

	while (i >= 0 && i <= 4) {
		if (i >= 1) {
			printf("Kindly type in another positive integer you want to sum: ");
		}
		
		scanf("%d", &a);

		if (a >= 0 ) {
			sum += a;
		} else {
			goto next_action;		
		}

		i++;
	}

	next_action:
		printf("The total sum of the %d positive integer input(s) is = %d\n", i, sum);

	return 0;
}
