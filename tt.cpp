#include <iostream>

using namespace std;

void getTypeMode(int location[], int size);

int main()
{
	int index;
	
	int array[5] = {4,4,5,8,7};
	
	getTypeMode(array, 5);
	
	return 0;
}

void getTypeMode(int location[], int size)
{
	int* count = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		count[i] = 0;
	}
	
	
	for(int i = 0; i < size; i++)
	{
		count[location[i]]++; 
	}
}
