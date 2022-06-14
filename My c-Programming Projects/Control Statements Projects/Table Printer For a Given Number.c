Table Printer For a Given Number

//program to print table for the given number using while loop

#include <stdio.h>

int main()
{
    int i = 1, number = 0;
    
    printf("Enter a Number:");
    scanf("%d",&number);
    
    do
    {
        printf("%d\n",(number*i));
        i++;
    }
    
    while (i<=10);
    
    return 0;
}
