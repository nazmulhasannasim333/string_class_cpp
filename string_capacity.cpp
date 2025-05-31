#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello, World!";
    int size = s.size();
    int max_size = s.max_size();
    int capacity = s.capacity();
    s.clear();
    bool empty = s.empty();
    s.resize(10, 'x'); // Resize
    return 0;
}