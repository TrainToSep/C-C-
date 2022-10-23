#include <stdio.h>
int MinTwoNum (int a, int b)
{
    return (a<b ? a:b);
}
int MinThreeNum (int a, int b, int c)
{
    return (a<MinTwoNum(b, c) ? a: MinTwoNum (b, c));
}
int MaxTwoNum (int a, int b)
{
    return (a>b ? a:b);
}
int MaxThreeNum (int a, int b, int c)
{
    return (a>MaxTwoNum(b, c) ? a: MaxTwoNum (b, c));
}
int main ()
{
    int a, b, c;
    printf ("Enter three values "); scanf ("%d%d%d", &a, &b, &c);
    printf ("Max=%d", MaxThreeNum (a, b, c));
    printf ("\nMin=%d", MinThreeNum (a, b, c));
}
