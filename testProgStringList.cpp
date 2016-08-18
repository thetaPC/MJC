/*
	main.cpp

	Maria Loza
	CSCI 272 #5527
	Ch 13 #19 - 7th ed.
	Modified: 19 March 2016
			  20 March 2016
	Due date: 25 March 2016

*/

/*
	Problem (my understanding):
	The need for this problem is to be able to complete the currently existing code/class
	that the author provided during the class templates examples. The class template called
	arrayListType does not have
									isEmpty()
									isFull()
									listSize()
									maxListSize()
									clearList()
	defined. 
	The derived class, unorderedArrayType, also does not have
									insertAt()
									replaceAt()
	defined. Define them and test the functions out in the main.cpp

	Solution:
	Firstly, I'm going to have to read the code to fully understand it. I have to take this
	step by step and not feel overwhelmed by it. It should be pretty simple, fingers crossed
	since most of the functions have been completed and computing correctly.
	It did take me a bit to realize what maxListSize() meant.
	But as long as I fully understand what the length variable means then I should be able
	to use that for the first three. I'm wondering if the destructor could be useful for 
	clearList(). I'll have to look into destructors again. maxListSize() might take a bit.
	I'm not sure when the copy constructor can be used.

*/

#include <iostream>
#include <string>
#include "unorderedArrayListType.h"

using namespace std;
 
int main() 
{ 
    unorderedArrayListType<string> stringList(25);  //Line 1

    string str;                                     //Line 2
	int loc;

	cout << "If " << stringList.isEmpty() << " = 1 then the array is empty. \n\n";

    cout << "List 55: Enter 5 strings: ";            //Line 3

    for (int count = 0; count < 5; count++)         //Line 4
    {
        cin >> str;                                 //Line 5
        stringList.insertEnd(str);                  //Line 6
    }

    cout << endl;                                   //Line 7

    cout << "Line 65: stringList: ";                 //Line 8
    stringList.print();                             //Line 9
    cout << endl;                                   //Line 10

    cout << "Line 69: Enter the string to be " 
         << "deleted: ";                            //Line 11
    cin >> str;                                     //Line 12
    cout << endl;                                   //Line 13

    stringList.remove(str);                         //Line 14
    cout << "Line 75: After removing " << str
         << " stringList: ";                        //Line 15
    stringList.print();                             //Line 16
    cout << endl;                                   //Line 17
 
    cout << "Line 80: Enter the search item: ";     //Line 18

    cin >> str;                                     //Line 19
    cout << endl;                                   //Line 20

    if (stringList.seqSearch(str) != -1)            //Line 21
        cout << "Line 86: " << str 
             << " found in stringList. \n\n";    //Line 22
    else                                            //Line 23
        cout << "Line 89: " << str 
             << " is not in stringList. \n\n";   //Line 24

	cout << stringList.listSize() << "\n";
	cout << stringList.maxListSize() << "\n";
	cout << "If " << stringList.isEmpty() << " = 1 then the array is empty. \n";
	cout << "If " << stringList.isFull() << " = 1 then the array is full. \n\n";

	cout << "Line 97: Enter a string to add to the array: ";
	cin >> str;
	cout << "Line 99: Enter the location you wish to insert " << str << ": ";
	cin >> loc;
	stringList.insertAt(loc, str);

	cout << "Line 103: After inserting " << str
		<< " stringList: ";
	stringList.print();
	cout << "\n";

	cout << stringList.listSize() << "\n";
	cout << stringList.maxListSize() << "\n\n";

	cout << "Line 111: Enter a string to replace an existing string in the array: ";
	cin >> str;
	cout << "Line 113: Enter the location you wish to replace with " << str << ": ";
	cin >> loc;
	stringList.replaceAt(loc, str);
	cout << "Line 116: After replacing location " << loc << " for " << str
		<< " stringList: ";
	stringList.print();

	cout << "Line 120: Enter the location you wish to retrieve: ";
	cin >> loc;
	stringList.retrieveAt(loc, str);

	cout << "\n";
	cout << stringList.listSize() << "\n";
	cout << stringList.maxListSize() << "\n\n";

	stringList.clearList();
	cout << "Line 129: After clearing the array stringList: ";
	stringList.print();
	cout << "\n";
	cout << stringList.listSize() << "\n";
	cout << stringList.maxListSize() << "\n\n";
	cout << "If " << stringList.isEmpty() << " = 1 then the array is empty. \n\n";




    return 0;    
}

/*
	My notes:
	insertAt() took me the longest. I thought about using the copy constructor, but I just
	didn't know how to use it properly. It makes me a bit nervous since I didn't use the copy
	constructor to complete this assignment since the professor wouldn't have wasted his time 
	to create it if it wasn't neccessary. But I keep telling myself that there are a hundred
	ways to solve a problem. So my way might not be totally wrong.
	Templates are cool. I love how people have thought of this, that way we don't have to keep
	repeating classes/functions. 
	I finally managed to get insertAt() working and the rest was easy. I just had to think backwards
	and it made me realize that it doesn't always have to be forwards <- this makes sense to me.



	Useful links:
	http://www.codeproject.com/Articles/257589/An-Idiots-Guide-to-Cplusplus-Templates-Part

*/