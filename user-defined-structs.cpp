#include <bits/stdc++.h>

using namespace std;

struct P 
{
    int x, y;
    bool operator<(const P &p) 
    {
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
};


bool comparison(string a, string b)
{
    if(a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
    {
        return a < b;
    }
}

