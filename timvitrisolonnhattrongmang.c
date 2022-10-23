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
int TimMax (int a[], int n, int v)
{
    printf ("\n Vi tri cua phan tu lon nhat trong mang la");
    for (int i=0; i<n; ++i)
    {
       if (a[i]==v) {printf ("\n %5d", i+1);}
    }
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
    TimMax (arr, n, Max(arr, n));
}