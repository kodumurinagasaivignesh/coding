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


