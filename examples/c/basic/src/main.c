/**
 * @file    main.c
 * @author  Jose Rios <jrios.github@gmail.com>
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details at
 * https://www.gnu.org/copyleft/gpl.html
 *
 * @section DESCRIPTION
 *
 * Basic C example code for Doxygen generation.
 * This code calculates and shows fibonacci number according to given fibonacci serie index.
 */

/*************************************************************************************************/

/* Libraries */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/*************************************************************************************************/

/* Functions Prototypes */

void fibonacci_test(void);
uint32_t fibonacci_index(const uint32_t index);

/*************************************************************************************************/

/* Main Function */

/**
 * Program Main Function. \n
 * Launch the Fibonacci test.
 */
int main()
{
    fibonacci_test();
    return 0;
}

/*************************************************************************************************/

/* Secondary Functions */

/**
 * Launch a fibonacci_index() function test for any provided value.
 */
void fibonacci_test(void)
{
    uint32_t fib_number = 0;

    printf("\n");
    for(uint32_t i = 0; i < UINT32_MAX; i++)
    {
        fib_number = fibonacci_index(i);
        if(fib_number == 0)
            break;
        printf("Fibonacci number at index %" PRIu32 ": %" PRIu32 "\n", i, fib_number);
    }
    printf("\n");
}

/**
 * Calculate Fibonacci number from provided serie sequence index. \n
 * Example: \n
 * (i, index; r, return) \n
 * i, r \n
 * ---- \n
 * 0, 1 \n
 * 1, 1 \n
 * 2, 2 \n
 * 3, 3 \n
 * 4, 5 \n
 * ...
 * 
 * @param index Fibonacci Serie Sequence index
 * @return Corresponding Fibonacci number of that index
*/
uint32_t fibonacci_index(const uint32_t index)
{
    uint32_t fib_number_i = 1;
    uint32_t fib_number_i_1 = 1;

    for(uint32_t i = 2; i < index+1; i++)
    {
        // Check and stop at overflow
        if(fib_number_i + fib_number_i_1 < fib_number_i)
            return 0;

        // Calculate next fibonacci number
        fib_number_i = fib_number_i + fib_number_i_1;
        fib_number_i_1 = fib_number_i - fib_number_i_1;
    }

    return fib_number_i;
}
