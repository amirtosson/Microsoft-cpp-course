#include <iostream>
#include <string>
#include <type_traits>
 #include <typeinfo>
using namespace std;

class MyBase {};

class MyDerived : public MyBase {};

class UnRelated {};

int main() {
//MyBase* mb= new MyBase();
//MyDerived* md= new MyDerived();
//MyDerived* md2= static_cast<MyDerived*>(mb);
//MyBase* mb2 = static_cast<MyBase*>(md);
//cout<< "Type 1"<< typeid(mb).name()<<endl;
//cout<< "Type 2"<< typeid(md).name()<<endl;
//cout<< "Type 3"<< typeid(md2).name()<<endl;
//cout<< "Type 4"<< typeid(mb2).name()<<endl;
//delete mb;
//delete md;


//int a=5;
//double b= static_cast<double>(a);
//cout<<"Type 1 "<<typeid(a).name()<<endl;
//printf("Type is  %s with value %f \n",typeid(b).name(),b );
//MyDerived* md= new MyDerived();
//MyBase* mb = dynamic_cast<MyBase*>(md);
//cout<< "Type 1"<< typeid(mb).name()<<endl;
const int a= 5;
volatile int b=3;
int k=7;
//a+=5;
int* nonconst_a =const_cast<int*>(&a);
*nonconst_a=k;
cout<<*nonconst_a<<endl;

//delete mb;
//delete md;

return 0;

}
