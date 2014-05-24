/*
 * MyTweek.cpp
 *
 *  Created on: May 24, 2014
 *      Author: hrushi
 */

#include "MyTweek.h"

/*******************************************************************
 * Function Name: MyTweek
 * Return Type 	: None
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Default constructor for the MyTweek Class
 * Arguments	: UINT, double, double Clip
 *******************************************************************/
MyTweek::MyTweek()
{


}


/*******************************************************************
 * Function Name: ~MyTweek
 * Return Type 	: None
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Default Destructor
 * Arguments	:
 *******************************************************************/
MyTweek::~MyTweek()
{

}

/*******************************************************************
 * Function Name: Do
 * Return Type 	: const vector<double>
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Performs the tweek
 * Arguments	: const vector<double>& vals, double Clip
 *******************************************************************/
const vector<double> MyTweek::ClippedMean( const vector<double>& vals, double Clip) const
{
	vector<double> vTweek = vals;

	cout << "Unsorded: \t" << vTweek << endl;
	sort(vTweek.begin(), vTweek.end());

	cout << "Sorted: \t" << vTweek << endl;
	vTweek = VectorOp<double>::ClipTopBottom(vTweek, Clip);

	cout << "Clipped " << Clip << " : \t" <<  vTweek << endl;

	double vMean = VectorOp<double>::Mean(vTweek);
	cout << "Mean: " << vMean << endl;

	return vTweek;
}

