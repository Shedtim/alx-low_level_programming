/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if it is not present or if the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array: ");
    print_array(array, size);

    if (size == 1)
        return (array[0] == value ? 0 : -1);

    size_t middle = (size - 1) / 2;
    if (array[middle] == value)
        return (advanced_binary(array, middle + 1, value));
    else if (array[middle] > value)
        return (advanced_binary(array, middle + 1, value));
    else
    {
        int index = advanced_binary(array + middle + 1, size - middle - 1, value);
        return (index == -1 ? -1 : middle + 1 + index);
    }
}
