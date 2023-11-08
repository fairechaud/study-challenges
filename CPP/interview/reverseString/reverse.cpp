#include <iostream>

using namespace std;

int main()
{
    string input = "Fernando";

    for (int start = 0, end = input.size() - 1 ; start < end; start++, end-- )
    {
        swap(input[start], input[end]);
    }    
    cout << input << "\n";

    return 0;
}