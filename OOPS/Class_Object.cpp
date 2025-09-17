// #include<iostream>
// using namespace std;
// class Name{
   
//     private:
//     int age;
//     public: 
//     string name; 
//      Name(){
//         cout<<"hello"<<endl;
//     };
//     int weight;
//     Name(int w,string n){
//         weight=w;
//         name=n;
//     }
   

//     void print(){
//         cout<<weight<<endl;
//         cout<<name<<endl;
//     }
//     void setAge(int nage){
//         age=nage;
//     }
//     void getAge(){
//        cout<<age;
//     }
// };
// int main(){
//     Name naam(74,"hemanth");
//     naam.print();
//     // naam.print("hemanth");
//     // naam.setAge(23);
//     // naam.getAge();
// }


#include<iostream>
using namespace std;
class Details{
    public:
    Details(){
        cout<<"printing details"<<endl;
    }
    string name;
    int num;
    void print(string name,double num){
        this->name=name;
        this->num=num;
        cout<<"name "<<name <<"num is "<<num<<endl;
    }

};
int main(){
    Details d1;
    d1.print("hemanth",90146);
}