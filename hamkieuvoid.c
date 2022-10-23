#include <stdio.h>
void Print (int time)
{
    for (int i=0; i<=time; i++)
    {printf ("\nLap trinh khong kho!");}
}
void Devisor (int num)
{
    for (int n=1; n<=num; n++)
    {
        if (num<0) {num*=-1;}
        if (num%n==0) {printf ("\n%d", n);}
    }
}
int main ()
{   
    printf ("\nTruoc khi goi ham");
    Print (4);
    Devisor (10);
    printf ("\nSau khi goi ham");
}