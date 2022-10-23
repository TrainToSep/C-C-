#include <stdio.h>
#include <math.h>
long long DecToBin (int decimalNumber)
{
    int count = 0;
    int binaryNumber = 0; 
    while (decimalNumber>0)
    {
         binaryNumber += decimalNumber%2 * pow (10,count);
         decimalNumber = decimalNumber / 2;   
         count++;   
    }
    return binaryNumber;
}
int BinToDec (long binaryNumber)
{
    int decimalNumber = 0;
    int count = 0;
    while (binaryNumber>0)
    {
        if (binaryNumber%10!=0)
        {
            decimalNumber += pow (2,count);
        } 
    binaryNumber /= 10;
    count++;
    }
    return decimalNumber;
}
int DecToOct (int decimalNumber)
{
    int OctNumber = 0;
    int count = 0;
    while (decimalNumber>0)
    {
        OctNumber += (decimalNumber%8)* pow (10, count);
        decimalNumber/=8;
        count++;
    }
    return OctNumber;

}
int main ()
{
    int decimalNumber;
    long binaryNumber;
    printf ("\n Nhap he thap phan"); scanf ("%d", &decimalNumber);
    printf ("\n He bat phan la %d", DecToOct (decimalNumber));
    printf ("\n He nhi phan la %d", DecToBin (decimalNumber));
    printf ("\n Nhap he nhi phan"); scanf ("%d", &binaryNumber);
    printf ("\n He thap phan la %d", BinToDec (binaryNumber));
}
