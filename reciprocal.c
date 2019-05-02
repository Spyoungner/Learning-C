//Exercise 5.1
/********************************************
 * Program takes 5 doubles from keyboard,   *
 * calculates the reciprocal and then       *
 * gives what they are and their total sum  *
 *******************************************/
#include <stdio.h>

int main(void)
{
    /* variables */
    double input[5] = {0.0};        // The keyboard input values
    double recip[5] = {0.0};        // The reciprocal array
    double sum = 0.0;               // for the sum later

    /* Array and variable fills */
    printf("Please provide 5 numbers and I'll give you the reciprocal and the sum\n\n");
    for (int n = 0; n < 5; ++n)     // loop for input both arrays
    {
        printf("> ");             // user input line
        scanf(" %lf", &input[n]);   // user input
        recip[n] = 1.0/input[n];    // fill the reciprocal aray
        sum += recip[n];            // add to sum
    }

    /* output reciprocal and sum */
    for (int n = 0; n < 5; ++n)
        printf("\nThe reciprocal of %.0lf is 1/%.0lf or %.4lf\n", input[n], input[n], recip[n]);

    printf("\n The sum of the reciprocals is: %lf", sum);
    return 0;
 }
