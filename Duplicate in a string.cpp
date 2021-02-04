#include<bits/stdc++.h>
using namespace std;

void printDuplicate(string s)
{
	int count[256] = {};
	for(int i=0;i<s.size();i++)
	{
		count[s[i]]++;
	}
	
	for(int i=0;i<s.size();i++)
	{
		if(count[s[i]] > 1)
		{
			cout << s[i] << " count " << count[s[i]] << endl;
			count[s[i]] = 0;
		}
	}
}

int main()
{
	string s  = "Hello lakshay";
	cout << "Input String is " <<s << endl;
	printDuplicate(s);
}
