#include <iostream>
#include <iomanip>
using namespace std;
int prdt(int n)
{
    if (n ==0||n==1 ) return 1;
    return n*prdt(n-1);
}
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    cout <<prdt(n);
}