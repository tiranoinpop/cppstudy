#include <iostream>

int main(){
    //integer (whole number)
    int age = 33;
    int days = 7.5; //will be

    std::cout << days << std::endl; //7.5 ? truncated ?? 7? ???


    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;

    std::cout << price << std::endl;

    //single character
    char grade = 'A';
    char initial = 'B';

    std::cout << initial << std::endl;

    //boolean (true or false)
    bool is_student = false;
    bool is_powered = false;
    bool is_for_sale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Insu";
    std::string day = "Sunday";

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}