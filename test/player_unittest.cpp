//
//  player_unittest.cpp
//  
//
//  Created by Martin Hung on 12/13/16.
//
//

#include <stdio.h>

#include "../src/Player.hpp"
#include "gtest/gtest.h"

class PlayerTest : public testing::Test {
protected:
    Player* player;
    std::unordered_map<std::string, std::string> events;
    int numEvents;
    
    PlayerTest() {
        player = new Player("Email", "Name", "Gender", "Size", "Phone", events, "Comments", numEvents);
    }
    virtual ~PlayerTest() {
        delete player;
    }
};


TEST_F(PlayerTest, GetName) {
    EXPECT_EQ("Name", player->getName());
}


TEST_F(PlayerTest, GetEmail) {
    EXPECT_EQ("Email", player->getEmail());
}


TEST_F(PlayerTest, GetSize) {
    EXPECT_EQ("Size", player->getSize());
}


TEST_F(PlayerTest, GetPhoneNumber) {
    EXPECT_EQ("Phone", player->getPhoneNumber());
}

TEST_F(PlayerTest, GetComments) {
    EXPECT_EQ("Comments", player->getComments());
}


TEST_F(PlayerTest, SetEmail) {
    EXPECT_EQ("Email", player->setEmail("New Email"));
    EXPECT_EQ("New Email", player->getEmail());
}


TEST_F(PlayerTest, SetSize) {
    EXPECT_EQ("Size", player->setSize("New Size"));
    EXPECT_EQ("New Size", player->getSize());
}


TEST_F(PlayerTest, SetPhoneNumber) {
    EXPECT_EQ("Phone", player->setPhoneNumber("New Phone"));
    EXPECT_EQ("New Phone", player->getPhoneNumber());
}


TEST_F(PlayerTest, SetEvent) {
    
}


TEST_F(PlayerTest, RemoveEvent) {
    
}
