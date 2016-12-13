//
//  Event.hpp
//  
//
//  Created by Martin Hung on 12/12/16.
//
//

#ifndef Event_hpp
#define Event_hpp

#include <string>

#include "Player.h"

class Event {
    
protected:
    std::string name;
    std::list<Player*> players;
    
public:
    Event(std::string name);
    ~Event();
    
    std::string getName();
    int getNumPlayers();
    
    bool addPlayer(Player* player);
    bool removePlayer(std::string name);
    bool findPlayer(std::string name);
};

#endif /* Event_hpp */
