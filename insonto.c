#include <stdio.h>
#include <math.h>
int main()
{
    for (int num = 1; num < 1000; ++num)
    {
        int count = 0; 
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && num > 1){
            printf("%d \t", num); }}}