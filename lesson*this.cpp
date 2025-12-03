#include <iostream>

int main(void) {

    int num_1 = 111;
    int *p = &num_1;

    int &ref1 = *p;
    //int &ref1 = num1; 과 같다.
    int *(&ref2) = p;

     
    printf("%d\n", &ref1);  //ref1의 주소 값(참조자)
    printf("%d\n", ref2);   //ref2가 가르키는 주소 값(참조 포인터)
    printf("%d\n", p);      //p가 가르키는 주소 값
    printf("%d\n", &num_1); //num_1의 주소 값
    printf("%d\n", &ref2);  //ref2의 주소 값


    return 0;
}