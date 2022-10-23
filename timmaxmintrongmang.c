#include <stdio.h>
const int MAX = 100;
void insert (int a[], int n)
{
    int i;
    for (i=0; i<n; ++i)
    {
        printf ("\n Nhap phan tu a[%d]=", i);
        scanf ("%d", &a[i]);
    }
}
int MinTwoNum (int a, int b)
{
    return (a<b ? a:b);
}
int MaxTwoNum (int a, int b)
{
    return (a>b ? a:b);
}
int Max (int a[], int n)
{
    int i;
    int Max = MaxTwoNum (a[0], a[1]);
    for (i=2; i<n; ++i)
    {
       Max = MaxTwoNum (Max, a[i]);
    }
    return Max;
}
int Min (int a[], int n)
{
    int i;
    int Min=MinTwoNum (a[0], a[1]);
    for (i=2; i<n; ++i)
    {
       Min = MinTwoNum (a[i], Min);
    }
    return Min;
}
int main ()
{
    int n;
    int arr[MAX];
    printf ("Nhap so phan tu cua mang"); 
    do {scanf ("%d", &n);
        if (n<=0 || n>MAX) {printf ("Nhap lai so phan tu");}}
        while (n<=0 || n>MAX);
    printf ("\n NHAP MANG"); insert (arr, n);
    printf ("\n Phan tu lon nhat cua mang la %d", Max (arr, n));
    printf ("\n Phan tu nho nhat cua mang la %d", Min (arr, n));
}