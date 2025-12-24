#include <iostream>
using namespace std;

class AAA
{
    private:
        int num1;
    public:
    virtual void Func1() { cout<<"AAA::Func1()"<<endl; }
    virtual void Func2() { cout<<"AAA::Func2()"<<endl; }
};

class BBB : public AAA
{
    private:
        int num2;
    public:
    virtual void Func1() { cout<<"BBB::Func1()"<<endl; }
    void Func3() { cout<<"BBB::Func3()"<<endl; }
};

int main(void)
{
    AAA* pA = new AAA();
    pA->Func1();

    BBB* pB = new BBB();
    pB->Func1();
    pB->Func3();


    return 0;
}