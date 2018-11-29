
#include <string>
#include <iostream>

using namespace std;

class MyDeepClass{
  public:
    //const
    MyDeepClass(int xx, char cc,std::string ss, int* ptr);
    MyDeepClass(const MyDeepClass &other);
    void printMyClass();
private:
    int x;char c;std::string s;int* Myptr;
};

void MyDeepClass::printMyClass() {
    cout << x << " " << c << " " << s << " " << *Myptr;
}

MyDeepClass::MyDeepClass(int xx, char cc, std::string ss, int* ptr):
    x(xx),c(cc),s(ss), Myptr(ptr){
   cout << "MyDeepClass constructor called " << endl;
}

MyDeepClass::MyDeepClass(const MyDeepClass &other) :
    x(other.x),c(other.c),s(other.s){
     cout << "MyDeepClass copy constructor called " << endl;
     Myptr =new int(*other.Myptr);
}


class MyShallowClass {

public:
    MyShallowClass(int xx, char cc, std::string ss):x(xx),c(cc),s(ss) {
        cout << "MyShallowClass constructor called." << endl;
    }

    void MyShallowClassPrint() {
        cout << x << " " << c << " " << s;
    }

private:
    int x;
    char c;
    std::string s;
};




int main(){
    int myint = 67;
    int myintx = 55;
std::string mystring("Hello Deep World");
int myShallowIntx = 1111;
std::string myShallowString("Hello Shallow World");
 MyDeepClass mdc(myintx,'S',mystring,&myint);
 MyDeepClass mdcCopy(mdc);
 MyShallowClass msc(myShallowIntx,'Z',myShallowString);
 MyShallowClass mscCopy(msc);
 cout << "MyDeepClass mdc member values are ";
    mdc.printMyClass();
    cout << endl;

    cout << "MyDeepClass mdcCopy member values are ";
    mdcCopy.printMyClass();
    cout << endl;

    cout << "MyShallowClass msc member values are ";
    msc.MyShallowClassPrint();
    cout << endl;

    cout << "MyShallowClass mscCopy member values are ";
    mscCopy.MyShallowClassPrint();
    cout << endl;

return 0;
}
