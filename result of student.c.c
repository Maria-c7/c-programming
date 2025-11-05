#include <stdio.h>
int main()
{
    float m1,m2,m3,total,average;
    char grade;
    printf("enter the marks:");
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    average=m1+m2+m3/3;
    printf("\n total marks:%f",total);
    printf("\n average marks:%f",average);
    if(average>=90)
    {
        grade='A';
    }
    else if(average>=80)
    {
        grade='B';
    }
    else if(average>=70)
    {
        grade='C';
    }
    else if(average>=60)
    {
        grade='D';
    }
    else if(average>=50)
    {
        grade='E';
    }
    else
    {
        grade='F';
    }
    {
    printf("\ngrade=%c",grade);
    }
    if (average>=50)
    {
        printf("\npass");
    }
    else
    {
      printf("\nfail");
    }


    return 0;
}
