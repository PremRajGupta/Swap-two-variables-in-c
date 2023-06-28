#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=5,temp;
    clrscr();

    printf("\n Without swap A=%d B=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n swap\n A=%d B=%d",a,b);
getch();
}
