#include <stdio.h>

int factorial(int n)
{
    if (n <= 0) {
	return 1;
    } else {
	return n * factorial(n-1);
    }
}


int main(int argc, char *argv[])
{
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
}
