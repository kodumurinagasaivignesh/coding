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
