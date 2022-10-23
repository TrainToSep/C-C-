#include <stdio.h>
#define MAX 100
void ThemPhanTu (int a[], int &n, int val, int pos)
{
    if (n >= MAX) {return;}
    if (pos<=0) {pos=0;}
    else if (pos>n) {pos=n;}
    for (int i=n; i>pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=val;
    ++n;
}
void XoaPhanTu (int a[], int &n, int pos)
{
    if (n<=0) {return;}
    if (pos<=0) {pos=0;}
    else if (pos>=n) {pos=n-1;}
    for (int j=pos; j<n-1; j++)
    {
        a[j]=a[j+1];
    }
    --n;
}
void NhapMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("\n Nhap gia tri a[%d]", i); scanf ("%d", &a[i]);
    }
}
void XuatMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("%5d", a[i]);
    }
}
int main ()
{
    int n, a[MAX], val, pos1, pos2;
    printf ("\n Nhap so phan tu cua mang"); 
    do {scanf ("%d", &n);
    if (n>MAX || n<=0) {printf ("Nhap lai so phan tu");
                       scanf ("%d", &n);}}
                       while (n>MAX || n<=0);
    printf ("\n =========NHAP MANG=========");
    NhapMang (a, n);
    printf ("\n =========XUAT MANG=========");
    XuatMang (a, n);
    printf ("\n Nhap gia tri can chen"); scanf ("%d", &val);
    printf ("\n Nhap vi tri can chen"); scanf ("%d", &pos1);
    ThemPhanTu (a, n, val, pos1);
    XuatMang (a, n);
    printf ("\n Can xoa gia tri o chi so"); scanf ("%d", &pos2);
    XoaPhanTu (a, n, pos2);
    XuatMang (a, n);
}
