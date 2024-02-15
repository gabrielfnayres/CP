#include <bits/stdc++.h>
#include <vector>


using namespace std;


int main()
{
    vector<int> v = {12, 4, 5, 6, 10, 20, 45};
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    string s = "monkey";

    sort(s.begin(), s.end());
    cout << s << endl;    

    /// sorting pairs

    vector<pair<int, int>> p;
    p.push_back({1, 5});
    p.push_back({2, 3});
    p.push_back({1, 2});
    p.push_back({3, 3});


    sort(p.begin(), p.end());
    for(int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
   
    /// sorting tuples

    vector<tuple<int, int, int>> t;
    t.push_back({1, 5, 3});
    t.push_back({2, 3, 4});
    t.push_back({1, 2, 3});

    sort(t.begin(), t.end());
}
