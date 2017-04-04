#include "donut.h"
#include "arrayHeader.h"
#include <string>
#include <iomanip>

string getType(int);
string getLoc(int);

int main()
{
	int size, max, min, locMode, typeMode;
	int total = 0; 
	double average = 0;
	string locations, type;
	int* numDonuts;
	int* typeDonuts; 
	int* location;
	
	cout << "How many students did you survey?  ";
	cin >> size;
	cout << endl;
	cout << "Please enter in the following data about the students surveyed.\n";
	cout << "For each student enter the number of donuts purchased last month, favorite place\n";
	cout << "to purchase donuts, and favorite kind of donut.\n\n";
	
	numDonuts = makeArray(size);
	typeDonuts = makeArray(size);
	location = makeArray(size);
	
	enterData(numDonuts, typeDonuts, location, size);
	max = getLargest(numDonuts, size);
	min = getSmallest(numDonuts, size);
	total = getTotal(numDonuts, size);
	average = static_cast<double> (total) / size;
	
	typeMode = getTypeMode(typeDonuts, size);
	locMode = getLocMode(location, size);
	locations = getLoc(locMode);
	type = getType(typeMode);
	
	cout << left << setw(43) << right << setw(33) << "LARGEST NUMBER OF DONUTS EATEN:" << left << setw(26) << right << setw(22) << max << endl;
	cout << left << setw(43) << right << setw(33) << "SMALLEST NUMBER OF DONUTS EATEN:" << left << setw(26) << right << setw(22) << min << endl;
	cout << left << setw(43) << right << setw(33) << "TOTAL NUMBER OF DONUTS EATEN:" << left << setw(26) << right << setw(22) << total << endl;
	cout << left << setw(43) << right << setw(33) << "AVERAGE NUMBER OF DONUTS EATEN:" << left << setw(26) << right << setw(22) << average << endl;
	cout << left << setw(43) << right << setw(33) << "MOST POPULAR DONUT LOCATION:" << left << setw(26) << right << setw(22) << locations << endl;
	cout << left << setw(43) << right << setw(33) << "MOST POPULAR DONUT TYPE:" << left << setw(26) << right << setw(22) << type << endl;
	
	delete [] numDonuts;
	delete [] typeDonuts;
	delete [] location;
	
	return 0;
}

string getType(int typeMode)
{
	string type;
	
	if(typeMode == 1)
	{
		type = "Glazed";
	}
	else if(typeMode == 2)
	{
		type = "Blueberry";
	}
	else if(typeMode == 3)
	{
		type = "Chocolate";
	}
	else if(typeMode == 4)
	{
		type = "Holes";
	}
	else if(typeMode == 5)
	{
		type = "Powdered";
	}
	else if(typeMode == 6)
	{
		type = "Filled";
	}
	else
	{
		type = "None (no mode)";
	}
	
	return type;
}

string getLoc(int locMode)
{
	string location;
	
	if(locMode == 1)
	{
		location = "Dunkin's Donuts";
	}
	else if(locMode == 2)
	{
		location = "Ralph's Donuts";
	}
	else if(locMode == 3)
	{
		location = "Big O Donuts";
	}
	else if(locMode == 4)
	{
		location = "KrispyKreme's Donuts";
	}
	else if(locMode == 5)
	{
		location = "Other";
	}
	else
	{
		location = "None (no mode)";
	}
	
	return location;
}