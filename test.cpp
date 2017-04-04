#include <iostream>

using namespace std;

int getTypeMode(int*, int);

int main()
{
	int index;
	
	int array[5] = {2,1,2,3,4};
	
	index = getTypeMode(array, 5);
	
	cout << index;
	
	return 0;
}


int getTypeMode(int* typeDonuts, int size)
{
	int* count = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		count[i] = 0;
	}
	
	for(int i = 0; i < size; i++)
	{
		count[typeDonuts[i]]++;
	}
	
	
	int max = 0;
	
	for(int i = 1; i < size; i++)
	{
		if(count[max] < count[i])
		{
			max = i;
		}
		else
		{
			return -1;
		}
	}
	
	return max;
}