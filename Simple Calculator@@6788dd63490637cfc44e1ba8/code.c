#include <stdio.h>



int main() {
    int x,y,r;
    char z;
    scanf("%d %d %c",&x ,&y ,&z);
    if (z=='+'){
        r=x+y;
        print("",r);
    }

    else if(z=='-'){
        r=x-y;
        print("",r);
    }

    else if(z=='*'){
        r=x*y;
        print("",r);
    }

    else if (z=='/'){
        r=x/y;
        print("",r);
    }
    
    return 0;
}