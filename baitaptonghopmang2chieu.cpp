#include <stdio.h>
#include <utility>
void NhapMaTran (int a[][100], int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf ("Nhap gia tri a[%d][%d]", i, j);
            scanf ("%d", &a[i][j]);
    }
    }
}
void XuatMaTran (int a[][100], int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf ("%d\t", a[i][j]);
        }
        printf ("\n");
    }
}
int TongChan (int a[][100], int m, int n)
{
    int sum=0;
    for (int i=0; i<m; i=i+2)
    {
        for (int j=0; j<n; j++)
        {
            sum+=a[i][j];
        }
    }
    return sum;
}
int TimMaxCot1 (int a[][100], int m, int n)
{
    int Max1=a[0][0];
    for (int i=1; i<m; i++)
    {
        if (a[i][0]>Max1) {Max1=a[i][0];}
    }
    return Max1;
}
std::pair<int, int> TimMaxMin (int a[][100], int m, int n)
{
    int Max=a[0][0], Min=a[0][1];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
        if (a[i][j]>Max) {Max=a[i][j];}
        if (a[i][j]<Min) {Min=a[i][j];}
        }
    }
    return {Max, Min};
}
void SapXep (int a[][100], int m, int n)
{
    int i, j, key;
    for (i=1; i<n; i++)
    {
        key=a[1][i];
        j=i-1;
        while (j>=0 && key < a[1][j])
        {
            a[1][j+1]=a[1][j];
            j=j-1;
        }
        a[1][j+1]=key;
    }
    for (int k=0; k<n; k++)
    {
    printf ("%d\t", a[1][k]);
    }
}
int tong (int a[][100], int m, int n)
{
    int sum=0;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            sum+=a[i][j];
        }
    }
    return sum;
}
int MinChia3 (int a[][100], int m, int n)
{
    int Min, kt;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i][j]%3==0)
            {
                Min=a[i][j];
                kt=1;
                break;
            }
        }
    }
    if (kt==1) {
                   for (int i=0; i<m; i++)
                   {
                       for (int j=0; j<n; j++)
                       {
                           if (a[i][j]%3==0 && a[i][j]<Min) {Min=a[i][j];}
                       }
                   }
                   return Min;
               }
    else {return -1;}
}
int main ()
{
    int a[100][100], b[100][100], c[100][100];
    int m, n;
    printf ("\n Nhap so dong "); scanf ("%d", &m);    printf ("\n Nhap so cot "); scanf ("%d", &n);
    NhapMaTran (a, m, n);
    XuatMaTran (a, m, n);
    printf ("\n Tong cac so tren dong chan la %d", TongChan (a, m, n));
    printf ("\n Gia tri lon nhat cua cot 1 la %d", TimMaxCot1 (a, m, n));
    std::pair<int, int> MaxMin=TimMaxMin (a, m, n);
    printf ("\n Gia tri lon nhat va gia tri nho nhat cua mang lan luot la %d, %d", MaxMin.first, MaxMin.second);
    printf ("\n Nhap ma tran thu hai\n"); 
    NhapMaTran (b, m, n); 
    XuatMaTran (b, m, n);
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf ("\n Tong cua hai ma tran cung kich thuoc\n");
    XuatMaTran (c, m, n);
    printf ("\n Sap xep hang 2 cua ma tran 1\n");
    SapXep (a, m, n);
    printf ("\n Tong cac phan tu trong mang thu nhat la %d", tong (a, m, n));
    int v=MinChia3 (a, m, n);
    if (v==-1) {printf ("\n Mang thu nhat khong co so nao chia het cho 3");}
    else {printf ("\n So nho nhat chia het cho 3 cua mang thu nhat la %d", v);}
}