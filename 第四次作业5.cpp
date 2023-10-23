#include<iostream>
using namespace std;
int main(){
	int n=0,g=0,f=0;
	char c;
	for(int i=1;i<=3;i++)
	{
	  for(int t=1;t<=3;t++)
	{
	if(t==i) cout<<'#';
	else
	 cout<<'*';
	}
	cout<<endl;
}
}
