/*
** File: prime_lib.c
** Author: Gunawan Ali-Santosa
** Date: 07-12-2022
*/

#include <stdio.h>

int check_prime(unsigned int n)

{
    int i, return_value;

    return_value = 1;

    if (n == 0 || n == 1)
        return_value = 0;

    for (i =2; i <= n/2; ++i)
        {
        if (n % i == 0) 
            {
                return_value = 0;
                break;
            }
        }

    return return_value;
}
