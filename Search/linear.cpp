#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,4,7,1};
    int s= sizeof(arr)/sizeof(arr[0]);
    int target ;
    cin>>target;
    for(int i=0;i<s;i++){
        if(arr[i]==target){
            cout<<"element found at index "<<i<<endl;
        }
    }
}