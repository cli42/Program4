#include "arrayHeader.h"

int* makeArray(int size)
{
	int* array = new int[size];
	
	return array;
}

int getLargest(int* numDonuts, int size)
{
	int max = *(numDonuts);
	
	for(int i = 1; i < size; i++)
	{
		if(max < numDonuts[i])
		{
			max = numDonuts[i];
		}
	}
	
	return max;
}

int getSmallest(int* numDonuts, int size)
{
	int min = *(numDonuts);
	
	for(int i = 1; i < size; i++)
	{
		if(min > numDonuts[i])
		{
			min = numDonuts[i];
		}
	}
	
	return min;
}

int getTotal(int* numDonuts, int size)
{
	int total = 0;
	
	for(int i = 0; i < size; i++)
	{
		total += numDonuts[i];
	}
	
	return total;
}

int getTypeMode(int* typeDonuts, int size)
{
	int* count = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		count[i] = 0;
		int j = 0;
		
		while(j < i && (typeDonuts[i] != typeDonuts[j]))
		{
			if(typeDonuts[i] != typeDonuts[j])
			{
				j++;
			}
		}
		
		count[j]++;
	}
	
	int max = 0;
	
	for(int i = 1; i < size; i++)
	{
		if(count[max] < count[i])
		{
			max = i;
		}
		
		for(int k = i + 1; k < size; i++)
		{
			if(count[max] == count[k])
			{
				return -1;
			}
		}
	}
	
	delete [] count;
	
	return typeDonuts[max];
}

int getLocMode(int* location, int size)
{
	int* count = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		count[i] = 0;
		int j =0;
		
		while(j < i && (location[i] != location[j]))
		{
			if(location[i] != location[j])
			{
				j++;
			}
		}
		
		count[j]++;
	}

	int max = 0;
	
	for(int i = 1; i < size; i++)
	{
		if(count[max] < count[i])
		{
			max = i;
		}
		
		for(int k = i + 1; k < size; i++)
		{
			if(count[max] == count[k])
			{
				return -1;
			}
		}
	}
	
	delete [] count;
	
	return location[max];
}