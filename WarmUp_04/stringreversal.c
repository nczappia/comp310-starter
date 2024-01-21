#include <stdio.h>

int main()
{
    char str[] = "Hello";
    int str_length = sizeof(str) - 1;
    char reversed[6];

    for(int i=0; i < str_length; ++i){
	reversed[str_length - 1 - i] = str[i];
    }
    printf("Reversed String: %s\n", reversed);
}
