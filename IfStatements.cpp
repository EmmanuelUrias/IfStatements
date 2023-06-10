#include <iostream>

int main()
{
    int age;
    std::cout << "What's your age?: ";
    std::cin >> age;

    if (age > 100)
    {
        std::cout << "You are to old";
    }
    else if (age >= 18)
    {
        std::cout << "You are an adult";
    }
    else if (age < 0)
    {
        std::cout << "Do you really think this is funny";
    }
    else
    {
        std::cout << "You are still a child";
    }

    return 0;
}