#include<iostream>
using namespace std;
class Name{
    private:
    int age;
    public:  
   string name;

    void print(string newName){
        name=newName;
        cout<<name<<endl;
    }
    void setAge(int nage){
        age=nage;
    }
    void getAge(){
       cout<<age;
    }
};
int main(){
    Name naam;
    naam.print("hemanth");
    naam.setAge(23);
    naam.getAge();
}