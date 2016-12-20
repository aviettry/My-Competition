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

void Player::setEmail(std::string newEmail) {
    std::string temp = email;
    email = newEmail;
    return;
}

void Player::setSize(std::string newSize) {
    std::string temp = size;
    size = newSize;
    return;
}

void Player::setPhoneNumber(std::string newPhone) {
    std::string temp = phone;
    phone = newPhone;
    return;
}


void Player::addEvent(Event* newEvent) {
    events[newEvent] = nullptr;
    return;
}

void Player::addEvent(Event* newEvent, Player* newPartner) {
    Player* temp = events[newEvent];
    events[newEvent] = newPartner;
    return;
}


void Player::removeEvent(Event* oldEvent) {
    events.erase(oldEvent);
    return;
}

std::string Player::getName() { return name; }
std::string Player::getEmail() { return email; }
std::string Player::getSize() { return size; }
std::string Player::getPhoneNumber() { return phone; }
std::string Player::getComments() { return comments; }
std::string Player::getNumEvents() { return events.size(); }
