//
//  Event.cpp
//  
//
//  Created by Martin Hung on 12/12/16.
//
//

#include "Event.hpp"

#define FIRST 1
#define SECOND 2
#define THIRD 3
#define FOURTH 4

Event::Event(std::string name) {
    this->name = name;
}

Event::~Event() {}

std::string Event::getName() {
    return this->name;
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

Player* findPlayer(std::string name) {
    Player* found = 0;
    auto itr = players.begin();
    while( itr != players.end() ) {
        found = *itr;
        if( found->name == name ) {
            return found;
        }
        itr++;
    }
    return 0;
}

bool Event::seedPlayer( int seed, std::string name ) {
    if( seed == FIRST ) {
        first_seed = findPlayer( name );
        return true;
    }
    else if( seed == SECOND ) {
        second_seed = findPlayer( name );
        return true;
    }
    else if( seed == THIRD ) {
        thrid_seed = findPlayer( name );
        return true;
    }
    else if( seed == FOURTH ) {
        fourth_seed = findPlayer( name );
        return true;
    }
    return false;
}

Player* Event::getSeed( int seed ) {
    if( seed == FIRST ) {
        return first_seed;
    }
    else if( seed == SECOND ) {
        return second_seed;
    }
    else if( seed == THIRD ) {
        return thrid_seed;
    }
    else if( seed == FOURTH ) {
        return fourth_seed;
    }
    return 0;
}
