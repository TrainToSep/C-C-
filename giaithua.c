#include <stdio.h>
int factory (int n)
{
    if (n==1) return 1;
    return n*fac3tory(n-1);
}
int main ()
{
    int n;
    printf ("Nhap so"); scanf ("%d", &n);
    printf ("Giai thua cua %d la %d", n, factory (n));
}