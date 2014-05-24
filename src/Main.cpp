//============================================================================
// Name        : TweekVector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "Includes.h"

int help()
{
	cerr << "Insufficient arguments" << endl;
	cerr << "Use following format " << endl;
	cerr << "arg1: Number of elements in a vector " << endl;
	cerr << "arg2: Clip percentage " << endl;
	cerr << "Example: ./TweekVector 100 0.1" << endl;

	return EXIT_SUCCESS;
}


int main(int argc, char* argv[])
{

	if(argc < 3)
	{
		help();
		throw ERR_INVALID_ARGS;
	}


	try
	{
		UINT iNumElems = boost::lexical_cast<UINT>(argv[1]);
		cout << iNumElems << endl;

		double ClipPercent = boost::lexical_cast<double>(argv[2]);
		cout << "Clip Percentage: " << ClipPercent << endl;
	}
	catch(const boost::exception& expt )
	{
		cerr << boost::diagnostic_information(expt);
		cerr << "Possible Solution " << endl;
		help();
		throw ERR_INVALID_ARGS;
	}



	return EXIT_SUCCESS;
}
