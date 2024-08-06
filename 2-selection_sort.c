#include "sort.h"

/**
 * selection_sort - sorts an array of ints into ascending order
 * @array: the array of ints to be sorted
 * @size: the size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
    int temp;
    size_t i, j, min_idx;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
        {
            temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;
            print_array(array, size);
        }
    }
}
