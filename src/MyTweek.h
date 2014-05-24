/*
 * MyTweek.h
 *
 *  Created on: May 24, 2014
 *      Author: hrushi
 */

#ifndef MYTWEEK_H_
#define MYTWEEK_H_

#include "Includes.h"
#include "VectorOp.h"

class MyTweek
{
private:

	/**************************************************************
	 *           Private Member Variables
	 **************************************************************/

	/**************************************************************
	 *           Private Functions
	 **************************************************************/

protected:


public:
	MyTweek();
	const vector<double> ClippedMean(const vector<double>& vals, double Clip) const;
	virtual ~MyTweek();
};

#endif /* MYTWEEK_H_ */
