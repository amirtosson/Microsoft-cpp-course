//#include <iostream>
//#include <string>
//class myClass {

//public:
//    myClass(std::string s = "")
//    {
//        str = s;
//    }
//    void print() const
//    {
//        cout << str << endl;
//    }

//    void change(std::string chgstr) const {
//        str = chgstr;
//    }

//private:
//    mutable std::string str;
//};





//using namespace std;
//int main()
//{
//    const myClass cc("Hello World !!!!");
//    std::string mystring("The string has changed.");
//    cc.change(mystring);
//    cc.print();

//    return 0;
//}
#include <iostream>

class myClass {

public:
    operator int();

     operator double();

};

myClass::operator int() {

    return 99;
}

myClass::operator double() {

    return 22.56;
}

int main() {

    myClass mc;

    int myint = mc;  //implicit conversion

    double mydouble = mc;  //explicit conversion

    std::cout << " myint is " << myint << " and mydouble is " << mydouble << std::endl;

    return 0;
}
