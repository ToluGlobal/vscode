Voters Eligibity Checker

//program that check whether a person is eligible to vote or not

#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age?");
    scanf("%d",&age);
    
    if (age>=18){
        printf("You are eligibe to vote...Get your PVC!");
    }
    
    else
    {
        printf("Sorry... you cannot vote");
    }
}