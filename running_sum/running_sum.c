#include <stdio.h>

int main(void) {
	int i = 0, sum = 0, a;
	printf("kindly type in the positive integer you want to sum: ");
	 
	for (i; i <= 4; i++) {
		if (i == 0) {
			scanf("%d", &a);
		} else {
			printf("kindly type in another positive integer you want to sum: ");
			scanf("%d", &a);
		}


		if (a >= 0) {
			sum += a;
		} else {
			break;
		}
	}

	printf("The total sum of %d positive integer input(s) is = %d\n\n", i, sum);
           
	return 0;
}
