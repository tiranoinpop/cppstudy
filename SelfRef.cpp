#include <iostream>
using namespace std;

class SelfRef
{
private:
    int num;
public:
    SelfRef(int num) : num(num) 
    {
        cout<< "객체 생성" <<endl;
    };
    SelfRef &Adder(int num) 
    {
        this->num += num;
        return *this;
    };
    SelfRef &ShowTwoNumber()
    {
        cout <<num <<endl;
        return *this;
    }
    ~SelfRef(){};
};

int main()
{
    SelfRef obj(3);
    SelfRef &ref = obj.Adder(2);
    
    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    ref.Adder(1).ShowTwoNumber().Adder(5).ShowTwoNumber();

    return 0;
}
