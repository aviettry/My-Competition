//
//  Event.hpp
//  
//
//  Created by Martin Hung on 12/12/16.
//
//
//TODO: Edit last modified field
/** 
 * Filename: Event.hpp
 * Authors: Ali Viettry, Martin Hung
 * Description: This is a container to store all player that compete in its
 *              event. It will keep track of the number of players and provide a
 *              ranking for which players are seeded.
 * Date Created: 2016-12-12, Martin Hung
 * Last Modified: 2016-12-16, Ali Viettry
 */

#ifndef Event_hpp
#define Event_hpp

#include <string>
#include <list>

#include "Player.hpp"

class Player;

class Event {
    
protected:
    std::string name;
    std::list<Player*> players;
    Player* first_seed;    
    Player* second_seed;    
    Player* third_seed;    
    Player* fourth_seed;;    
    
public:
    Event(std::string name);
    ~Event();
    
    std::string getName();
    int getNumPlayers();
    
    bool addPlayer(Player* player);
    bool removePlayer(std::string name);
    bool findPlayer(std::string name);
    bool seedPlayer( int seed, std::string name );
    Player* getSeed( int seed );
};

#endif /* Event_hpp */
