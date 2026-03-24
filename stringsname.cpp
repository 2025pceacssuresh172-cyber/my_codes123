#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string s;
//    cin>>s; // cin yha line ki pheli aur phala word leta hai only okk so be careful use getline(cin,s)
getline(cin,s);   
cout<<s.length();
cout<<s;
}