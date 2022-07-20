/*
** File: test_c.c
** Author: Gunawan Ali-Santosa
** Date: 07-12-2022
*/

#include <stdio.h>
#include "test_constant.h"

extern int check_prime(unsigned int i);
extern int check_neon(unsigned int i);

int main()

{
    int i, count, result;

    /*
    ** Check from 1 to PRIME_COUNT, print if prime number
    */

    count = 0;

    for (i = 0; i <= PRIME_COUNT; i++)
        {
        result = check_prime(i);
        if (result == 1)
            {
            printf("%d\n", i);
            count += 1;
            }
        }
    printf("\nTotal = %d\n\n", count);

    count = 0;

    /*
    ** Check from 1 to NEON_COUNT, print if neon
    */
    for (i = 0; i <= NEON_COUNT; i++)
        {
        result = check_neon(i);
        if (result == 1)
            {
            printf("%d\n", i);
            count += 1;
            }
        }
    printf("\nTotal = %d\n", count);
}
