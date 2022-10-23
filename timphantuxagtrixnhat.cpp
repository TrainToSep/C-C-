#include <iostream>
#include <math.h>
using namespace std;

int Find (int a[], int n, int x)
{
    int Value = abs (a[0]-x);
    int Max=0;
    for (int i=1; i<n; i++)
    {
        if (abs (a[i]-x)>Value) {Max=i;
                                 Value = abs (a[i]-x);}
    }
    return Max;
}

int main ()
{
    int x;
    int a[]={-15, 98, -114, 187, -30, 53, -122};
    int n=sizeof (a)/sizeof (a[0]);
    cout << "\n Nhap x = ";
    cin >> x;
    cout << "Phan tu xa gia tri x nhat nam o chi so" << Find (a, n, x);
}