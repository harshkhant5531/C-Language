#include<stdio.h>
void main(){
    int R, G, B;
    float white, cyan, magenta, yellow, black, R1, G1, B1;
    printf("Enter R:");
    scanf("%d", &R);
    printf("Enter G:");
    scanf("%d", &G);
    printf("Enter B:");
    scanf("%d", &B);
    R1 = R/255.0;
    G1 = G/255.0;
    B1 = B/255.0;
    if ( R1>B1 && R1>G1)
    {
        white = R1;
    }
    else if (B1>R1 && B1>G1)
    {
        white = B1;
    }
    else
    {
        white = G1;
    }
    printf("%f",white);
    cyan = (white-(R1/255.0))/white;
    {
        printf("%f",&cyan);
    }
    magenta = (white-(G1/255.0))/white;
    {
        printf("%f",&magenta);
    }
    yellow = (white-(B1/255.0))/white;
    {
        printf("%f",&yellow);
    }
    black = 1 - white;
    {
        printf("%f",&black);
    }
}