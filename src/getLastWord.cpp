/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i, len = 0,a=0,b=0;
	char* ans = (char*)malloc(sizeof(char*) * 7);
	if ((str != "   ")&&(str!=""))
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
		for (i = len-1; str[i] == ' '; i--)
		{
		   
		}
		a = i; 
		for (i = a ; str[i] != ' '; i--)
		{
			if (i == -1)
			{
				break;
			}
		}
		b = i + 1;
		for (i = b; i <= a; i++)
		{
			ans[i - b] = str[i];
		}
		ans[i - b] = '\0';
		return ans;
	}
	else {
		ans = "";
		return ans;
	}
}
