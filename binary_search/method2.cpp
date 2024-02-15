#include <bits/stdc++.h>


using namespace std;

void binary_search2(int arr[], int n, int element)
{
    int mid = 0;

    for(int i = n/2; i >= 1; i /= 2)
    {
        while(mid + i < n && arr[mid + i] <= element)
        {
            mid += i;
        }
    }
    if (arr[mid] == element)
    {
        cout << "found at index: " << mid << endl;
    }

}