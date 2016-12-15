/** 
 * Filename: Validate.hpp
 * Authors: Ali Viettry, Martin Hung
 * Description: This file contains function that are used to validate email
 *              addresses, phone numbers, etc. Helper functions as they maybe
 *              called. These will be called during Player functions and
 *              anywhere else need be.
 * Date Created: 2016-12-14, Ali Viettry
 * Last Modified: 2016-12-14, Ali Viettry
 */

#include <string>

#ifndef VALIDATE_HPP
#define VALIDATE_HPP

bool checkEmail( std::string newEmail );
bool checkSize( std::string newSize );
bool checkPhoneNumber( std::string newPhone );

#endif /* VALIDATE_HPP */
