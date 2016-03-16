/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int i,n=(int)number,j=0,k;
	float d;
	d = number -(float) n;
	if (n < 0)
	{
		n = -n;
		d = -d;
	}
	for (i = 19; n > 0; n = n / 10,i--)
		str[i] = 48+n % 10;
	k = 19 - i;
	i++;
	if (number < 0)
	{
		j = 1;
		str[0] = '-';
		k++;
	}
	for (; j < k; j++,i++)
	{
		str[j] = str[i];
		str[i] = '\0';
	}
	str[j] = '.';
	j++;
	for (; afterdecimal > 0; afterdecimal--,j++)
	{
		d = d * 10;
		n = (int)d;
		str[j] = 48 + (n % 10);
	}
}
