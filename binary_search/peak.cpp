#include <bits/stdc++.h>
using namespace std;

// Solution 1
int peak(int a[], int n)
{
    if (n == 1)
        return 0;
    if (a[0] > a[1])
        return 0;
    if (a[n - 1] > a[n - 2])
        return n - 1;
    int low = 1;
    int high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((a[mid] > a[mid - 1]) && (a[mid] > a[mid + 1]))
            return mid;
        else if (a[mid] < a[mid + 1])
            low = mid + 1;
        else if (a[mid] < a[mid - 1])
            high = mid - 1;
    }
    return -1;
}

// Solution 2 (GFG Solution : not according to definition although somewhat)
int peak2(int a[], int n)
{
    if (n == 1)
        return 0;
    if (a[0] >= a[1])
        return 0;
    if (a[n - 1] >= a[n - 2])
        return n - 1;
    int low = 1;
    int high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((a[mid] >= a[mid - 1]) && (a[mid] >= a[mid + 1]))
            return mid;
        else if (a[mid] < a[mid + 1])
            low = mid + 1;
        else if (a[mid] < a[mid - 1])
            high = mid - 1;
    }
    return -1;
}

// Solution 3
int peak3(int a[], int n)
{
    if (n == 1)
        return 0;
    if (a[0] > a[1])
        return 0;
    if (a[n - 1] > a[n - 2])
        return n - 1;
    int low = 1;
    int high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((a[mid] > a[mid - 1]) && (a[mid] > a[mid + 1]))
            return mid;
        else if (a[mid] < a[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Solution 4
int peak4(int a[], int n)
{
    if (n == 1)
        return 0;
    if (a[0] > a[1])
        return 0;
    if (a[n - 1] > a[n - 2])
        return n - 1;
    int low = 1;
    int high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((a[mid] > a[mid - 1]) && (a[mid] > a[mid + 1]))
            return mid;
        else if (a[mid] > a[mid - 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int i, n, peakIn;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];
    cout << "Enter array elements : " << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    peakIn = peak(a, n);
    cout << "Peak element index : " << peak << endl;
    return 0;
}