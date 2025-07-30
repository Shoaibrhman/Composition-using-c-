
# include <iostream>
# include <string.h>
using namespace std;
class Student {
    private:
    string name;
    string rollNo;
    bool attendence;
    public:
    Student (string na, string ro , bool at) : name {na} , rollNo {ro} , attendence {at} {};
        void Display_Student_Info () {
            cout << "Name : " << name << endl;
            cout << "Roll No : " << rollNo << endl;
            cout << "Attendence : " << attendence << endl;
        };
};
class Professor{
    private:
    string name;
    string course;
    public:
    Professor (string na , string c) : name {na} , course {c} {};
    void Display_Teacher_Info () {
        cout << "Name : " << name << endl;
        cout << "Course  : " << course << endl;
    };
};
class Semester {  
    public:
    Student stud1;
    Professor Prof1;
    Semester (Student S , Professor P) : stud1 {S} , Prof1 {P}{};
    void Display_Semester_Info () {
        stud1.Display_Student_Info ();
        Prof1.Display_Teacher_Info ();
    };
};    
int main (){
    Student stud1 ("Shoaib" , "059" , 1);
    Professor Prof1 ("DR. Naeem" , "CS 121");
    Semester semester1 (stud1 , Prof1);
    semester1.Display_Semester_Info ();
    return 0;
 
};