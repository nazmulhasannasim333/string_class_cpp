#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string name;
    int jersey;

    Cricketer(string name, int jersey)
    {
        this->name = name;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *sakib = new Cricketer("Shakib", 75);
    Cricketer *tamim = new Cricketer("Tamim", 28);
    *tamim = *sakib;
    delete sakib;
    // cout << sakib->name << " " << sakib->jersey << endl;
    cout << tamim->name << " " << tamim->jersey << endl;
    return 0;
}