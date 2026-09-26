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

    class data
    {
      string name;
        float *Cgpa;
        int *roll;
        public:
        void take(float m,int n)
        {
            cout<<"enter data";
            Cgpa=&m;
            roll=&n;
        }
        void out()
        {
            cout<<"out put = "<<*Cgpa<<endl<<*roll<<endl;
        }
        
    };
    int main()
    {
     class data dd;
        int mm;
        float nn;
        cout<<"enter data";
        cin>>mm>>nn;
        dd.take(nn,mm);
        dd.out();     

    }
#include <iostream>
using namespace std;
class data
    {
      string name;
        float sal;
        string subject;
    
        public:
        void one ()
        {
            cin>>name>>sal>>subject;
            
        }
        void two()
        {
            cout<<name<<endl<<sal<<endl<<subject<<endl;
        }
        
    };
    int main()
    {
     class data d1,*d2;
        d1.one();
        d2=&d1;
        d2->two();
        

    }


#include<iostream>
using namespace std;
class teacher()
{

    string name ;
    float sal;
    string subjects;
public:
    void one()
    {
        cin>> name>> sal>> subject;

    }
    void two()
    {

        cout<< name<<endl<<sal<<endl<<subject;
    }
    float salary()
    {
        return sal
    }
};
int main()
{
   class teacher t[4];
	int i,j=0;
	for(i=0;i<4;i++){
		t[i].one();
	}
	float salarylargest=t[0].salary();
	
	for(i=1;i<4;i++){
		if(t[i].salary()>salarylargest){
			salarylargest=t[i].salary();
			j=i;
		}
	}
	t[j].two();

}



#include<iostream>
using namespace std;
class board
{
	string cat;
	float cost;
	public:
		void take()
		{
			cin>>cat>>cost;
		}
		void dis()
		{
			cout<<cat<<cost<<endl;
		}
		string bd()
		{
			return cat;
		}
};
int main()
{
	class board b[3];
	int i,j=-1;
	string bs;
	for(i=0;i<3;i++)
	{
		b[i].take();
	}
	cout<<"enter the board cat to search";
	cin>>bs;
	for(i=0;i<3;i++)
	{
		if(b[i].bd()==bs)
		b[i].dis();
		j++;
	}
	if(j==-1)
	cout<<"board cat you are searching does not exist";
}

#include<iostream>
using namespace std;
class student
{
    string name;
    float marks[8];
    float highest;
public:
    void take()
    {
        cout<<"Enter the data";
        for (int i=0;i<8;i++)
        {
            cin>>marks[i];
        }
    }
    void process();
    void dis();
};
void student::process()
{
    highest = marks[0];
    for (int i=1;i<8;i++)
    {
        if (marks[i]>highest)
            highest=marks[i];
    }
}
    void student::dis()
    {

        cout<<name<<"highest marks in subject are"<<highest<<endl;
    }
int main()
{
    class student ss;
    ss.take();
    ss.process();
    ss.dis();
}

#include<iostream>
using namespace std;

int main()
{
    int a[2][3][4];
    int i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                cin >> a[i][j][k];
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}









#include<iostream>
#include<string>
using namespace std;
class students
{
    string s="Vignesh";
    cout<<s.at(4)<<endl;
    string s2;
    s2=s.substr(2,8);
    cout<<s2<<endl;
    cout<<s.rfind("esh")<<endl;
    cout<<s.find_last_of("ish");

    string s;
    getline(cin,s); //multiple words prints
    cout<<s;
    cin>>s;
    cout<<s;

public:
    string name;
    int roll;
    float cgpa;
};
int main()
{

    string students::*ptr=&students::name;
    int students::*ptr1=&students::roll;
    float students::*ptr2=&students::cgpa;
    class students s11;
    s11.name="Vignesh";
    s11.roll=37;
    s11.cgpa=1000;
    cout<<s11.*ptr<<endl;
    cout<<s11.*ptr1<<endl;
    cout<<s11.*ptr2<<endl;
}
#include<iostream>
#include<string>
using namespace std;
class students
{
    string s="Vignesh";
    cout<<s.at(4)<<endl;
    string s2;
    s2=s.substr(2,8);
    cout<<s2<<endl;
    cout<<s.rfind("esh")<<endl;
    cout<<s.find_last_of("ish");

    string s;
    getline(cin,s); //multiple words prints
    cout<<s;
    cin>>s;
    cout<<s;

public:
    string name;
    int roll;
    float cgpa;
};
int main()
{

    string students::*ptr=&students::name;
    int students::*ptr1=&students::roll;
    float students::*ptr2=&students::cgpa;
    class students s11;
    s11.name="Vignesh";
    s11.roll=37;
    s11.cgpa=1000;
    cout<<s11.*ptr<<endl;
    cout<<s11.*ptr1<<endl;
    cout<<s11.*ptr2<<endl;
}

#include<iostream>
using namespace std;
class car
{
    string comp;
    int cap;
    float cost;
public:
    car()
    {
        comp="rayal villas";
        cap =7675;
        cost=100000;
    }
    car(string ss,int cc,float ct)
    {
        comp =ss;
        cap=cc;
        cost=ct;

    }
    void dis()
    {
        cout<<comp<<endl<<cap<<endl<<cost<<endl;
    }

};
int main()
{
    class car cc;
    cc.dis();
    class car cc2("kundai",200,243095.098);
    cc2.dis();


}
#include <iostream>
using namespace std;

class Laptop {
    string company;
    float cost;

public:
    Laptop() {
        company = "hp";
        cost = 0;
    }
    Laptop(string c, float p) {
        company = c;
        cost = p;
    }
    Laptop(string c) {
        company = c;
        cost = 50000;
    }
    void dis() {
        cout << "Company: " << company << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main() {
    Laptop l1;
    Laptop l2("Dell", 65000);
    Laptop l3("lenovo");
    l1.dis();
    l2.dis();
    l3.dis();
}

#include <iostream>
using namespace std;

class Data
{
    int a, b;
    float c;

public:

    // Parameterized constructor
    Data(int aa, int bb, float cc)
    {
        a = aa;
        b = bb;
        c = cc;
    }

    // Copy constructor
    Data(const Data &r)
    {
        a = r.a;
        b = r.b;
        c = r.c;
    }

    // Member function
    void process()
    {
        cout << a * b * c << endl;
    }

    // Destructor
    ~Data()
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    Data d(5, 8, 1);
    d.process();

    Data d2(d);
    d2.process();

    return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
int main ()
{

    ofstream ff;
    ff.open("hello.cpp");
    ff<<"love you baache\n";
    ff<<"kya kar rahe";
    ff.close();
    char name[40];
    ifstream ff2;
    ff2.open("hello.cpp");
    while(ff2)
    {
     ff2.getline(name,40);
       cout<<name;
    }

    ff2.close();


}
