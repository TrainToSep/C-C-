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
int XuatMang (int a[], int n)
{
    int i;
    for (i=0;i<n;++i)
    {
        printf ("%5d", a[i]);
    }
}
void Tangdan (int a[], int n)
{
    int temp;
    for (int i=0; i<n-1; ++i)
    {
        for (int j=i+1; j<n;++j)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void Giamdan (int a[], int n)
{
    int temp;
    for (int i=0; i<n-1; ++i)
    {
        for (int j=i+1; j<n;++j)
        {
            if (a[i]<a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main ()
{
    int arr[MAX];
    int n, v;
    printf ("\n Nhap so phan tu cua mang");
    do {scanf ("%d", &n);
        if (n<=0 || n>MAX) {printf ("Nhap lai so phan tu cua mang");}
        } while (n<=0 || n>MAX);
    printf ("\n =======Nhap Mang======"); NhapMang (arr, n);
    printf ("\n =======Xuat Mang======"); XuatMang (arr, n);
    Tangdan (arr, n);
    printf ("\n Mang sap xep theo thu tu tang dan la ");
    XuatMang (arr, n);
    Giamdan (arr, n);
    printf ("\n Mang sap xep theo thu tu giam dan la ");
    XuatMang (arr, n);
}