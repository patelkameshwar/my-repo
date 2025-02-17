#include<stdio.h>

int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You are %d, can vote", age);
    }
    else
    printf("You can not vote");
}