/*
 * Includes.h
 *
 *  Created on: May 24, 2014
 *      Author: hrushi
 */

#ifndef INCLUDES_H_
#define INCLUDES_H_

/**************************************************************
 *           CPP Includes
 **************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <time.h>       /* For generating Random Numbers */
#include <ostream>
#include <numeric>      // std::accumulate

/**************************************************************
 *           Boost includes
 **************************************************************/
#include <boost/lexical_cast.hpp>
#include <boost/exception/diagnostic_information.hpp>

/**************************************************************
 *           Using from Std namespace
 **************************************************************/
using std::cout;
using std::endl;
using std::vector;
using std::cerr;

/**************************************************************
 *           Typedefs
 **************************************************************/
typedef unsigned int UINT;



/**************************************************************
 *           Constants
 **************************************************************/
const int ERR_INVALID_ARGS = -1;
const int ERR_INVALID_CLIP_SIZE = -2;

const double MAX_CLIP = 0.5;

#endif /* INCLUDES_H_ */
