#include<iostream>
#include <type_traits>
using namespace std;
#define MYHATIVE_INTEGER 1
typedef long int mynative_integer;
#define MYHATIVE_DOUBLE 2
typedef long double mynative_double;
template<class T> struct my_traits;

template <>
struct my_traits<int>{
    enum{ TypeId= MYHATIVE_INTEGER};
    typedef mynative_integer MyNativeType;
    static void Convert(MyNativeType from, int& to){
        cout << "MyNativeIntegerType Convert \n";
         to = static_cast<int>(from);
    }


};
template<>
struct my_traits<double>{
    enum{TypeId= MYHATIVE_INTEGER};
    typedef mynative_double MyNativeType;
    static void Convert(MyNativeType from, double& to){
        cout << "MyNativeIntegerType Convert \n";
         to = static_cast<int>(from);
    }
};
int main(){

    cout << "my_traits<int> typeid is " << my_traits<int>::TypeId << "\n";

    mynative_integer mni = 6;
    int intresult;
    my_traits<int>::Convert(mni,intresult);
    cout << "\n";

            cout << "my_traits<double> typeid is " << my_traits<double>::TypeId << "\n";
            mynative_double mnd = 6.6666;
            double doubleresult;
            my_traits<double>::Convert(mnd, doubleresult);

            cout << "\n";

    cout << "\n";
return 0;
}
