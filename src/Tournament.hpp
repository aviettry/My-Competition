/**
 * Filename: Tournament.hpp
 * Authors: Ali Viettry, Martin Hung
 * Description: This class will contain the masterlist of all players and
 *              events. It will be able to read in the player information from a
 *              tsv file and also output the complete tournament information to
 *              a new tsv file.
 * Date Created: 2016-12-20, Ali Viettry
 * Last Modified: 2016-12-20, Ali Viettry
 */

#include <set>

class Player;
class Event;

class Tournament {
  protected:
    char* outfile;
    set<Player*> myPlayers;
    set<Event*> myEvents;

    class MyCompare {
      bool operator() (const int& lhs, const int& rhs ) const {
        return (lhs->name) < (rhs->name);
      }
    };

  public:
    Tournament();
    bool readFromFile( const char* in_filename, const char* out_filename );
    bool writeToFile();
};
