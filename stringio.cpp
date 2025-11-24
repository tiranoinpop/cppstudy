#include <iostream>
using std::cout;
using std::cin;

int main()
{
    char name[100];
    char lang[100];

    cout<<"name ?";
    cin>>name;

    cout<<"lang ? ";
    cin>>lang;

    cout<<"name is "<< name << "."<<std::endl;
    cout<<"lang is "<< lang << "."<<std::endl;

    return 0;
}