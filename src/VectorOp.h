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
	static const vector<T> ClipTopBottom(const vector<T>& vals, double Clip);

};

/*******************************************************************
 * Function Name: ClipTopBottom
 * Return Type 	: const vector<T>
 * Created On	: May 24, 2014
 * Created By 	: hrushi
 * Comments		: Clip the top and bottom percentage in the vector
 * Arguments	: const vector<T>& vals, double Clip
 *******************************************************************/
template<typename T>
const vector<T> VectorOp<T>::ClipTopBottom( const vector<T>& vals, double Clip)
{
	if(Clip >= 0.5 )
	{
		throw ERR_INVALID_CLIP_SIZE;
	}

	vector<T> TrimmedVector;
	UINT ElemToClip = vals.size() * Clip;
	UINT ClipSize   = vals.size() - 2 * ClipSize;

	TrimmedVector.resize(ClipSize);

	std::copy(vals.begin() + ElemToClip, vals.begin() + ClipSize, TrimmedVector.begin());

	cout << vals;
	cout << endl;
	cout << TrimmedVector;
	cout << endl;

	return TrimmedVector;
}


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
