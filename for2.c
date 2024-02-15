//print to program full pyramid

#include<stdio.h>
void main ()
{
    int space = 0;
    int count = 0;

for (space=0; space<4; space++)
{
    printf("_");
}
    printf("*");
    printf("\n");
    space=0;

    for (space=0; space<3; space++)
    {
        printf("_");
    }
    space=0;
    for (count=0; count<3; count++)
    {
        printf("*");
    }
    count=0;
        printf("\n");

    for(space=0; space<2; space++)    
    {
        printf("_");
    }
    space=0;
    for(count=0; count<5; count++)
    {
        printf("*");
    }
    count=0;
        printf("\n");
    for (space=0; space<1; space++)
    {
        printf("_");
    }
    for (count=0; count<7; count++)
    {
        printf("*");
    }
    count=0;
        printf("\n");
    for(count=0; count<9; count++)
    {
        printf("*");
    }

}