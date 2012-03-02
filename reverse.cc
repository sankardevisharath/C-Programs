#include<iostream>
#include<cstring>
using namespace std;
main(int argc, char* argv[])
	{
	if(argc<2)
		{
		cout<<"not enough arguments\n"<<endl;
		return 0;
		}	
	int i=0,j=strlen(argv[1]);
	char temp;
	j=j-1;
	while(i<=j)
		{
		temp=argv[1][i];
		argv[1][i]=argv[1][j];
		argv[1][j]=temp;
		i++;j--;
		}
	cout<<"reversed string is \t "<<argv[1]<<endl;
	}
