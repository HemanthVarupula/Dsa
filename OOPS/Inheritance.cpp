#include<iostream>
using namespace std;
class Person{
    public:
    int age;
    string name;
    void Details(int age,string name){
        this->age=age;
        this->name=name;
    }
};

class Student:public Person{
    public:
    int roll_no;
    void Print(int roll_no){
        cout<<"the name of person is "<<name<<" and his age is "<<age<<" his roll_no is "<<roll_no;
    }
};
int main(){
    Student s1;
    s1.name="hemanth";
    s1.age=23;
    s1.Print(19);

}