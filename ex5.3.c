// Exercise 5.3 - Write a program taking 5 keyboard inputs, save them in seperate dollar and cents arrays, and print out result as a monetary amount.
#include <stdio.h>
#include <math.h>

int main(void)
{

    /* Variables */

    float amounts[5] = {0.0f};       // What user gives
    long dollars[5] = {0L};          // whole dollar variable array
    long cents[5] = {0L};            // whole cents variable array

    printf("Please provide a monetary value 5 times.\n");

    //input
    for (int i = 0; i < 5 ; i++)
    {
        printf("> ");
        scanf(" %f", &amounts[i]);
    }

    //Dollar array assignment
    for (int i = 0; i < 5; i++)
    {
        dollars[i] = floor(amounts[i]);
        printf("dollar[%d] is %ld\n", i, dollars[i]);
    }

    //Cents array assignment
    for (int i = 0; i < 5; i++)
    {
        cents[i] = floor((amounts[i]-dollars[i])*100.0);

        printf("cents[%d] is %ld\n", i, cents[i]);
    }

    // Output
    for (int i = 0; i < 5; i++)
        printf("%d: $%d.%d\n", i, dollars[i], cents[i]);

    return 0;
}
