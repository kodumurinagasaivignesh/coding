#include<iostream>
using namespace std;

class vehicle
{
    char company[20];
    char type[20];
    int cost;

public:
    void in();
    void process();
} v1;

void vehicle::in()
{
    cout << "Enter data: ";
    cin >> company >> type >> cost;
}

void vehicle::process()
{
    cout << "Vehicle Details:" << endl;
    cout << "Company: " << company << endl;
    cout << "Type: " << type << endl;
    cout << "Cost: " << cost << endl;
}

int main()
{
    vehicle v2;

    v1.in();
    v2.in();

    v1.process();
    v2.process();

    return 0;
}


float fun(int &a,char&b,float &c)
{ cout<<b<<endl;
 return(a*c);

}
int main()
{
    int a1;char b1;float c1;
    cin>>a1>>b1>>c1;
    cout<<  fun(a1,b1,c1);
}


//locaaland global variable
int x;
main(){
int y=0;
{
    int y=20;
    cout<<x<<y<<endl;
    x++;y++;
    {
        int y =20;
        cout<<x<<y<<endl;
    }

}
cout<<x<<y;
}

#include<iostream>
using namespace std;
int main()
{
float c=12.33;
float *a=&c;
cout<<a<<endl<<a+2;//48-83=8 in exadecimal system

}
#include<iostream>
using namespace std;
int main()
{
float c=12.33;
float *a=&c;
cout<<a<<endl<<a+2;//48-83=8 in exadecimal system
cout<<++a;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    void *b;
    int a =20;
    b=&a;
    cout<<*(int*)b<<endl;
    float r =20.2365;
    b=&r;
    cout<<*(float*)b<<endl;
    char n;
    n='y';
    b=&n;
    cout<<*(char*)b<<endl;

    
    float *p;
    {
        float n=45.36;
        p=&n;
        cout<<p<<endl<<*p<<endl;
    }
    p=NULL;
    cout<<p<<endl;
}

