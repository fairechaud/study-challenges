#include<iostream>

void bubbleSort(int array[], int size);

int main()
{
    int numbers[] = {7,1,6,13,1,10,15,5,2,8,9,16,20,3,4};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    bubbleSort(numbers,size);
    
    for (int number : numbers)
    {
        std::cout << number << ' ';
    }

    return 0;
}

void bubbleSort(int array[], int size){
    int temp;
    for(int i=0;i < size-1; i++)
    {
        for(int j=0;j < size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return;
}