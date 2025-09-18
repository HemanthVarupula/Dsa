#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int onum=num;
    int ans=0;
    while(onum!=0){
        int rem=onum%10;
        ans=ans+(rem*rem*rem);
        onum=onum/10;
    }
    if(ans==num){
        cout<<"given number is a amstrong number "<<endl;
    }else{
        cout<<"given number is not a amstrong number "<<endl;
    }
}