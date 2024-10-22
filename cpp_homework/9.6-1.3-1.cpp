#include<stdio.h>
int main()
{
    printf("please enter your name and age:");
    char name[10];
    int age;
    scanf("%s %d",name,&age);
    printf("name is : %s \n",name);
    printf("age is : %d \n",age);
    return 0;
}