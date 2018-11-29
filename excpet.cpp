#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <iterator>

using namespace std;
const double pi = 3.1415926535897;

class Circle{
public:
    Circle(int rad): radius(rad){
        area= pi*radius*radius;
    }
    const bool operator < (const Circle &r) const{
        return (area< r.area);
    }
    friend std::ostream& operator <<(std::ostream& stream,const Circle &cir){
        stream<<cir.area;
        return stream;
    }

private:
    int radius;
    double area;
};

template<typename TContainer>
void bubbleSort(TContainer begin, TContainer end){
    TContainer i,j;
    for(i=begin; i!=end;i++){
        for(j=begin;j!=i;j++){
            if(*i<*j){
                std::swap(*i,*j);
            }
        }

    }
}
int main(){
vector<int> aVec;
list<double>myList;
vector<Circle> circleVec;
aVec.push_back(5);
aVec.push_back(4);
aVec.push_back(3);
aVec.push_back(2);
aVec.push_back(1);

myList.push_back(5.954);
myList.push_back(4.873);
myList.push_back(3.135);
myList.push_back(2.851);
myList.push_back(1.9999);

circleVec.push_back(Circle(5));
circleVec.push_back(Circle(4));
circleVec.push_back(Circle(3));
circleVec.push_back(Circle(2));
circleVec.push_back(Circle(1));




cout << "Vector before sorting " << endl;

for (vector<int>::iterator it = aVec.begin(); it != aVec.end(); it++) {
                cout << *it;
        }
        cout << endl << endl;

bubbleSort(aVec.begin(), aVec.end());
cout << "Sorted vector is " << endl;
for(vector<int>::iterator it= aVec.begin();it !=aVec.end();it++){
    cout<<*it<<" ";
}
   cout << endl << endl;
cout << "List before sorting " << endl;
for(list<double>::iterator it= myList.begin();it !=myList.end();it++){
    cout<<*it<<" ";
}
   cout << endl << endl;
bubbleSort(myList.begin(), myList.end());
cout << "Sorted List is " << endl;
for(list<double>::iterator it= myList.begin();it !=myList.end();it++){
    cout<<*it<<" ";
}
cout << endl << endl;

cout << "Class vector before sorting " << endl;
for(vector<Circle>::iterator it= circleVec.begin();it !=circleVec.end();it++){
    cout<<*it<<" ";
}
cout << endl << endl;

bubbleSort(circleVec.begin(), circleVec.end());
cout << "Sorted class vector " << endl;
for(vector<Circle>::iterator it= circleVec.begin();it !=circleVec.end();it++){
    cout<<*it<<" ";
}



    return 0;
}
