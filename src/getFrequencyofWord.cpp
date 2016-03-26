/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i, c = 0, c1 = 0,count=0;
	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	for (i = 0; word[i] != '\0'; i++)
	{
		c1++;
	}
	for (i = 0; i <= c - c1; i++)
	{
		if ((str[i] == word[0]) && (str[i + c1 - 1] == word[c1-1]))
		{
			int k = 0, e = 0;
			for (int j = i; j <= i + c1 - 1; j++)
			{
				if (str[j] != word[k++])
				{
					e++;
				}
			}
			if (e == 0)
				count++;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	
	return 0;
}

