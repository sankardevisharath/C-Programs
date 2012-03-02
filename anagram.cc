#include<iostream>
#include<cstring>
using namespace std;
main(int argc, char* argv[])
	{
	short int len,i,j,status[4]={0,0,0,0 },count;
	//check number of parameters.
	if(argc<3) {cout<<"not enough parameters"<<endl;return 0;}
	len=strlen(argv[1]);
	//if the length of the two strings are different then strings are not anagrams.
	if(len!=strlen(argv[2])){cout<<"not anagrams "<<endl;return 0;}
	//take each letter of the first string.
	for(i=0;i<len;i++)
		{
		//check whether  the character at argv[1][i] is allready checked or not.
		if(((status[(((int)argv[1][i])/32)])&(1<<(((int)argv[1][i]%32))))==0)			 status[((int)argv[1][i])/32]|=(1<<(((int)argv[1][i])%32));
		//if allready checked then go to next iteration
		else
			continue;
		j=len-1;
		count=1;
		//count the number of occurace of character in the first string.
		while(j>i)
			{
			if(argv[1][j]==argv[1][i])
				count++;
			j--;
			}
		j=0;
		//count the number of occurance of the character in the second string.
		while(j<len)
			{
			if(argv[2][j]==argv[1][i])	
				count--;
			j++;
			}
		//check whether the occurance of character in two strings are equal or not. if not equal then they are not anagrams.
		if(count>0)
			{
			cout<<"they are not anagrams"<<endl;return 0;}
		}
	//if the program reaches here then it is anagrams

	cout<<"anagrams"<<endl;
	}
