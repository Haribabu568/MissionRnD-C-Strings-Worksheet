/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char *str, int i, int j)
{
	char temp;
	while (i<j)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i++;
		j--;
	}
}
void str_words_in_rev(char *input, int len){
	int i,k=0;
	reverse(input, 0, len-1);
	for (i = 0; i < len; i++)
	{
		if (input[i] == 32)
		{
			reverse(input, k, i-1);
			k = i+1;
		}
	}
	reverse(input, k, len - 1);
}
