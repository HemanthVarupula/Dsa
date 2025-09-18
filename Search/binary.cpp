#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,7,8,10};
    int s=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=s-1;
    int target;
    cin>>target;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            cout<<"element found at index "<<mid;
            break;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}