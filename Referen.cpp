#include <iostream>
using namespace std;

int main()
{
    int num1 =1020;
    int &num2 = num1;
    //참조자는 변수에 대해서만 가능
    //int &num3 = 30; X
    //참조자는 별명을 붙이는 것이기 때문에 미리 선언해두고 바꾸는거 불가
    //int &num4; X
    //NULL 로 초기화도 안돼
    //int &num5 = NULL;
    num2 = 2025;

    cout<<"VAL :" << num1 <<endl;
    cout<<"REF :" << num2 <<endl;

    cout<<"VAL addr:" << &num1 <<endl;
    cout<<"REF addr:" << &num2 <<endl;
    return 0;
}