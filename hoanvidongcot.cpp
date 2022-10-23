#include <iostream>
using namespace std;

void InArray (int a[][100], int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf ("\n Nhap gia tri a[%d][%d]", i, j); 
            cin >> a[i][j];
        }
    }
}

void PrintArray (int a[][100], int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}

void Swap (int &a, int &b)
{
    int key =a;
    a=b;
    b=key;
}

void HoanVi (int a[][100], int &m, int &n)
{
    int tmp;
    for (int i=0; i<m; i++)
    {
        for (int j=i; j<n; j++)
        {
            Swap (a[i][j], a[j][i]);
        }
    }
    Swap (m, n);
}

int main ()
{
    int a[100][100];
    int m, n;
    cout << "\n Nhap so dong "; cin >> m;
    cout << "\n Nhap so cot "; cin >> n;
    InArray (a, m, n);
    PrintArray (a, m, n);
    HoanVi (a, m, n);
    cout << "\n Mang sau khi hoan vi la \n";
    PrintArray (a, m, n);
}