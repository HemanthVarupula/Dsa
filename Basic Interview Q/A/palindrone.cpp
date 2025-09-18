#include <iostream>
using namespace std;
int main(){
    string s1="madams";
    string s2=s1;

    // cout<<s1.length();

    int start=0;
    int end=s2.length()-1;
    while(start<=end){
        swap(s2[start],s2[end]);
        start++;
        end--;
    }

    if(s1==s2){
        cout<<"given string is palindrone"<<endl;
    }else{
        cout<<"not a palindrone "<<endl;
    }
}