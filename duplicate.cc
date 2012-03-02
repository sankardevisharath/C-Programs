#include<iostream>
#include<cstring>
using namespace std;
main(int argc, char* argv[])
	{
	if(argc<2) {cout<<"not enough parameters"<<endl;return 0;}
	int pos=0,i=0, status[4]={0,0,0,0};
	for(i=0;i<strlen(argv[1]);i++)
		{
		if((status[((int)argv[1][i])/32] & (1<<(((int) argv[1][i])%32)))>0)
			cout<<"string is not unique"<<i<< " "<<pos<<endl;	
		else 
			{
			status[((int)argv[1][i])/32]|=(1<<((int)argv[1][i]%32));
			argv[1][pos]=argv[1][i];
			pos++;
			}
		}
	argv[1][pos]='\0';
	cout<<argv[1]<<endl;
	}
