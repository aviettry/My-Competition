//
//  Player.cpp
//  
//
//  Created by Martin Hung on 12/12/16.
//
//

#include "Player.hpp"

Player::Player() {}

Player::Player(std::string email,
               std::string name,
               std::string gender,
               std::string size,
               std::string phone,
               std::unordered_map<std::string, std::string> events,
               std::string comments,
               int numEvents)
{
    this->email = email;
    this->name = name;
    this->gender = gender;
    this->size = size;
    this->phone = phone;
    this->events = events;
    this->comments = comments;
    this->numEvents = numEvents;
}


std::string Player::setEmail(std::string newEmail) {
    std::string temp = email;
    email = newEmail;
    return temp;
}

std::string Player::setSize(std::string newSize) {
    std::string temp = size;
    size = newSize;
    return temp;
}

std::string Player::setPhoneNumber(std::string newPhone) {
    std::string temp = phone;
    phone = newPhone;
    return temp;
}


void Player::setEvent(std::string newEvent) {
    events[newEvent];
}

std::string Player::setEvent(std::string newEvent, std::string newPartner) {
    std::string temp = events[newEvent];
    events[newEvent] = newPartner;
    return (temp == "") ? newPartner : temp;
    
}


bool Player::removeEvent(std::string oldEvent) {
    return (bool) events.erase(oldEvent);
}

std::string Player::getName() { return name; }
std::string Player::getEmail() { return email; }
std::string Player::getSize() { return size; }
std::string Player::getPhoneNumber() { return phone; }
std::string Player::getComments() { return comments; }
