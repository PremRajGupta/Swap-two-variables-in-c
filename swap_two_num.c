//Write a program to Swap two variables
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,temp;
    printf("\nEnter a Number=");
    scanf("%d",n);
    printf("\nEnter a Second Number=");
    scanf("%d",m);
    temp=n;
    n=m;
    m=temp;
    printf("\n Swap number N=%d M=%d",n,m);
getch();
}