#include <iostream>
using namespace std;

void PrintArray (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << a[i] << "\t";
    }
}

void Swap (int &a, int &b)
{
    int tmp;
    a=tmp;
    b=a;
    b=tmp;
}

void BubbleSort (int a[], int n)
{
    bool HaveSwap;
    for (int i=0; i<n-1; i++)
    {
        HaveSwap=false;
        for (int j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1]) {swap (a[j], a[j+1]);
                              HaveSwap=true;}
        }
        if (HaveSwap==false) {break;}
    }
}

void SelectionSort (int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>a[j]) {swap (a[i], a[j]);}
        }
    }
}

void InsertionSort (int a[], int n)
{
    int j, key, i;
    for (i=1; i<n; i++)
    {
        key = a[i];
        j=i-1;
        while (key<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1] = key;
    }
} 

int main ()
{
    int a[]={-15, 98, -114, 187, -30, 53, -122};
    int n=sizeof (a)/sizeof (a[0]);
    InsertionSort (a, n);
    PrintArray (a, n);
}