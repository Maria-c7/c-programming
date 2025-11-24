#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    for(j=;j<10;j++)
        int n=5;
    int value=35,i;
    for(i=n;i>=0&& arr[i]>value;i--)
        arr[i+1]=arr[i];
    arr[i+1]=value;
    n++;
    printf("Array after insertion");
    for(i=0;i<n;i++)
        printf("%d",arr[1]);
    return 0;
}
