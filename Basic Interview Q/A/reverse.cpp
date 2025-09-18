//write a code to reverse a number 

//132 to 231

#include<iostream>
using namespace std;
int main(){
    int num=132;
    int rev=0;
    while(num!=0){
        int rem=num%10;   //will give me remainder 
        rev=rev*10+rem;   //0*10 +2 =>2 2*10+3 =>23 23*10+1 =>231
        num=num/10;
    }
    cout<<"the revrse of given number is "<<rev<<endl;
}