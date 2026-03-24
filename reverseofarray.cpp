#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[]= {1,34,54,67,8,72,34,5,432};
    int n= sizeof(a)/4;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    int i=0, j= n-1;
    while(i<j){
        int temp = a[i];
        a[i]= a[j];
        a[j]= temp;
        i++,j--;

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";}


}