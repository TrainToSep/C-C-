#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool IsPrime (int n)
{
    if (n<2) return false;
    for (int j=2; j<=sqrt (n); j++)
    {
        if ( n % j==0) {return false;}    
    }
    return true;
}
int Count (int a[], int n)
{
    int count=0;
    for (int i=0; i<n; i++)
    {
        if (IsPrime (a[i])==true) {count++;} 
    }
    return count;
}
int Display (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (IsPrime (a[i])==true) {printf ("%5d", a[i]);}
    }
}
void NhapMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("Nhap a[%d]", i);
        scanf ("%d", &a[i]);
    }
}
int main ()
{
    int a [100];
    int n, i;
    printf ("Nhap so phan tu cua mang");
    do {scanf ("%d", &n);
        if (n<0 || n>100) printf ("Nhap lai so phan tu cua mang");}
        while (n<0|| n>100);
    NhapMang (a, n);
    if (Count (a, n)>0) 
    {
        printf ("\n Cac so nguyen to cua mang: ");
        Display (a, n);
    }
    else printf ("\n Mang khong co so nguyen to");
}