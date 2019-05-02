// Exercise 5.2 - Seth Youngner
/*********************************************
 * I build an array of 100 elements, fill it *
 * it with 1/(2*3*4), 1/(4*5*6), and so on   *
 * all the way to 1/(200*201*202) Then       *
 * calculate the array as data[0]-data[1]+   *
 * data[2]-data[3]+...-data[99]. Multiply by *
 * 4.0, add 3.0 and output result            *
 ********************************************/

#include <stdio.h>

int main(void)
{
    /* variables */
    double data[100] = {0.0};       // data array to be filled
    int x = 2.0;                    // for the fraction 1(x*y*z)
    int y = 3.0;                    // for the fraction 1(x*y*z)
    int z = 4.0;                    // for the fraction 1(x*y*z)
    double datacalc  = 0.0;         // for the total of data[0]-data[1]+data[2] repeating

    /* fill data array */
    for (int n = 0; n < 100; ++n)
    {
        data[n] = (1.0/(x*y*z));    // fill each element with equation
        x += 2;                     // add 2 to first denominator
        y += 2;                     // add 2 to second denominator
        z += 2;                     // add 2 to third denominator
    }

    /* calculate datacalc */
    for (int n = 0; n < 100; ++n)
    {
        if (n%2 == 0)               // if element is even, add it to datacalc
            datacalc += data[n];
        else                        // if element is odd, subtract it from datacalc
            datacalc -= data[n];
    }
    /* alter and print data calc */
    datacalc = datacalc * 4 + 3;    // quick changes
    printf("The result of  (1/(2*3*4))-(1/(4*5*6)+(1/(6*7*8)) ongoing 100 times is: %.15lf", datacalc); // It turns into pi

    return 0;
}
