/** 
 * Filename: Validate.cpp
 * Authors: Ali Viettry, Martin Hung
 * Description: This file contains function that are used to validate email
 *              addresses, phone numbers, etc. Helper functions as they maybe
 *              called. These will be called during Player functions and
 *              anywhere else need be.
 * Date Created: 2016-12-14, Ali Viettry
 * Last Modified: 2016-12-14, Ali Viettry
 */

#include "Validate.hpp"
#include "MyCompetitionStrings.hpp"

#define NUM_SIZES 7
#define AT "@"
#define SIZES_POS "3211123"

bool checkEmail( std::string newEmail ) {
    std::size_t found = 0;
    std::string valid = VALID_EMAIL;
    for( int i = 0; i < newEmail.find(AT); i++ ) {
        found = valid.find( newEmail[i] );
        if( found == std::string::npos ) {
            return false;
        }
    }
    return true;
}

bool checkSize( std::string newSize ) {
    std::size_t found = 0;
    std::string valid = VALID_SIZE;
    std::string length = SIZES_POS;
    for( int i = 0; i < NUM_SIZES; i++ ) {
        std::string theSize = valid.substr( found, length[i] );
        if( newSize == theSize ) {
          return true;
        }
        found = valid.find( ",", found+1 );
        found++;
    }
    return false;
}

bool checkPhoneNumber( std::string newPhone ) {
    if( newPhone.size() != VALID_PHONE ) {
        return false;
    }
    return true;
}
