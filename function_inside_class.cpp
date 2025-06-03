#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "Hello, " << name << "! Your roll number is " << roll << "." << endl;
    }
};

int main()
{
    Student nasim("Nasim", 1);
    nasim.hello();

    Student rahim("Rahim", 2);
    rahim.hello();

    Student karim("Karim", 3);
    karim.hello();
    return 0;
}