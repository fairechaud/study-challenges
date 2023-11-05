#include<iostream>

int searchArray(int array[], int size, int element);

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int index;
    int myNum;

    std::cout << "enter element" << '\n';
    std::cin >> myNum;

    index = searchArray (numbers,size,myNum);
    if(index!= -1)
    {
        std::cout << "found at index: " << index << '\n';
    }
    else
    {
        std::cout << "not found\n";
    }
    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return array[i];
        }
    }
    return -1;
}