#include <bits/stdc++.h>
using namespace std;

void max_distance(int num_pairs, vector<int> x, vector<int> y)
{
    int max_dist = 0.0;
    for(int i = 1; i <= num_pairs; i++)
    {
        for(int j = i + 1; i<= num_pairs; j++)
        {
            int dist_x = x[i] - x[j];
            int dist_y = y[i] - y[j];

            int dist = (dist_x * dist_x) + (dist_y * dist_y);

            max_dist = max(max_dist, dist);

        }
    }
    cout << max_dist << endl;
}

