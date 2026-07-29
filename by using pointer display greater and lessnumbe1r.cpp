#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n], *p;
	
	for(int i=1;i<=n; i++)
	cin>>a[i];
	
	p=a;
	int max=*p,min=*p;
	
	for(int i=1;i<=n;i++){
	
	if(*(p+i)>max)
	  max=*(p+i);
	  
	  if(*(p+i)<min)
	  min=*(p+i);
	   
}  
  cout<<"greater ="<<max<<endl;
  cout<<"smaller ="<<min;
  
  return 0;
}
  