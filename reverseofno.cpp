#include<iostream>
using namespace std;
int main(){
    int n, rn=0,ln;
    cout<<"entr  a no: ";
    cin>>n;
    while(n!=0){
        ln= n%10;
        rn= rn*10;

        rn= rn+ln;
        n=n/10;


    }
    cout<<"reverseis"<<rn;
    return 0;
}