#include <iostream>
using namespace std;

class SimpleClass
{
  private:
    int num1;
    int num2;
  public:
    SimpleClass(){
        num1 = 0;
        num2 = 0;
    }
    SimpleClass(int n){
        num1 = n;
        num2 = 0;
    }
    SimpleClass(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }
    // 어떤 생성자를 부를지 애매해짐
    // SimpleClass(int n1 = 0, int n2 = 0){
    //     num1 = n1;
    //     num2 = n2;
    // }
    void ShowData() const{
        cout<<num1 << " " <<num2<<endl;
    }
};

int main()
{
    //전역 및 지역변수의 형태
    SimpleClass sc1;
    //이건 불가능
    //SimpleClass sc1();
    //SimpleClass 를 반환하는 함수의 원형 선언과 똑같이 생겨버려 애매해짐
    //이게 객체 생성문인지 함수 원형 선언인지 몰라!

    SimpleClass sc2(100);

    SimpleClass sc3(100,500);

    // 동적할당 형태
    SimpleClass *sc4 = new SimpleClass; 
    SimpleClass *sc5 = new SimpleClass();
    SimpleClass *sc6 = new SimpleClass(3); 
    SimpleClass *sc7 = new SimpleClass(4,5); 

    sc1.ShowData();    
    sc2.ShowData();    
    sc3.ShowData();
    sc4->ShowData();
    sc5->ShowData();
    sc6->ShowData();
    sc7->ShowData();
    return 0;
}