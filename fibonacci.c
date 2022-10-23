#include <stdio.h>
int fibonacci (int n)
{
    if (n==1||n==2)
    return 1;
    return fibonacci (n-1) + fibonacci (n-2);
}
int main ()
{
    int n;
    printf ("Nhap so"); scanf ("%d", &n);
    printf ("So fibonnaci thu %d la %d", n, fibonacci (n));
}