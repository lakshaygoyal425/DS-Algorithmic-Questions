#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
	for(int i=s.length();i>=0;i--)
	{
		cout << s[i];
	}
}

int main()
{
	string s = "Hello";
	reverse(s);
}
