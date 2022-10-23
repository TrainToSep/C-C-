#include <stdio.h>
#define Max_size 100
// C1: Sắp xếp mảng, số lớn thứ hai là a[1]
// C2: Tìm đồng thời số lớn thứ nhất và lớn thứ hai
//CÁCH 1
void arrange (int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int findByLoop (int a[], int n)
{
    int firstMax, secondMax;
    if (a[0]>a[1])
    {
        firstMax=a[0];
        secondMax=a[1];
    }
    else
    {
        firstMax=a[1];
        secondMax=a[0];
    }
    for (int i=2; i<n; i++)
    {
        if (a[i]>=firstMax)
        {
            secondMax=firstMax;
            firstMax=a[i];
        }
        if (a[i]>secondMax && a[i]<firstMax)
        {
            secondMax=a[i];
        }
    }
    return secondMax;
}
int main ()
{
    int a[]={5, 7, 1, 20, 6, 9};
    int n=sizeof(a)/sizeof(a[0]);
    printf ("Gia tri lon thu hai cua mang la %d", findByLoop (a, n));
}