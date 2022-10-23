#include <stdio.h>
 
int main()
{
    float a, b, c;
    printf("\nNhap 3 so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    float maxValue = a;
 
    if(b > maxValue){
        maxValue = b;
    }
 
    if(c > maxValue){
        maxValue = c;
    }
    printf ("So lon nhat la %.2f", maxValue);
    }
    