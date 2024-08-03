#include <stdio.h>

void copyArray(int *source, int *destination, int size) 
{
    for (int i = 0; i < size; i++)
     {
        *(destination + i) = *(source + i);
    }
}

int main()
 {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    copyArray(source, destination, 5);

    printf("Source array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(source + i));
    }

    printf("\nDestination array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(destination + i));
    }

}
