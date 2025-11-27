#include <iostream>
using namespace std;

int& RefRetFunOne(int &ref)
{
    ref++;
    return ref;
}

int RefRetFunTwo(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;

    //CASE 1. 저장 int& 반환 int& : num1, num2 같은 공간
    int &num2 = RefRetFunOne(num1);
    num1++;
    num2++;
    cout<<"num 1 : "<<num1<<endl; 
    cout<<"num 2 : "<<num2<<endl;

    //CASE 2. 저장 int 반환 int& : num1, num3 다른 공간
    num1 = 1;
    int num3 = RefRetFunOne(num1);
    num1++;
    num3+=100;
    cout<<"num 1 : "<<num1<<endl; 
    cout<<"num 3 : "<<num3<<endl;


    //CASE 3. 저장 int& 반환 int : 불가능
    num1 = 1;
    //int &num4 = RefRetFunTwo(num1);
    //int &num4 = 2 한것과 똑같다.
    //아래는 가능하다.
    const int &num4 = RefRetFunTwo(num1);

    //Case 4. 저장 int 반환 int : num1, num4 다른 공간
    num1 = 1;
    int num5 = RefRetFunTwo(num1);
    num1++;
    num5+=100;
    cout<<"num 1 : "<<num1<<endl; 
    cout<<"num 5 : "<<num5<<endl;

    return 0;
}