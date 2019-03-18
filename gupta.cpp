//PKMKB

#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

class Person
{
private:
    double *h, H;
    double *w, W;
    int *a, A;

public:
    Person()
    {
        cout << "Default Constructor called\n";
        double * h = NULL;
        h = new double;
        *h = 0.0;
        H = *h;
        double * w = NULL;
        w = new double;
        *w = 0;
        W = *w;
        int * a = NULL;
        a = new int;
        *a = 0;
        A = *a;
        //Don't forget to delete...
    }
    Person(double height, double weight, int age)
    {
        double* h = NULL;
        h = new double;
        *h = height;
        H = *h;
        //cout << "Height is " << *h << endl;
        double* w = NULL;
        w = new double;
        *w = weight;
        W = *w;
        int* a = NULL;
        a = new int;
        *a = age;
        A = *a;
    }
    Person(const Person &P) //Idhar Deep Copy ho rhi, shallow nai..... PKMKB
    {
        *h = *P.h;
        *w = *P.w;
        *a = *P.a;
    }

    bool operator < (Person const &obj)
    {
        Person person;
        if(h < person.h)
            return true;
        else if(w < person.h && person.h == h)
            return true;
        else if(a < person.a && person.h == h && person.w == w)
            return true;
    }

    void getHeight(double);
    void getWeight(double);
    void getAge(int);
    friend ostream &operator<<(ostream &out, const Person &p);

    //Destructor
    ~Person()
    {
        delete h;
        delete w;
        delete a;
        cout << "Destructor called, aur sab tabah kar diya, I shapath.." <<endl;
    }
};

ostream & operator << (ostream &out, const Person &p)
{
    out << p.h<< " "<< p.w<< " "<< p.a<<endl;
    return out;
}

void Person::getHeight(double lamba)
{
    *h = lamba;
}
void Person::getWeight(double mota)
{
    *w = mota;
}
void Person::getAge(int umar)
{
    *a = umar;
}

int main()
{
    Person temp;
    int choice;
    cout << "Enter your choice" <<endl;
    cin >> choice;
    if(choice == 1)
    {
        cout << temp << endl;
    }
    else if(choice == 2)
    {
        double h, w;
        int a;
        cin >> h >> w >> a;
        temp.getAge(a);
        temp.getHeight(h);
        temp.getWeight(w);
        Person newPerson(h, w, a);
        temp = newPerson;
        cout << temp;
    }
    else if(choice == 3)
    {
        double h, w;
        int a;
        cin >> h >>w >>a;
        temp.getAge(a);
        temp.getHeight(h);
        temp.getWeight(w);
        Person newPerson(h, w, a);
        if(temp < newPerson)
            cout << "Lesser" <<endl;
        else
            cout << "Greater" <<endl;
    }
    else if(choice == 4)
    {
        Person newPerson(temp);
        cout << newPerson << endl;
    }
    else
    {
        cout << "Invalid choice and PKMKB " <<endl;
    }
//    cout << temp << endl;

    return 0;
}
