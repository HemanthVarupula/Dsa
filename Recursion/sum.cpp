
//find the n natural numbers using recursion

// #include<iostream>
// using namespace std;
// int Sum(int n){
//     if(n==1){
//         return n;
//     }
//     return n+ Sum(n-1);
// }
// int main(){
//     cout<<Sum(10);
// }

//factorial
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1){
//         return n;
//     }
//     return n*(fact(n-1));
// }
// int main(){
//     cout<<fact(5);
// }


//fibnacci series

#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    cout<<fib(5);
}
