#include<iostream>
using namespace std;
int main()
{
	int n;
	char name[10],gender[20];
	cout<<"enter name of the person:";
	cin>>name;
	cout<<"enter gender of the person:";
	cin>>gender;
	cout<<"enter age of the person:";
	cin>>n;
	if(n>=18) cout<<"eligible to vote.\n";
	else cout<<"not eligible to vote.\n";
	return 0;
	
}
