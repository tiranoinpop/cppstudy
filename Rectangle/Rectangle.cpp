#include <iostream>
#include "Rectangle.h"
using namespace std;

//멤버 이니셜라이저
//생성자로 생성자를 호출하여 하위 객체를 초기화
Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
:upLeft(x1,y1), lowRight(x2,y2)
{
//empty
}

void Rectangle::ShowRecInfo() const
{
    cout << "좌상단 : " << upLeft.GetX() << ", " << upLeft.GetY() <<endl;
    cout << "우하단 : " << lowRight.GetX() << ", " << lowRight.GetY() <<endl;
}