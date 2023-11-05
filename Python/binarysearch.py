def binary_search(array, target):
    """
    Perform a binary search on the given sorted array to find the target value.

    Args:
        array (list): The sorted array to search.
        target: The value to search for.

    Returns:
        int: The index of the target value in the array, if found. Otherwise, -1.
    """
    low, high = 0, len(array) - 1

    while low <= high:
        mid = (low + high) // 2

        if array[mid] == target:
            return mid
        elif array[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1


array = [0,1,2,4,5,7,10,23,42,56,70,90,200,500,560,567,589,900]
print(binary_search(array,200))