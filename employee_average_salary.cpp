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
