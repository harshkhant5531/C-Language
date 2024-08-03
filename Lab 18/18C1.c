#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[20], str2[20];
    int choice, i, j;

    do {
        printf("\tMENU\n");
        printf("------------------------------\n");
        printf("1: Find Length of String\n");
        printf("2: Find Reverse of String\n");
        printf("3: Concatenate Strings\n");
        printf("4: Copy String\n");
        printf("5: Compare Strings\n");
        printf("6: Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter String: ");
                scanf("%s", str1);
                i = strlen(str1);
                printf("Length of String: %d\n\n", i);
                break;
            case 2:
                printf("Enter String: ");
                scanf("%s", str1);
                // You can use strrev(str1) here if needed
                printf("Reverse string: %s\n\n", str1);
                break;
            case 3:
                printf("\nEnter First String: ");
                scanf("%s", str1);
                printf("Enter Second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("String After Concatenation: %s\n\n", str1);
                break;
            case 4:
                printf("Enter a String1: ");
                scanf("%s", str1);
                printf("Enter a String2: ");
                scanf("%s", str2);
                printf("\nString Before Copied:\nString1=\"%s\", String2=\"%s\"\n", str1, str2);
                strcpy(str2, str1);
                printf("-----------------------------------------------\n");
                printf("\"We are copying string String1 to String2\"\n");
                printf("-----------------------------------------------\n");
                printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n", str1, str2);
                break;
            case 5:
                printf("Enter First String: ");
                scanf("%s", str1);
                printf("Enter Second String: ");
                scanf("%s", str2);
                j = strcmp(str1, str2);
                if (j == 0) {
                    printf("Strings are Same\n\n");
                } else {
                    printf("Strings are Not Same\n\n");
                }
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid Input. Please Enter valid Input.\n\n");
        }
    } while (choice != 6);

    return 0;
}
