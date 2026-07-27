#include<iostream>
using namespace std;

class student
{   
    private:
	int studentid;
	 string studentemailid;
	char studentName[50];
	 string studentmobileNo;
	 
	public:
		void setstudentDetails()
		{
			cout<<"enter studentid:";
			cin>>studentid;
			
			cout<<"enter student emailid:";
			cin>> studentemailid;
			
			cout<<"enter student Name:";
			cin>>studentName;
			
			cout<<"enter student mobileNo:";
			cin>>studentmobileNo;
			
			
			
		}
		
		void showstudentDetails()
		{
			cout<<"\n student id is:"<<studentid;
			cout<<"\n student emailid is:"<<studentemailid;
			cout<<"\n student Name is:"<<studentName;
			cout<<"\n student mobileNo is:"<<studentmobileNo;
		
		}
	
	
};
     int main()
     {
     	student s[100];
     	int n;
     	cout<<"\n enter number of student :";
     	cin>>n;
     	for(int i=0;i<n;i++)
     	{
     		s[i].setstudentDetails();
     		
		 } 
		 cout<<"\n";
		 for(int i=0;i<n;i++)
		 {
		 	s[i].showstudentDetails();
		 }
		 
     	
	 }