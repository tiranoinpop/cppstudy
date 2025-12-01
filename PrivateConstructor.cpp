#include<iostream>
using namespace std;

class AAA
{
private:
    int num;
    AAA(int n) : num(n) {}
public:
    AAA() : num(0) {}
    AAA& CreateInitObj(int n) const {
        AAA *ptr = new AAA(n);
        return *ptr;
    }
    void ShowNum() const {cout<<num<<endl;};
};

int main()
{
    AAA base;
    base.ShowNum();

    AAA &obj1 = base.CreateInitObj(5);
    obj1.ShowNum();

    AAA &obj2 = base.CreateInitObj(7);
    obj2.ShowNum();

    delete &obj1;
    delete &obj2;
    return 0;
}