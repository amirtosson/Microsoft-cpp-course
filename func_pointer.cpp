#include <string>
#include <iostream>
using namespace std;

void printString(string s){
    cout << s<<endl;
}
class funcPointer{
public:
    void printString(string s){
        cout << s<<endl;
    }
};

class Base {
public:
        virtual void sayHello(string s) {
                cout << "Hello from Base class. \n";
                cout << s<<endl;
        }
};

class Derived : public Base {
public:
        void sayHello(string s) {
                cout << "Hello from Derived class. \n";
                cout << s<<endl;
        }
};


int main (){
string ss="Hi everyone";
string ss2="I am Amir";
string str = "Hello from member function pointer.!!";
void(*funcPtr)(string)=&printString;
(*funcPtr)(ss);
(*funcPtr)(ss2);
void(funcPointer::*memFuncPtr)(string)=&funcPointer::printString;
funcPointer fp;

(fp.*memFuncPtr)(str);
(fp.*memFuncPtr)(ss2);
(fp.*memFuncPtr)(ss);

void(Base::*basePtr)(string)=&Base::sayHello;
void(Derived::*derivedPtr)(string)=&Derived::sayHello;
Base bP;
Derived dP;
(bP.*basePtr)(str);  //call Base::sayHello
(dP.*derivedPtr)(str); //call Derived::sayHello
(dP.*basePtr)(str);


return 0;
}
