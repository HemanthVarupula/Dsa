#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,5,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool swaped;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(!swaped){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}