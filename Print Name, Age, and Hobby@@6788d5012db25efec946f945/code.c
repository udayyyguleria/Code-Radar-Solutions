#include <stdio.h>

int main(){
    char name[50];
    char age[50];
    char hobby[50];

    scanf("%s %s %s", &name , &age , &hobby);

    printf("Name: %s \nAge: %s \nHobby: %s",name , age , hobby);

    return 0;
}