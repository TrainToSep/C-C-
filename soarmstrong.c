#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int count (int n)
{
    int count = 0;
    while (n>0)
    {
       count++;
       n/=10;
    }
    return count;
}
bool IsArmstrong (int n)
{
    int temp = n, last, sum=0;
    while (temp>0) 
    {
        last = temp%10;
        sum += pow (last, count(n));
        temp/=10;
    }
    if (n==sum) return true;
    else return false;
}
int main ()
{
    int n;
    printf ("Nhap n = "); scanf ("%d", &n);
    if (IsArmstrong (n)== true) {printf ("%d la so armstrong", n);}
    else {printf ("%d khong la so armstrong", n);}
}