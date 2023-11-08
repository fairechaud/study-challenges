#include <iostream>
#include <vector>
#include <set>

using namespace std;

int sum(vector<int> input){
    int result = 0;
    for (auto num : input)
    {
        result += num;
    }
    return result;
}

int addition(vector<int> input1, vector<int> input2){
    return sum(input1) - sum(input2);
}

int overflow(vector<int> input1, vector<int> input2){
    int result = 0;
    int p1 = 0, p2 = 0;
    while(p1 < input1.size())
    {
        result += input1[p1];
        p1++;
        if(p2 < input2.size())
        {
            result -= input2[p2];
            p2++;
        }
    }
    return result;
}

int mapping(vector<int> input1, vector<int> input2){
    set<int> elements(input1.begin(), input1.end()); //create range-based set from input1
    for(int num : input2) //iterate through input2
    {
        if(elements.find(num) != elements.end()) //input2 element NOT FOUND in set
        {
            return num;
        }
    }
    return -1;
    
}
int main()
{
    // Time complexity = O(n+m) => O(n) just looping over data points 
    // Space complexity = O(n*) *could overflow if sum is too big
    int result = 0;
    vector<int> input1 = {INT_MAX,INT_MAX-1,INT_MAX-2,INT_MAX-3,INT_MAX-4,INT_MAX-5,INT_MAX-6,INT_MAX-7,45,50,1,-1,-INT_MAX};
    vector<int> input2 = {INT_MAX,INT_MAX-1,INT_MAX-2,INT_MAX-3,INT_MAX-4,INT_MAX-5,INT_MAX-6,INT_MAX-7,45,50,1,-INT_MAX};
    
    //cout << "(map) result is " << mapping(input1,input2) << '\n'; // O(n log n);
    //cout << "(addition) result is " << addition(input1,input2) << '\n'; // O(n) -> overflow
    //cout << "(overflow) result is " << overflow(input1,input2) << '\n'; // O(n) no problem
    
    for (int num : input1){
        result ^= num;
    }
    for (int num : input2){
        result ^= num;
    }
    cout << result << '\n';

    return 0;
}