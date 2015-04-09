/*
 * Credentials.hpp
 *
 *  Created on: 31 jan. 2015
 *      Author: MarcelS
 */

#ifndef INCLUDE_CREDENTIALS_HPP_
#define INCLUDE_CREDENTIALS_HPP_

using namespace std;

class Credentials
{
public:
	string m_Name;
	int m_Age;

	bool is_valid() { return true; };
};


#endif /* INCLUDE_CREDENTIALS_HPP_ */
