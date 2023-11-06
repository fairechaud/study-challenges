#include <iostream>

int getDigit(int);
int sumEvens(std::string);
int sumOdds(std::string);

int main()
{
    std::string card = "4111111111111111";
    int result = 0;

    result = sumEvens(card) + sumOdds(card);
    if (result % 10 == 0){
        std::cout << "valid card\n";
    }else{
        std::cout << "invalid card\n";
    }
    return 0;
}

int getDigit(int digit){
    return digit % 10 + (digit / 10 % 10);
}

int sumEvens(std::string card)
{
    int sum = 0;
    for(int i = card.size() - 2; i >= 0; i-=2)
    {
        sum += getDigit((card[i] - '0')*2);
    }
    return sum;
}

int sumOdds(std::string card)
{
    int sum = 0;
    for(int i = card.size() - 1; i >= 0; i-=2)
    {
        sum += card[i] - '0';
    }
    return sum;
}