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
	}
	
	return max;
}

int getLocMode(int* location, int size)
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
	
	int max = 0;
	
	for(int i = 1; i < size; i++)
	{
		if(count[max] < count[i])
		{
			max = i;
		}
		if(count[max] == count[i])
		{
			return -1;
		}
	}
	
	return max;
}