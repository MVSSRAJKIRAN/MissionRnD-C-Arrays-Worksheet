/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
int removeArrayDuplicates(int *Arr, int len)
{
	int i, j = 0, count = 0, t, once;
	once = len;
	if (Arr&&len>0)
	{
		if (len == 1)
		{
			return 1;
		}
		else
		{
			for (i = 1; i<len; i++)
			{
				t = 0;
				while (t <= j)
				{
					if (Arr[i] == Arr[t])
					{
						count++;
					}
					t++;
				}
				if (count>0)
				{
					count = 0;
					once--;
				}
				else
				{
					j++;
					Arr[j] = Arr[i];
				}
			}
			return once;
		}
	}
	else
	{
		return -1;
	}
}