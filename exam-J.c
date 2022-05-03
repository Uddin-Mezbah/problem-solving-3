#include<stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int num;
    int digit1, digit2, digit3;
    scanf( "%d", &num );

    for (int i = 1; i <= 3; i++)
    {
        int digit = num % 10;
        num /= 10;
        if (i == 1)
        {
            digit3 = digit;
        }
        else if (i == 2)
        {
            digit2 = digit;
        }
        else
        {
            digit1 = digit;
        }

    }
    int a = (digit1*10 + digit2)*10 + digit3;
    int b = (digit2*10 + digit3)*10  + digit1;
    int c = (digit3*10 + digit1)*10 + digit2;
    int result = a + b + c;
    printf( "%d", result );



}
