#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b;
    char s;
    scanf("%f %c %f", &a, &s, &b);

    if(s=='+'){
    printf("%f",a+b);
    }
    else if(s=='-'){
    printf("%f",a-b);
    }
    else if(s=='*'){
    printf("%f",a*b);
    }
    else if((s=='/')&& (b!=0)){
    printf("%f",a/b);
    }
    return 0;
}
