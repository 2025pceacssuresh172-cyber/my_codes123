#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    int arr[]= {1,2,3,4,67,6,7,};
    int max= arr[0];// iski jagah hum standard ye likh sakte ha i "INT_MIN" jiski valude - 10 digit ki hoti hai ok ,,good to code 
    int index = 0;
    int n = sizeof(arr)/4; // 4 se divide na karke sizeof(arr[0])se karo kyoonki kisi  system me kitni byte le rha rha pta thodi ha i hume 
        for (int i=1;i<n;i++){
        if(arr[i]>max){ max= arr[i];index = i;}//arr[i]>max){ max= arr[i]; iski jagah thum  mx = max(arr[i], mx )ka bhi use kar sakte ho but max in buit fxmn hai tho thumara max change kar dhooo max se mx kar dena o k the nru n 
                      //cout<<i<<endl;
    }
    cout<<max<<endl;
    cout<<n<<endl;
    cout<<index<<endl;
    
}