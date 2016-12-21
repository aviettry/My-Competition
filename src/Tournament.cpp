/**
 * Filename: Tournament.cpp
 * Authors: Ali Viettry, Martin Hung
 * Description: This class will contain the masterlist of all players and
 *              events. It will be able to read in the player information from a
 *              tsv file and also output the complete tournament information to
 *              a new tsv file.
 * Date Created: 2016-12-20, Ali Viettry
 * Last Modified: 2016-12-20, Ali Viettry
 */

#include <iostream>
#include <string>
#include <unordered_map>

#include "Player.hpp"
#include "Event.hpp"
#include "Tournament.hpp"

#define COLUMNS 14

bool readFromFile( char* in_filename, char* out_filenam ) {
	ifstream infile(in_filename);
  bool have_header = false;

  // keep reading lines until the end of file is reached
  while (infile) {
    std::string s;

    // get the next line
    if (!getline( infile, s )) break;

    if (!have_header) {
      // skip the header
      have_header = true;
      continue;
    }

    istringstream ss( s );
    vector <std::string> record;

    while (ss) {
      std::string next;

      // get the next string before hitting a tab character and put it in
      // 'next'
      if (!getline( ss, next, '\t' )) break;
      record.push_back( next );
    }

    // We have 14 columns, but need to use only 13
    if (record.size() != COLUMNS) {
      continue;
    }

    std::string email(record[1]);
    std::string name(record[2]+" "+record[3]);
    std::string gender(record[4]);
    std::string shirt_size(record[5]);
    std::string phone_number(record[6]);
    std::string first_event(record[7]);
    std::string first_partner(record[8]);
    std::string second_event(record[9]);
    std::string second_partner(record[10]);
    std::string third_event(record[11]);
    std::string third_partner(record[12]);
    std::string comments(record[13]);

    // Player info set, now we need to create all the players and add them to
    // our set<Player*>
    
    Player* newPlayer = new Player( 
        email, name, gender, shirt_size, phone_number, events, comments );
  }

  if (!infile.eof()) {
    cerr << "Failed to read " << in_filename << "!\n";
    return false;
  }
  infile.close();

  return true;
}
