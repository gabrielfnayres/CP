#include <bits/stdc++.h>


/// well applied for sorted arrays 
/// complexity: O(log n)

using namespace std;

void binary_search1(int arr[], int n, int element)
{
    int x = 0;
    int y = n - 1;

    while(x <= y)
    {
        int mid = (x + y) / 2;
        if(arr[mid] == element)
        {
            cout << "found at index: " << mid << endl;
        }
        if (arr[mid] > element)
        {
            y = mid - 1;
        }
        else
        {
            x = mid + 1;
        }
    }

}