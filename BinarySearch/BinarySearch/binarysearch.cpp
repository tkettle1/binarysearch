// Binary Search Demonstration

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX = 50; // MAX *must* be a positive integer!

					// void selection_sort(string[MAX] arrayOfStringsToBeSorted, int numberOfStrings)
void selection_sort(string[], int);
/*	selection_sort takes an array of strings of size MAX
and an integer representing the top of the portion
of the array that is in use; it is what we have called
a "packed array".  When called, it will sort the array
passed as the first parameter in ascending order.
*/
// public int minIndex(string[] arrayofstrings, int indexToStart, int indexToEnd);
int minIndex(string[], int, int);
/*
minIndex returns the *array index* of the least element
of the array beginning at (and including) the first integer
passed (second parameter) to (*not* including) the second
integer (third parameter).  Eg: (applied to the unsorted array)

cout<<minIndex( nameList, 15, top);

DETERMINE & RETURN THE *INDEX* OF THE WORD, NOT THE WORD ITSELF
would print 17 because that's the least value in the range.
It would *not* print "Charles Colbert"!
*/

int minIndex(string)

void swap(string&, string&);
/*	The swap routine receives two strings by reference
and exchanges their values.  Eg:

string a="Bill", b="Charlie";
swap(a,b);
a=="Charlie" && b=="Bill";
*/
void swap(string& x, string& y)
{
	string temp = x;
	x = y;
	y = temp;

}

bool binarySearch(string, string[], int);
/*	if the string passed as the first parameter is in the
packed array of strings passed as the second (of size
passed as the third), then returns true, otherwise false.

Precondition: the array must be sorted in ascending order.
*/

int main()
{
	string nameList[MAX];
	string inVal;
	int top = 0;

	ifstream inFile;
	inFile.open("names.txt");


	getline(inFile, inVal);

	while (top<MAX && !inFile.eof())
	{
		nameList[top] = inVal;
		top++;

		getline(inFile, inVal);
	}

	inFile.close();

	selection_sort(nameList, top);

	for (int i = 0; i<top; i++)
		cout << i << '\t' << nameList[i] << '\n';

	if (binarySearch("Alan Albertson", nameList, top))
		cout << "\nOK\n";
	else
		cout << "\nBad!\n";

	if (binarySearch("Zindy Zumwalt", nameList, top))
		cout << "OK\n";
	else
		cout << "Bad!\n";

	if (binarySearch("Pete Patterson", nameList, top))
		cout << "OK\n";
	else
		cout << "Bad!\n";

	if (binarySearch("Invalid Name", nameList, top))
		cout << "Bad!\n";
	else
		cout << "OK\n";

	return 0;
}

//***********************************************

void selection_sort(string s[], int t)
{
	/*
	for i=0 to t
	find the index(call it n) of the least value in s
	from i to t.

	swap s[i] with s[n]
	*/
	return;
}

//*******************************************

bool binarySearch(string inVal, string names[], int top)
{
	/*
	See Word flowchart in directory.
	*/
	return false;
}