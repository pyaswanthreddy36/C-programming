#include <stdio.h>
int main (){
    int age;
    printf("enter the age of the person:");
    scanf("%d", &age);
    (age>=18)? printf("the person is eligible to vote"): printf("the person is not eligible to vote");
    return 0;
}