#include<iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    // int a ;
    // cout<<"enter the value of a" <<endl;
    // cin>>a;
    // cout<<"entered value is "<<a<<endl;

    //loops


    // for(int i=0;i<4;i++){
    //     cout<<i<<" ";
    // }

    // int i=0;
    // while(i<7){
    //     cout<<i<<" ";
    //     i++;
    // }

    //do-while
    // int i=0;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while (i<5);


    //conditions
    // int age;
    // cout<<"enter the age "<<endl;
    // cin>>age;
    // if(age>18){
    //     cout<<"adult";
    // }else{
    //     cout<<"not adult"<<" ";
    // }

    // int num;
    // cin>>num;
    // if(num==0){
    //     cout<<"num is equal to 0 "<<endl;
    // }else if(num>0){
    //     cout<<"num is greater than 0"<<endl;
    // }else{
    //     cout<<"num is less than 0"<<endl;
    // }


    //switch 

    int day;
    cin>>day;
    switch (day)
    {
    case 1:
        /* code */
        cout<<"monday"<<endl;
        break;
    case 2:
        /* code */
        cout<<"tuesday"<<endl;
        break;
    case 3:
        /* code */
        cout<<"wednesday"<<endl;
        break;
    case 4:
        /* code */
        cout<<"thursday"<<endl;
        break;
    case 5:
        /* code */
        cout<<"friday"<<endl;
        break;
    case 6:
        /* code */
        cout<<"saturday"<<endl;
        break;
    case 7:
        /* code */
        cout<<"sunday"<<endl;
        break;
    
    default:
    cout<<"invalid day"<<endl;
        break;
    }
    

}