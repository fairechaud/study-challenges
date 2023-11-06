#include <iostream>

int step1(std::string &evens);
std::string step3(int evens, int odds);

int main()
{
    std::string card = "4111111111111111";
    std::string evens;
    int oddSum;

    for (int i = card.size()-1; i >= 0; i--)
    {
        if(i%2!=0){
            evens += card.at(i);
        }else{
            oddSum += card.at(i) - '0';
            std::cout << oddSum << std::endl;
        }
    }
    std::cout << evens << std::endl;
    std::cout << oddSum << std::endl;
    std::cout << step3(step1(evens),oddSum) << std::endl;
    return 0;
}

int step1(std::string &evens){
    int sum;
    for (int i = evens.size()-1; i >=0; i--)
    {
        int temp = (evens[i]-'0')*2;
        if (temp > 10)
        {
            sum = 10 + temp%10;
        }else{
            sum+=temp;
        };
    }
    return sum;
}

std::string step3(int evens, int odds)
{
    int result = (evens+odds)%10;
    if(result == 0)
    {
        return "credit card is correct";
    }
    return "invalid card";
}