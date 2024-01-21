#include <stdio.h>

int main()
{
	int numbers[5] = {1, 2, 3, 4, 5};
	int sum = 0;
	int length = sizeof(numbers) / sizeof(numbers[0]);

	for(int i=0; i<length; ++i){
		sum += numbers[i];
	}
	double average = sum / length;

	printf("Sum: %d\n", sum);
	printf("Average: %f\n", average);

	return 0;
}

