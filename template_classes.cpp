#include <iostream>

using namespace std;


template<class point>
class Point{
public:
    Point(){}
    Point(point x, point y):px(x),py(y){
        cout<<px<<" "<<py<<endl;
    }
private:
    point px;
    point py;
};

template<class derPoint>
class Point3D: Point<derPoint>{
public:
    Point3D(derPoint x, derPoint y, derPoint z): px(x),py(y),pz(z){

        cout<<px<<" "<<py<<" "<<pz<<endl;
    }
private:
    derPoint px;
    derPoint py;
    derPoint pz;
};

template<class pointx, class pointy, class pointz>
class MultiTypedPoint{
  public:
    MultiTypedPoint(pointx x,pointy y ,pointz z):px(x),py(y),pz(z){
        cout<<px<<" "<<py<<" "<<pz<<endl;
    }
  private:
    pointx px;
    pointy py;
    pointz pz;
};



int main(){
    //Point<double> basePoint(5.55,5.66);
    //Point<char> basePoint('a','b');
    //Point3D<float> basePoint2(6.55,8.99,5.797);
    MultiTypedPoint<char, char, float> points('a', 'b',8.55);

return 0;
}
