#include <iostream>

int main()
{
    int val1 = 0;
    
    std::cout << "first num : ";
    std::cin>> val1;

    int val2 = 0;
    
    std::cout << "second num : ";
    std::cin>> val2;

    int result =val1 + val2;

    std::cout<< "sum : "<< result <<std::endl;
    return 0; 
}