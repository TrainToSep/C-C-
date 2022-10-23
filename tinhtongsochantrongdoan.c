#include <stdio.h>
int main ()
{
    int a, b, i, sum;
    printf ("\n Nhap a "); scanf ("%d", &a);
    printf ("\n Nhap b "); scanf ("%d", &b);
    if (a % 2 !=0) a++;
    for (a = i; i <= b; i += 2) {sum += i;}
    printf ("\n Tong cac so chan trong doan ab la %d", sum);
}