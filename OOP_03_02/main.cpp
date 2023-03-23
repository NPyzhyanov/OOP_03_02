#include <iostream>

#include "counter.h"

int main()
{
    std::string user_answer = "";
    
    bool answer_got = false;
    while(! answer_got)
    {
        std::cout << "Do you want to set initial value? (y/n): ";
        std::cin >> user_answer;
        if(user_answer == "y" || user_answer == "n")
        {
            answer_got = true;
        }
        else
        {
            std::cout << "Wrong entry!\n";
        }
    }
    
    Counter* p_counter = nullptr;
    
    if (user_answer == "y")
    {
        std::cout << "Enter initial value: ";
        int initial_value;
        std::cin >> initial_value;
        p_counter = new Counter(initial_value);
    }
    else
    {
        p_counter = new Counter();
    }
    
    std::string command_sign = "";
    
    while(true)
    {
        std::cout << "Enter command sign '+', '-', '=' or 'x': ";
        std::cin >> command_sign;
        
        if (command_sign == "+")
        {
            p_counter->increase();
        }
        else if (command_sign == "-")
        {
            p_counter->decrease();
        }
        else if (command_sign == "=")
        {
            p_counter->display();
        }
        else if (command_sign == "x")
        {
            std::cout << "Goodbye!\n";
            break;
        }
        else
        {
            std::cout << "Wrong entry!\n";
        }
    }
    
    delete p_counter;
    p_counter = nullptr;
    
    return 0;
}
