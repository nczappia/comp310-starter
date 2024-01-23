#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("example.txt", "w");
    
    if(fptr == NULL){
	printf("Error Writing to File");
	exit(1);
    }

    fputs("Hello, World!", fptr);

    fclose(fptr);

    fptr = fopen("example.txt", "r");

    if(fptr == NULL){
	printf("Error Reading File");
	exit(1);
    }

    char buffer[14];

    fgets(buffer, 14, fptr);
   
     
}
