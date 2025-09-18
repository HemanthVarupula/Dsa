//find the given year is a leap year or not 

// if the given year %400 ==0 , then it is a leap year . if not if year%4==0 and year %100 !=0 then its ia leap year else given year not a leap year

#include<iostream>
using namespace std;
int main(){
    int year ;
    cin>>year;
    if(year%400==0){
        cout<<"given year is leap year"<<endl;
    }

    else if (year%4 ==0 && year%100!=0){
        cout<<"given year is leap year"<<endl;
    }else{
        cout<<"given year is not a leap year"<<endl;
    }
}