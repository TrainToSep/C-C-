#include <stdio.h>
const int MAX = 100;
int main ()
{
    int n;
    int a[MAX];
    printf ("Nhap so phan tu cua mang"); 
    do {scanf ("%d", &n);if (n<=0 || n>MAX) {printf ("Nhap lai so phan tu");}}
        while (n<=0 || n>MAX);
    printf ("NHAP CAC PHAN TU CUA MANG");
    for (int i=0; i<n; ++i)
    {
        printf ("\n Nhap phan tu a[%d]=", i);
        scanf ("%d", &a[i]);
    }
    printf ("Cac phan tu sap xep theo thu tu tang dan: ");
    int j, temp;
    for (int i=0; i<n-1; ++i)
    {
        for (j=i+1; j<n;++j)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i=0; i<n; ++i)
    {
        printf ("%5d", a[i]);
    }
}