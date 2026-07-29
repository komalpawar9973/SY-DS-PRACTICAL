#include<iostream>
using namespace std;

int main()
{
	int arr[]={15,3,42,8,23,1};
	
	int n=6;
	int *min =arr, *max=arr;
	
	for(int *p=arr; p<arr+n;++p ){
	
	if(*p<*min)min=p;
	if(*p>*max)max=p;
}
std::cout<<"smallest:"<<*min<<"\n";
std::cout<<"greater:"<<*max<<"\n";

return 0;
}