#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100
void NhapMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("\n Nhap phan tu a[%d]", i); scanf ("%d", &a[i]);
    }
}
void XuatMang (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("%5d", a[i]);
    }
}
int average (int a[], int n)
{
    int sum=0;
    int dem=0;
    for (int i=0; i<n; i++)
    {
        if (i%2==0)
        {
            if (a[i]%2==1)
            {
                dem+=1;
                sum+=a[i];
            }
        }
    }
    int average = sum/dem;
    return average;
}
int FindMax (int a[], int n)
{
    int Max;
    if (a[0]>a[1]) {Max=a[0];}
    else {Max=a[1];}
    for (int i=2; i<n; i++)
    {
        if (a[i]>Max)
        {Max=a[i];}
    }
    return Max;
}
int FindMin (int a[], int n)
{
    int Min=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]<Min) {Min=a[i];}
    }
    for (int i=0; i<n; i++)
    {
        if (Min==a[i]) {return i;}
    }
}
int CountSquareNumber (int a[], int n)
{
    int Count=0;
    for (int i=0; i<n; i++)
    {
        float SN=sqrt(a[i]);
        if (SN==(int)SN) {Count++;}
    }
    return Count;
}
void FindPrimeNumber (int a[], int n)
{
    int count=0;
    for (int i=0; i<n; i++)
    {
        bool PN=true;
        for (int j=2; j<=sqrt(a[i]); j++)
        {
            if (a[i]%j==0) {PN=false;}
        }
        if (a[i]>=2 && PN==true) {printf ("%5d", a[i]);
                                  count++;}
    }
    if (count==0) {printf ("Mang khong co so nguyen to nao!");}
}
void Replace (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]<0) {a[i]=0;}
    }
}
void Delete (int a[], int &n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]==0)
        {
            for (int j=i; j<n-1; j++)
            {
                a[j]=a[j+1];
            }
            --n;
            Delete (a, n);
        }
    }
}
void SelectionSort (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                int key=a[i];
                a[i]=a[j];
                a[j]=key;
            }
        }
    }
}
int main ()
{
    int n, a[MAX];
    printf ("\n Nhap so phan tu cua mang");
    do {scanf ("%d", &n);
        if (n<=0 || n>MAX){printf ("Nhap lai so phan tu");}}
        while (n<=0||n>MAX);
    printf ("\n =========NHAP MANG=========");
    NhapMang (a, n);
    printf ("\n =========XUAT MANG=========\n");
    XuatMang (a, n);
    printf ("\n Trung binh cong cac so le o vi tri chan la: %d", average (a, n));
    printf ("\n Gia tri lon nhat cua mang la %d", FindMax (a, n));
    printf ("\n Gia tri nho nhat cua mang nam o chi so %d", FindMin (a, n));
    printf ("\n Mang co %d so chinh phuong", CountSquareNumber (a, n));
    printf ("\n Cac so nguyen to cua mang la:"); FindPrimeNumber (a, n);
    printf ("\n Thay the so am bang so 0"); 
    Replace (a, n); XuatMang (a, n); 
    printf ("\n Xoa cac so 0 khoi mang"); 
    Delete (a, n); XuatMang (a, n);
    printf ("\n Mang sap xep theo thu tu tang dan la"); SelectionSort (a, n);
    XuatMang (a, n);
}