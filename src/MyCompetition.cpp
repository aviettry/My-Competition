/**
 * Filename: MyCompetition.cpp
 * Authors: Ali Viettry, Martin Hung
 * Description: This is the main driver for the program.  It will take in two
 *              arguments, the file that it will read all the data records
 *              from and the file that it will write its new set of data records
 *              to.
 * Date Created: 2016-12-20, Ali Viettry
 * Last Modified: 2016-12-20, Ali Viettry
 */

#include "Tournament.hpp"

#define INPUT 1
#define OUTPUT 2

int 
main( int argc, char* argv[] ) {
  Tournament myTournament;
  myTournament( argv[1], argv[2] );
  return 0;
}
