/**
 * Filename: Player.h
 * Authors: Ali Viettry, Martin Hung
 * Description: This class will define nodes that store all information for a
 *              player who has registered for the competition.  
 * Date of Start: 2016-12-12
 * Latest Modification: 2016-12-12
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Player {
  private:
    /** Player's name */
    string name;

    /** Player's email address */
    string email;

    /** Player's phone number */
    int phone;

    /** Container storing the events the player is registered for */
    unordered_map<string, string> events;

  public:
    

};
