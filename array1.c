//Write a program to findout whether given value exist in array or not. if value found then
// display its position, else display message value not found

#include<stdio.h>
void main () 
{

    int array[10], num1, num2, count, found = 0;

    printf(" Enter the number of elements in the array ");
    scanf("%d",&count);

    printf(" Enter %d elements: count", count);
    for(num2 = 0; num2 < count; num2++) {
        scanf("%d",&array[num2]);
    }

    printf(" Enter the value to search ");
    scanf("%d",&num1);

    for(num2 = 0; num2 < count; num2++) {
        if(array[num2] == num1) {
            printf("Value %d found at position %d.count", num1, num2 + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Value %d not found.count", num1);
}
