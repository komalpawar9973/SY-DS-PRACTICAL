#include<iostream>
using namespace std;

struct student
{ 
   int rollno;
   string name;
   	float marks;
	
 } ;
 
 void addstudent(student*s,int n)
 {
 	for (int i=0;i<n;i++)
 	{
 		cout<<"\n Enter details of student" <<i+1 << endl;
 		
 		cout<<"roll no:";
 		cin>>s[i].rollno;
 		
 		cout<<"Name:";
 		cin>>s[i].name;
 		
 		cout<<"Marks:";
 		cin>>s[i].marks;
		 		 }
 }
 void displaystudent(student*s, int n)
 {
 	cout<<"\n --student records--\n";
 	
 	for(int i=0;i<n;i++)
 	{
 		cout<<"\n student :"<<i+1<<endl;
 		cout<<"\n roll no:"<<s[i].rollno<<endl;
 		cout<<"\n Name:"<<s[i].name<<endl;
 		cout<<"\n marks:"<<s[i].marks<<endl;
 		
 		
	 }
 	
 }
 
 int main ()
 {
 	student s[100];
 	int n;
 	
 	cout<<"Enter number of student:";
 	cin>>n;
 	
 	addstudent(s,n);
 	displaystudent(s,n);
 	
 	return 0;
	  }