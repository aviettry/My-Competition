//
//  Player.cpp
//  
//
//  Created by Martin Hung on 12/12/16.
//
//

/**
 * Filename: Player.cpp
 * Authors: Ali Viettry, Martin Hung
 * Description: 
 * Date Created: 2016-12-12, Martin Hung
 * Last Modified: 2016-12-14, Ali Viettry
 */

#include "Player.hpp"
#include "Validate.hpp"

Player::Player() {}

Player::Player(std::string email,
               std::string name,
               std::string gender,
               std::string size,
               std::string phone,
               std::unordered_map<Event*, Player*> events,
               std::string comments)
{
    this->email = email;
    this->name = name;
    this->gender = gender;
    this->size = size;
    this->phone = phone;
    this->events = events;
    this->comments = comments;
}

bool Player::setEmail(std::string newEmail) {
    if( !checkEmail( newEmail ) ) {
        return false;
    }
    std::string temp = email;
    email = newEmail;
    return true;
}

bool Player::setSize(std::string newSize) {
    if( !checkSize( newSize ) ) {
        return false;
    }
    std::string temp = size;
    size = newSize;
    return true;
}

bool Player::setPhoneNumber(std::string newPhone) {
    if( !checkPhoneNumber( newPhone ) ) {
        return false;
    }
    std::string temp = phone;
    phone = newPhone;
    return true;
}


bool Player::addEvent(Event* newEvent) {
    /* TODO: Write this function some point in time.
    if( !checkEvent( newEvent ) ) {
        return false;
    }
    */
    events[newEvent] = nullptr;
    return true;
}

bool Player::addEvent(Event* newEvent, Player* newPartner) {
    /* TODO: Write this function some point in time.
    if( !checkEvent( newEvent ) ) {
        return false;
    }
    */
    Player* temp = events[newEvent];
    events[newEvent] = newPartner;
    return true;
}


bool Player::removeEvent(Event* oldEvent) {
    return (bool) events.erase(oldEvent);
}

std::string Player::getName() { return name; }
std::string Player::getEmail() { return email; }
std::string Player::getSize() { return size; }
std::string Player::getPhoneNumber() { return phone; }
std::string Player::getComments() { return comments; }
std::string Player::getNumEvents() { return events.size(); }
