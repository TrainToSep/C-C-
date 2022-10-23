#include <stdio.h>
int main ()
{
    int a;
    int res = 0;
    int last = 0;
    printf ("Nhap so"); scanf ("%d", &a);
   //cách 1: //while (a>0)
    //{
        //res = a % 10;
        //last = last*10 + res;
        //a /= 10;
    //
    //printf ("%d", last);
    //cách 2:
    //while (a>0){
    //res = a % 10;
    //last += res;
    //a/=10;
    //if (last == 0) {continue;}
    //else printf ("%d", res);
//}

}