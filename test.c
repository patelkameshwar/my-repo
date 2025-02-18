#include<stdio.h>

int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You are %d, can vote!", age);
    }
    else if (age>=15)
    {
        printf("You are %d, You have to wait!", age);
    }
    else
        printf("Complete your Schooling First!");
    
}