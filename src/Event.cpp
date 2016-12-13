//
//  Event.cpp
//  
//
//  Created by Martin Hung on 12/12/16.
//
//

#include "Event.hpp"

Event::Event(std::string name) {
    this->name = name;
    
}

Event::~Event() {}

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
    return false;
}

Player* findPlayer(std::string name) {}
