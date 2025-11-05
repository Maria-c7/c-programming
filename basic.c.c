#include <stdio.h>
int main()
{
    int a,b;
    int add,subtract,multiply,divide;
    printf("enter the two integers:");
    scanf("%d%d",&a,&b);
    add=a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/b;
    printf("add:%d%d",add);
    printf("subtract:%d%d",subtract);
    printf("multiply:%d%d",multiply);
    printf("divide:%d%d",divide);
    return 0;
}
