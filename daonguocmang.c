#include <stdio.h>
const int MAX=100;
void NhapMang (int a[], int n)
{
    int i;
    for (i=0; i<n; ++i)
    {
        printf ("\n Nhap gia tri cua phan tu a[%d]", i);
        scanf ("%d", &a[i]);
    }
}
void DaoNguoc (int a[], int n)
{
    int i;
    for (i=n-1; i>=0; --i)
    {
        printf ("\n %d", a[i]);
    }
}
int main ()
{
    int n;
    int arr[MAX];
    printf ("Nhap so phan tu cua mang");
    do { scanf ("%d", &n);
         if (n<=0 || n>MAX) {printf ("Nhap lai so phan tu");}
       } while (n<=0 || n>MAX);
    printf ("\n Cac phan tu"); NhapMang (arr, n);
    printf ("\n Dao nguoc mang"); DaoNguoc (arr, n);
}