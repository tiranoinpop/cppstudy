#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char *name;
    int age;
    public:
    Person(char * myname, int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    Person()
    {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }
    void SetPersonInfo(char * myname, int myage) {
        name = myname;
        age = myage;
    }
    void ShowPersonInfo() {
        cout << "name: " << name << ", age: " << age << endl;
    }
    ~Person() {
        if(name != NULL) {
            delete [] name;
            cout << "called ~Person()" << endl;
        }
    }
};

int main() {
    Person parr[3];
    char namestr[100];
    int age;
    int len;

    for (int i = 0; i < 3; i++) {
        cout<< "Enter name: ";
        cin >> namestr;
        cout << "Enter age: ";
        cin >> age;
        len = strlen(namestr) + 1;
        char * name = new char[len];
        strcpy(name, namestr);
        parr[i].SetPersonInfo(name, age);
    }
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();

    return 0;

}