#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[])
	{
	//declarations
	string s (argv[1]);
	string::iterator it;
	//code
	cout<<s<<endl;
	int i[4];
	for(it=s.begin();it<s.end();it++)
		{
		if( ( ( i[ (( (int)*it)/32)] >> (((int) *it) %32)) & 1) ==0)
			 i[ ( ((int)*it)/32) ] |=1<<(( (int)*it)%32);
		else
			{
			cout<<"not unique"<<endl;
			return 0;
			} 
		}
	cout<<"unique"<<endl;
	return 0;
	}
