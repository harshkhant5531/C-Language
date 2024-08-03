#include<stdio.h>
int main()
{
    char b;
    printf("Enter b: ");
    scanf("%c",&b);
    if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
    {
        printf("Character is vowel");
    }
    else
    {
        printf("Character is consonant ");
    }
    return 0;
}