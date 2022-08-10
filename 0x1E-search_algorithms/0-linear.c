#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * @brief
 *
 */
int linear_search(int *array, size_t size, int value)
{
        size_t H = 0;

        while (array && H < size)
        {
                printf("Value checked array[%ld] = [%d]\n", H, array[H]);

                if (array[H] == value)
                {
                        return (H);
                }
                H++;
        }
        return -1;
}