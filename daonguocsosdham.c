#include <stdio.h>
int Reverse (int n)
{ 
    int reNum = n%10;
    n/=10;
    while (n>0)
    {
        int last = n%10;
        reNum = reNum*10+last;
        n/=10;
    }
    return reNum;
}
int main ()
{
    int n;
    printf ("Nhap so"); scanf ("%d", &n);
    printf ("%d", Reverse (n));
}