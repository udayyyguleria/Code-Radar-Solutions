#include <stdio.h>
int main() {
    int x,y,r;
    char z;
    scanf("%d %d %c",&x ,&y ,&z);
    if (z=='+'){
        r=x+y;
        printf("",r);
    }

    else if(z=='-'){
        r=x-y;
        printf("",r);
    }

    else if(z=='*'){
        r=x*y;
        printf("",r);
    }

    else if (z=='/'){
        if (y != 0){
            r=x/y;
            printf("",r);
        }
        else{
            printf("invalid");
        }

    }
    
    return 0;
}