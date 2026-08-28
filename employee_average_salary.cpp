#include<iostream>
using namespace std;
class emp
{
    char name[20];
    char designation[20];
    float salary;

public:
    void in();
    float process();
} e[5];
void emp::in()
{
    cout << "Enter data: ";
    cin >> name >> designation >> salary;
}
float emp::process()
{
    return salary;
}
int main()
{
int i;
float avg = 0;
for(i = 0; i < 5; i++)
{
    e[i].in();
}
for(i = 0; i < 5; i++)
{
    avg += e[i].process();
}

avg = avg / 5;
cout <<avg;

}


this is code i want to post in my github reposetory

// **Write a C++ program to demonstrate function overloading by creating multiple `per()` functions with different parameter types and numbers of arguments.**

int per(int a, int b, int c)
{
    return a + b + c;
}
float per(float a, float b)
{
    return a + b;
}
int per(int n, int m)
{
    return n + m;
}
char per(int n, char m)
{
    return m;
}

int main()
{
    int a, b;
    char m, n;
    float p, r;

    cin >> a >> b >> p >> r >> m >> n;

    cout <<  per(4, 5, 6) << endl;

    cout <<  per(4.5f, 5.7f) << endl;

    cout <<  per(100, 200) << endl;

    cout << per(100, 'a') << endl;

    return 0;

//Write a C++ program to demonstrate a friend function that accesses private data members of a class and calculates the product of two numbers.
#include <iostream>
using namespace std;
class one
{
    float a,b;
public:
    void in()
    {
        cout<<"enter data";
        cin>>a>>b;

    }
    friend void function (class one );
};
void function (class one a1)
{
    cout<<a1.a*a1.b<<endl;
}
int main()
{
    class one t;
    t.in();
    function(t);
}


//Write a C++ program to demonstrate multiple friend functions that access private data members of a class and perform different calculations.
class one
{
    float a,b,c;
public:
    void in()
    {
        cout<<"enter data";
        cin>>a>>b>>c;

    }
    friend void function(class one );
    friend void fun2(class one );
};
void function (class one a1)
{
    cout<<a1.a*a1.b<<endl;

}
void fun2(class one nn)
{
    cout<<(nn.a/nn.b)*nn.c;
}
int main()
{
    class one t;
    t.in();
    function(t);
    fun2(t);


//Write a C++ program to demonstrate a friend function that compares private character data members of two different classes and returns the largest character.
class one
{
    char name;
public:
    void take1()
    {
        cout<<"enter data";
        cin>>name;
    }
    friend char largest(class one,class two);
};
class two
{
    char fame;
public:
    void take2()
    {
        cout<<"enter data ";
        cin>>fame;

    }
    friend char largest(class one,class two);
};
char largest(class one t1,class two t2)
{
    if (t1.name>t2.fame)
        return t1.name;
    else
        return t2.fame;
}
int main()
{
    class one obj1;
    class two obj2;
    obj1.take1();
    obj2.take2();
    cout<<largest(obj1,obj2);
