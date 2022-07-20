/*
** File: test_neon.c
** Author: Gunawan Ali-Santosa
** Date: 07-12-2022
*/

#include <stdio.h>
#include "test_constant.h"

extern int check_neon(unsigned int i);

int main()

{
    int i, count, result;

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
