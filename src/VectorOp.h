/*
 * VectorOp.h
 *
 *  Created on: May 24, 2014
 *      Author: hrushi
 */

#ifndef VECTOROP_H_
#define VECTOROP_H_

#include "Includes.h"

template<typename T>
class VectorOp
{
private:


protected:




public:
	VectorOp(){};
	virtual ~VectorOp(){};
	static vector<T> GetRandom(UINT iNum);

};

/*******************************************************************
 * Function Name: operator<<
 * Return Type 	: std::ostream
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Prints the vector
 * Arguments	: std::ostream& out, const vector<T>& V
 *******************************************************************/
template<typename T>
std::ostream& operator<<( std::ostream& out, const vector<T>& vec)
{
	typename vector<T>::const_iterator itr;


	std::stringstream ss;

	for(itr = vec.begin(); itr != vec.end(); itr++ )
	{
		ss << (*itr);

		if( ss.str().length() > 100 ) //Length of string greater than 100 characters then hit enter
		{
			out << ss.str();
			out << endl;
			ss.str("");
		}
		else
		{
			ss << " ";
		}
	}

	out << ss.str();

	return out;
}


/*******************************************************************
 * Function Name: GetRandom
 * Return Type 	: vector<T>
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Generates Random n numbers from 0 to n-1
 * Arguments	: UINT iNums
 *******************************************************************/
template<typename T>
vector<T> VectorOp<T>::GetRandom( UINT iNum)
{
	vector<T> RandomList;
	srand (time(NULL));

	for(UINT i = 0; i < iNum; i++ )
	{
		int iRandom = rand() % iNum;
		RandomList.push_back(iRandom);
	}

	return RandomList;

}

#endif /* VECTOROP_H_ */
