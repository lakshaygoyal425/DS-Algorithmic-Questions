#include<stdio.h>
#include<string.h>

void isPalindrome(char str[])
{
	int low = 0;
	int high = strlen(str)-1;
	
	while(high>low)
	{
		if(str[low++] != str[high--])
		{
			printf("%s is not palindrome\n",str);
			return;
		}
	}
	
	printf("%s is palindrome\n",str);
}

int main()
{
	isPalindrome("abba");
	isPalindrome("abbcca");
}
