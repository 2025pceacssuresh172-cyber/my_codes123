/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int arr[] = {1, 3, 4, 7, 9, 98, 78, 90, 65};
    int mx1 = arr[0];
    int mx2 = arr[0];
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx1)
        {
            mx1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == mx1)
        {
            continue;
        }
        else if
            (arr[i] > mx2)
                mx2 = arr[i];
    }
    cout << mx1 << endl;
    cout << mx2 << endl;
}*/
#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 7, 9,0, 78, 90, 65};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx1 = INT_MIN, mx2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx1)
        {
            mx2 = mx1;   // update second largest
            mx1 = arr[i];
        }
        else if (arr[i] > mx2 && arr[i] != mx1)
        {
            mx2 = arr[i];
        }
    }

    cout << "Largest: " << mx1 << endl;
    cout << "Second Largest: " << mx2 << endl;
}