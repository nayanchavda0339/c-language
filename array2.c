// write a program to display array in reverse order
#include<stdio.h>
void main()
{
    char name[8];
    int count=0;

    printf("Enter value of name");
    for (count=0; count<8; count++)
    {
        scanf("%c",&name[count]);
        if(name[count] == '\n')
        {
            break;
        }
    }
    for (count=count; count>=0; count--)
    {
        printf("%c",name[count]);
    }
}