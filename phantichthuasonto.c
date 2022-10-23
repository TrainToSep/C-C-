#include <stdio.h>
int main ()
{
    int num, dem, i;
    printf ("Nhap so"); scanf ("%d", &num);
    for (i=2; i<=num; i++)
    {
        dem = 0;
        while (num % i == 0) {dem++;
                              num /= i;}
        if (dem) {
            if (dem>1) {printf ("%d^%d", i, dem);}
            else {printf ("%d", i);}
            if (num>i) printf ("*");
        
        }
    }
}