#include "donut.h"

void enterData(int* numDonuts, int* typeDonuts, int* location, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "STUDENT " << i + 1 << "------------------\n";
		cout << "NUMBER EATEN: ";
		cin >> numDonuts[i];
		while((numDonuts[i] < 0) || !cin)   //!cin checks to see if cin "threw" a bad flag
		{
			cin.clear(); //this clears all bad flags that were thrown from the last read
			cin.ignore(numeric_limits<streamsize>::max(),'\n');  //clear the keyboard buffer
			cout << "Invalid input.  Please enter a positive number.\n";
			cout << "NUMBER EATEN: ";
			cin >> numDonuts[i];
		}
		cout << endl;
		
		cout << "FAVORITE PLACE (1=Dunkin, 2=Ralphs, 3=Bigos, 4=KrispyKreme, 5=Other): ";
		cin >> location[i];
		while((location[i] < 1 || location[i] > 5) || !cin)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Invalid input.  Please enter a number between 1 and 5.\n";
			cout << "FAVORITE PLACE (1=Dunkin, 2=Ralphs, 3=Bigos, 4=KrispyKreme, 5=Other): ";
			cin >> location[i];
		}
		cout << endl;
		
		cout << "FAVORTIE TYPE\n";
		cout << "(1=glazed, 2=blueberry, 3=chocolate, 4=holes, 5=powdered, 6=filled): ";
		cin >> typeDonuts[i];
		while((typeDonuts[i] < 1 || typeDonuts[i] > 6) || !cin)
		{
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Invalid input.  Please enter a number between 1 and 6.\n";
			cout << "(1=glazed, 2=blueberry, 3=chocolate, 4=holes, 5=powdered, 6=filled): ";
			cin >> typeDonuts[i];
		}		
		cout << endl;
	}
}