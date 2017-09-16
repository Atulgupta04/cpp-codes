#include<iostream>
using namespace std;
class student{
	char name[30];
	int rollno;
	int total;
	float cgpa;
public:
	void getdetails(void);
	void putdetails(void);
};
void student::getdetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter total marks outof 500: ";
    cin >> total;

    cgpa=(float)total/500*100;
}
void student::putdetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",rollno:" << rollno << ",Total:" << total << ",Percentage:" << cgpa;
}

int main()
{
    student std;

    std.getdetails();
    std.putdetails();

    return 0;
}
