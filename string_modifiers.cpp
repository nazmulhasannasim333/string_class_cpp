#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello BD";
    string s2 = "World";
    // s += s2;
    // s.append(s2);
    // s.push_back('!');
    // s += "!";
    // s.pop_back();
    // s = s2;
    // s.assign(s2);
    // s.erase(3, 2);
    // s.replace(5, 1, "C++20");
    s.insert(5, "C++20");
    cout << s << endl;
    return 0;
}