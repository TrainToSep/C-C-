#include <stdio.h>
main ()
#define GIOI "XEP LOAI HOC SINH GIOI"
#define KHA "XEP LOAI HOC SINH KHA"
#define TRUNGBINH "XEP LOAI HOC SINH TRUNG BINH"
#define YEU "XEP LOAI HOC SINH YEU"
{
    float a, b, c;
    printf ("\n Nhap diem Toan"); scanf ("%f", &a);
    printf ("\n Nhap diem van"); scanf ("%f", &b);
    printf ("\n Nhap diem anh"); scanf ("%f", &c);
    float avr = (a + b + c)/3;
    printf ("\n Diem trung binh la: %.2f", avr);
    if(avr < 4) {printf ("\n" YEU); }
    else if (avr>=4 && avr <6,5) {printf ("\n" TRUNGBINH);}
    else if (avr>=6.5 && avr<8) {printf ("\n" KHA);}
    else printf ("\n" GIOI);
}