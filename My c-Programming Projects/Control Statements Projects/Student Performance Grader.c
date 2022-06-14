Student Performance Grader

// Program to calculate the grade of the student according to the specified marks

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks?");
    scanf("%d",&marks);
    
    if (marks>85 && marks <= 100){
        printf("Congratulations! You Scored Grade A...");
    }
    
     else if (marks>60 && marks <= 85){
        printf("You Scored Grade B+...");
    }
    
    else if (marks>40 && marks <= 60){
        printf("You Scored Grade B...");
    }
    
      else if (marks>30 && marks <= 40){
        printf("You Scored Grade C...");
    }
    
    else{
        printf("Sorry you fail...");
    }
}