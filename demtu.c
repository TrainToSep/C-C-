#include <stdio.h>
#include <string.h>

int CountWord (char s[], int length)
{
    int word = (s[0]!=' ');
    for (int i=0; i<length-1; i++)
    {
        if (s[i]==' ' && s[i+1]!=' ')
        {
            ++word;
        }
    }
    return word;
}

int main ()
{
    char s[]="   Lap trinh khong kho";
    int length = strlen (s);
    printf ("So tu trong cau tren la %d", CountWord (s, length)); 
}