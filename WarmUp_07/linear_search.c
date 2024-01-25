#include <stdio.h>

int linearSearch(int arr[], int arr_length, int target)
{
    for(int i=0; i<arr_length; ++i){
	if(arr[i] == target)
	    return i;
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    int arr_length = sizeof(array)/sizeof(array[0]);
    int index = linearSearch(array, arr_length, target);
    if(index != -1)
	printf("Element found at index: %d\n", index);
    else
	printf("Element not found\n");

    return 0;
}
