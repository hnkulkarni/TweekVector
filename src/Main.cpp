//============================================================================
// Name        : TweekVector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "Includes.h"



/*******************************************************************
 * Function Name: help
 * Return Type 	: int
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Prints Help Text when invalid arguments
 * Arguments	:
 *******************************************************************/
int help()
{
	cerr << "Insufficient arguments" << endl;
	cerr << "Use following format " << endl;
	cerr << "arg1: Number of elements in a vector " << endl;
	cerr << "arg2: Clip percentage " << endl;
	cerr << "Example: ./TweekVector 100 0.1" << endl;

	return EXIT_SUCCESS;
}

/*******************************************************************
 * Function Name: SanitizeInput
 * Return Type 	: int
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Sanitizes the input: CHANGES ARGUMENTS
 * Arguments	: int argc, char *argv[], UINT numElements, double Trim
 *******************************************************************/
int SanitizeInput( int argc, char *argv[], UINT& numElements, double& Trim)
{

	if(argc < 3)
	{
		help();
		throw ERR_INVALID_ARGS;
	}


	try
	{
		numElements = boost::lexical_cast<UINT>(argv[1]);
		cout << numElements << endl;

		Trim = boost::lexical_cast<double>(argv[2]);
		cout << "Clip Percentage: " << Trim << endl;
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


int main(int argc, char* argv[])
{


	UINT iNumElements(0);
	double ClipPercent(0);

	SanitizeInput(argc, argv, iNumElements, ClipPercent);


	return EXIT_SUCCESS;
}
