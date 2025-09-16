#include<iostream>
using namespace std;
int main(){
    // int b=3;
    // // cout<<&b<<endl;
    // int *a=&b;
    // cout<<a<< "   pointing towards address of b"<<endl;
    // cout<<&a<<"  printing address of a "<<endl;
    // cout<<*a<<" printing the value inside the address"<<endl;
    // int** c=&a;
    // cout<<c<<" c is pointed to a "<<endl;

    // int * ptr=NULL;
    // cout<<ptr<<endl;

    int a=2;
    int *b=&a;
    cout<<*b<<" the value of b is"<<endl;
    cout<<" address of a is "<<&a<<endl;
    cout<<"address of b is "<<&b<<endl;
    int **c=&b;
    cout<<"the content in &c is "<<*(&c)<<endl;
    cout<<"address of c is "<<(&c)<<endl;
}