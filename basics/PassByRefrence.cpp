#include<iostream>
using namespace std;
void changeA(int *ptr){
    *ptr=10;
}
int main(){
    int a=8;
    changeA(&a);
    cout<<a << " which is in main"<<endl;
}