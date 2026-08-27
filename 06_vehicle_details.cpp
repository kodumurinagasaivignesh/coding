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
