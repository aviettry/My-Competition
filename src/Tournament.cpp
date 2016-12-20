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

#include "Tournament.hpp"

bool readFromFile( char* in_filename, char* out_filenam,e ) {
	ifstream infile(in_filename);

  //Set the weighted bool
  weighted = use_weighted_edges;
  bool have_header = false;

  // keep reading lines until the end of file is reached
  while (infile) {
    string s;

    // get the next line
    if (!getline( infile, s )) break;

    if (!have_header) {
      // skip the header
      have_header = true;
      continue;
    }

    istringstream ss( s );
    vector <string> record;

    while (ss) {
      string next;

      // get the next string before hitting a tab character and put it in
      // 'next'
      if (!getline( ss, next, '\t' )) break;
      record.push_back( next );
    }

    if (record.size() != 3) {
      // we should have exactly 3 columns
      continue;
    }

    string actor_name(record[0]);
    string movie_title(record[1]);
	  int movie_year = stoi(record[2]);

    string movie(record[1] + "#@" + record[2] );

    // we have an actor/movie relationship, now what?

    edge( movie, actor_name );
  }

  if (!infile.eof()) {
    cerr << "Failed to read " << in_filename << "!\n";
    return false;
  }
  infile.close();

  return true;
}
