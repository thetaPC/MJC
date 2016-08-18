#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include "arrayListType.h"
  
template <class elemType> 
class unorderedArrayListType: public arrayListType<elemType>
{
public:
    void insertAt(int location, const elemType& insertItem);
    void insertEnd(const elemType& insertItem);
    void replaceAt(int location, const elemType& repItem);
    int seqSearch(const elemType& searchItem) const;
    void remove(const elemType& removeItem);

    unorderedArrayListType(int size = 100); //Constructor
	//unorderedArrayListType(const unorderedArrayListType<elemType>& otherList);
      

}; 

template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, const elemType& insertItem)
{
	//this took the longest. 
    //cout << "Inserting..." << endl;
	//for loop will go backwards and overwrite all the way until the location.
	//the remaining values will already be left in their appropiate slots
	if (location < 0 || location > length) //makes sure that the user's location is acceptable
		cout << "The location of the item to be removed "
		<< "is out of range." << endl;
	else
	{
		for (int i = length; i > location; i--)
			list[i] = list[i - 1];
		list[location] = insertItem;
		length++;
	}
} //end insertAt

template <class elemType>
void unorderedArrayListType<elemType>::insertEnd(const elemType& insertItem)
{
    if (length >= maxSize)  //the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
        list[length] = insertItem; //insert the item at the end
        length++; //increment the length
    }
} //end insertEnd

template <class elemType>
int unorderedArrayListType<elemType>::seqSearch(const elemType& searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < length; loc++)
        if (list[loc] == searchItem)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

template <class elemType>
void unorderedArrayListType<elemType>::remove(const elemType& removeItem)
{
    int loc;

    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The tem to be deleted is not in the list."
                 << endl;
    }
} //end remove

template <class elemType>
void unorderedArrayListType<elemType>::replaceAt(int location, const elemType& repItem)
{
    //cout << "Replacing..." << endl;
	if (location < 0 || location >= length) //makes sure that the user's location is valid
		cout << "The location of the item to be removed "
		<< "is out of range." << endl;
	else
	{
		insertAt(location, repItem); //pushes the new value into the array
		removeAt(location + 1); //this deletes the value that needs to be replaced from the array
	}
} //end replaceAt

template <class elemType>
unorderedArrayListType<elemType>::unorderedArrayListType(int size) : arrayListType<elemType>(size)
{
	//the constructor comes from the constructor in arrayListType
	//therefore, its the same exact one. 
}  //end constructor

/*
template <class elemType>
unorderedArrayListType<elemType>::unorderedArrayListType(const unorderedArrayListType<elemType>& otherList) : arrayListType<elemType>(otherList)
{

}
*/


#endif