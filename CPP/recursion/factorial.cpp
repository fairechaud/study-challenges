#include <iostream>
int factorial(int);
int main()
{
    int number;
    std::cout << "Enter a number for factorial calculation: ";
    std::cin >> number;

    std::cout << "\nFactorial equal to " << factorial(number) << std::endl;

    return 0;
}
int factorial(int num){
    if (num > 1){
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}