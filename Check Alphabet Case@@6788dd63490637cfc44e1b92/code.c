#include <stdio.h>

int main(){
    char alph;
    
    scanf("%c", &alph);

    if (alph>='a'&& alph<='z'){
        printf("Lowercase");
    }

    else if (alph>= 'A' && alph <= 'Z'){
        printf("Uppercase");
    }

    else{
        printf("Not an alphabet");
    }
}