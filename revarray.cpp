#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[]= { 12,35,67,89,07,65,83,005};
    int n = sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        b[i]= a[n-1-i];
        cout<<b[i]<<" ";
    }
}