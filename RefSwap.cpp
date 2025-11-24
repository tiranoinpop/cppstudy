#include <iostream>

using namespace std;

//참조자를 이용한 call by reference !
//다만 함수의 정의를 보고 그값이 변경되는지 알수 없기 때문에 const 를 활용하면 좋다.
void SwapByRef(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main()
{
    int val1 = 10;
    int val2 = 20;

    SwapByRef(val1, val2);
    cout<<"val1 : "<<val1<<endl;
    cout<<"val2 : "<<val2<<endl;

    return 0;
}