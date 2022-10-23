#include <stdio.h>
int main ()
{
    int n;
    printf ("Nhap so"); scanf ("%d", &n);
    int last = n;
    while (last>=10) {last /= 10;}
    printf ("So dau tien cua %d la %d", n, last);
}