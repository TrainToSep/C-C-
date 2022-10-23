#include <stdio.h>
const int MAX = 100;
void insert (int a[], int n)
{
    int i;
    for (i=0; i<n; ++i)
    {
        printf ("\n Nhap phan tu a[%d]", i);
        scanf ("%d", &a[i]);
    }
}
int SumOdd (int a[], int n)
{
    int i;
    int tong=0;
    for (i=0; i<n; ++i)
    {
        if (a[i]%2==1) {tong+=a[i];}
    }
    return tong;
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
    printf ("\n Tong cac so le cua mang la %d", SumOdd (arr, n));
}