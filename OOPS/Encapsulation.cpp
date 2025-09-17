#include<iostream>
using namespace std;
class Student{
    private:
    int roll_no;
    int marks;
    public:
    void setRoll_no(int Roll_no){
        roll_no=Roll_no;
    }
    int getRoll_no(){
        return roll_no;
    }

    void setMarks(int Marks){
        marks=Marks;
    }

    int getMarks(){
        return marks;
    }

    void print(){
        cout<<"the roll_no is "<<roll_no<<" and marks of the student "<<marks;
    }
};
int main(){
    Student s1;
    s1.setRoll_no(1);
    s1.setMarks(550);
    s1.print();
}