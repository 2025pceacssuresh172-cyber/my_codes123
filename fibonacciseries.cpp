#include<iostream>
using namespace std;
int main(){
    int n,t1=0,t2 = 1 , nextterm;
    cout<<"enter terms of fibonacci to be printed: ";
    cin>>n;
    for(int i =1;i<n;i++){
        cout<<t1<<endl;
        //cout<<t2<<endl;
        nextterm = t1+t2;
        t1=t2;
        t2 = nextterm;
    }
    return 0;
}