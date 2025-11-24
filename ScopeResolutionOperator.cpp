#include <iostream>

int val= 100; //global

int main()
{
    int val = 20; //local
    val += 3;
    ::val +=5;
    std::cout<<"local val :" << val <<std::endl;
    std::cout<<"global val :" << ::val <<std::endl;

    return 0;
}