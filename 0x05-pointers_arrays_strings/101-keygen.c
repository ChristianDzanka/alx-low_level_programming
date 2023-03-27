#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int password[100];
    int i, sum, remainder;

    sum = 0;

    /* Seed the random number generator */
    srand(time(NULL));

    /* Generate 100 random integers between 0 and 77 */
    for (i = 0; i < 100; i++)
    {
        password[i] = rand() % 78;

        /* Calculate the sum of the ASCII values of each digit in the password */
        sum += (password[i] + '0');

        /* Print the current digit of the password */
        putchar(password[i] + '0');

        /* If the sum plus the ASCII value of the next digit is greater than 2772, 
           add the necessary remainder to make the sum exactly 2772 and terminate the loop */
        if ((2772 - sum) - '0' < 78)
        {
            remainder = 2772 - sum - '0';
            sum += remainder;
            putchar(remainder + '0');
            break;
        }
    }

    return 0;
}
