/*
** File: neon_lib.c
** Author: Gunawan Ali-Santosa
** Date: 07-12-2022
*/

#include <stdio.h>

int check_neon(int n)

{
    int n_sqr, rem, sum;
    
    sum = 0;
    n_sqr = n * n;

    while (n_sqr != 0)
    {
        rem = n_sqr % 10;
        sum += rem;
        n_sqr /= 10;
    }

    if (sum == n)
        {
        /* printf("%d is a neon number.\n", n); */
        return 1;
        }
    else
        {
        /* printf("%d is not a neon number.\n", n); */
        return 0;
        }
}
