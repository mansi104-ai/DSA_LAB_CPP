#include<iostream>
using namespace std;
int main(){
    int arr[10],i,num,index;
cout<<"Enter 10 numbers ";
for(i=0;i<10;i++){
    cin>>arr[i];
    
     }
     cout<<"Enter number to be searched";
     cin>>num;
     for(i=0;i<10;i++){
        if(arr[i]==num){
             index=i;
             cout<<"Element is at"<<index<<"Position";
            break;
        }
         cout<<"Number not found";
       cout<< i;
     return 0;
     }

}    