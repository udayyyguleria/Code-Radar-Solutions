#include <stdio.h>

int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a==b==c){
        printf("Equilateral");
    }
    else if((a==b && a != c && b !=c) || (b==c && b != a && c !=a) || (a==c && a != b && c !=b)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}