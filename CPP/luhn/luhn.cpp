#include <iostream>

int step1(std::string &evens);
std::string step3(int evens, int odds);

int main()
{
    std::string card = "4111111111111111";
    std::string evens;
    int oddSum;

    for (int i = 0; i < card.size(); i++)
    {
        if(i%2==0){
            evens += (int)card.at(i);
        }else{
            oddSum += card.at(i) - '0';
        }
    }

    std::cout << step3(step1(evens),oddSum) << std::endl;
    return 0;
}

int step1(std::string &evens){
    int sum;
    for (char even : evens)
    {
        int temp = (even-'0')*2;
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