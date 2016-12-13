//
//  Player_UnitTest.cpp
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

// Tests the getName method
TEST_F(PlayerTest, GetName) {
    EXPECT_EQ("Name", player->getName());
}
