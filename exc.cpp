#include<iostream>
using namespace std;
class Student
{
    int std_id,std_mark;
public:
    Student(int x,int y)
    {
        std_id=x;
        std_mark=y;
    }
};
int main()
{
    int id,mar;
    cout<<"Enter values for student id and marks"<<endl;
    cin>>id>>mar;
    try
        {
            if(id<0 || id>60 || mar<0 || mar>500)
                    throw 0;
            else
                Student S(id,mar);
        }
    catch(int a)
    {
     cout<<"An error occurred"<<endl;
    }
}
