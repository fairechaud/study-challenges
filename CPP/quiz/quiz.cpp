#include<iostream>

int main()
{
    std::string questions[] = {"C++ inventor?",
                                "when was C++ created",
                                "C++ predecessor?",
                                "current C++ version?"};

    std::string options[][4] = {{"A. Guido","B. Bjarne","C. Mark","D. Steve"},
                                {"A. 1989", "B. 1985", "C. 1990", "D. 1986"},
                                {"A. C--","B. C","C. C#", "D. HolyC"},
                                {"A. 14", "B. 17", "C. 15", "D. 20"}};

    char answers[] = {'B','B','B','D'};


    int size = sizeof(questions)/sizeof(questions[0]);
    std::string decoration = "\n*********************\n";
    char userAns;
    for (int i = 0; i < size; i++)
    {
        std::cout << decoration << questions[i] << decoration;
        for (int j = 0; j < sizeof(options[0])/sizeof(options[0][0]); j++)
        {
            std::cout << options[i][j] << std::endl;
        }

        std::cin >> userAns;
        userAns = toupper(userAns);

        if(userAns == answers[i])
        {
            std::cout << "CORRECT\n";
        }else
        {
            std::cout << "INCORRECT. Right answer was " << answers[i] << "\n"; 
        }        
    }

    return 0;
}