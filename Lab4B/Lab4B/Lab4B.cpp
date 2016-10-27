///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Lab4B.cpp
// Date: October 22, 2016
// Programmer: Naseer Muhammad             
//
// Description:
//    This program reads a string and outputs the number of times each
//		lowercase vowel appears in it. 
/////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void vowelCount(string wordInput, int& aCount, int& eCount, int& iCount, int& oCount, int& uCount)
{
	for(int i = 0; i < wordInput.length(); i++)
	{
		switch (wordInput[i])
		{
		case 'a':
			aCount++;
			break;
		case 'e':
			eCount++;
			break;
		case 'i':
			iCount++;
			break;
		case 'o':
			oCount++;
			break;
		case 'u':
			uCount++;
			break;
		default:
			break;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	string word;
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;

	cout<<"Enter a string for vowel analyzing: ";
	cin>>word;
	vowelCount(word, a, e, i , o, u);

	cout<<"Number of a's: "<<a<<endl;
	cout<<"Number of e’s: "<<e<<endl;
	cout<<"Number of i’s: "<<i<<endl;
	cout<<"Number of o’s: "<<o<<endl;
	cout<<"Number of u’s: "<<u<<endl;

	system("pause");
	return 0;
}

