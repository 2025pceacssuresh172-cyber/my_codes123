#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the valaue of n : ";
    cin>>n;
 
    bool flag = true;//matlab phale n ko prime bata dhiya mebe ok fhir condition check kar lenge ki factor ha i ki nhi fhir value flag ki change kar dhenge ok bro got it 
    for(int i= 2 ; i<=n/2;i++){
        if(n%i==0){
        flag = false;
        break;}
    }

    if(n==1) cout<<"neither prime nor composite number.";
    else if (flag== true) cout<<"Prime no.";
    else cout<<"composite no.";
    return 0;

}