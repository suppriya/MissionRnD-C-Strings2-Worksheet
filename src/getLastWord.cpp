/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i, len = 0,a,b=0;
	if ((str != NULL) && (str != " "))
	{
		char* ans = (char*)malloc(sizeof(char*)* 7);
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
		for (i = len; str[i] != ' '; i--)
		{
			a = i;
			break;
		}
		for (i = a; ((str[i] == ' ')||( i == -1)); i--)
		{
			b = i + 1;
			break;
		}
		for (i = b; b <= a; i++)
		{
			ans[i - b] = str[i];
		}
		ans[i] = '\0';
		return ans;
	}

	return NULL;
}
