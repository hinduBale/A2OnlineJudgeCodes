#include<iostream>
#include<cmath>
using namespace std;
class Point
{
protected:
    int x,y;
public:
  virtual void find_length()=0;
};
class Line: public Point
{
public:
    Line()
    {

    }
    Line(int a,int b)
    {
        x=a;
        y=b;
    }
    void find_length()
    {
        cout<<"Length of the line is: "<<sqrt(x*x + y*y)<<endl;
    }
};
class Triangle: public Line
{
public:
    Triangle()
    {

    }
    void find_length(int a,int b,int c)
    {
        cout<<"Length of first side of triangle: "<<sqrt(a*a + b*b)<<endl;
        cout<<"Length of first side of triangle: "<<sqrt(c*c + b*b)<<endl;
        cout<<"Length of first side of triangle: "<<sqrt(a*a + c*c)<<endl;
    }
};
int main()
{
    int p2,p1,t1,t2,t3;
    cout<<"Enter the points of line"<<endl;
    cin>>p1>>p2;
    Line L(p1,p2);
    L.find_length();
    cout<<"Enter three points of triangle"<<endl;
    cin>>t1>>t2>>t3;
    Triangle T;
    T.find_length(t1,t2,t3);
}
