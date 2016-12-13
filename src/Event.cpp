//
//  Event.cpp
//  
//
//  Created by Martin Hung on 12/12/16.
//
//

#include "Event.hpp"

Event::Event(std::string name) {
    this.name = name;
    
}

Event::~Event();

std::string Event::getName() {
    return name;
}

int Event::getNumPlayers() {
    return players.size();
}

bool Event::addPlayer(Player* player) {
    players.push_back(player);
    return true;
}

bool Event::removePlayer(std::string name) {
    players.remove(findPlayer(name));
    return true;
}

Player* findPlayer(std::string name) {
    for (std::list<Player*>::iterator it = players.begin(); it != players.end(); ++it) {
        if (name == (*it)->getName()) return *it;
    }
}
