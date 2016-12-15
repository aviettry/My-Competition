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
    std::unordered_map<Event*, Player*> events;
    
    PlayerTest() {
        player = new Player();
    }
    virtual ~PlayerTest() {
        delete player;
    }
};

TEST_F(PlayerTest, GetName) {
    EXPECT_NE("Name", player->getName());
    EXPECT_EQ("", player->getName());
}


TEST_F(PlayerTest, GetEmail) {
    EXPECT_NE("Email", player->getEmail());
    EXPECT_EQ("", player->getEmail());
}


TEST_F(PlayerTest, GetGender) {
    EXPECT_NE("Gender", player->getGender());
    EXPECT_EQ("", player->getGender());
}


TEST_F(PlayerTest, GetSize) {
    EXPECT_NE("Size", player->getSize());
    EXPECT_EQ("", player->getSize());
}


TEST_F(PlayerTest, GetPhoneNumber) {
    EXPECT_NE("Phone", player->getPhoneNumber());
    EXPECT_EQ("", player->getPhoneNumber());
}


TEST_F(PlayerTest, GetEvents) {
    
}


TEST_F(PlayerTest, GetPartners) {
    
}

TEST_F(PlayerTest, GetComments) {
    EXPECT_NE("Comments", player->getComments());
    EXPECT_EQ("", player->getComments());
}


TEST_F(PlayerTest, GetNumberOfEvents) {
    EXPECT_EQ(0, player->getNumEvents());
}


TEST_F(PlayerTest, GetMaxNumberOfEvents) {
    EXPECT_EQ(0, player->getMaxNumEvents());
}


TEST_F(PlayerTest, SetName) {
    EXPECT_TRUE(player->setName("Name"));
    EXPECT_EQ("Name", player->getName());
}


TEST_F(PlayerTest, SetEmail) {
    EXPECT_TRUE(player->setEmail("Email@email.com"));
    EXPECT_EQ("Email@email.com", player->getEmail());
}


TEST_F(PlayerTest, SetGender) {
    EXPECT_TRUE(player->setGender("Male"));
    EXPECT_EQ("Male", player->getGender());
    EXPECT_TRUE(player->setGender("Female"));
    EXPECT_EQ("Female", player->getGender());
    EXPECT_FALSE(player->setGender("Gender"));
    EXPECT_FALSE(player->setGender("~!@#$%^&*()_+"));
    EXPECT_EQ("Female", player->getGender());
}


TEST_F(PlayerTest, SetSize) {
    EXPECT_TRUE(player->setSize("XXS"));
    EXPECT_EQ("XXS", player->getSize());
    EXPECT_TRUE(player->setSize("XS"));
    EXPECT_TRUE(player->setSize("S"));
    EXPECT_TRUE(player->setSize("M"));
    EXPECT_TRUE(player->setSize("L"));
    EXPECT_TRUE(player->setSize("XL"));
    EXPECT_TRUE(player->setSize("XXL"));
    EXPECT_FALSE(player->setSize("Size"));
    EXPECT_EQ("XXL", player->getSize());
}


TEST_F(PlayerTest, SetPhoneNumber) {
    EXPECT_TRUE(player->setPhoneNumber("1234567890"));
    EXPECT_EQ("1234567890", player->getPhoneNumber());
    EXPECT_FALSE(player->setPhoneNumber("123456789"));
    EXPECT_FALSE(player->setPhoneNumber("123456789012345"));
    EXPECT_EQ("1234567890", player->getPhoneNumber());
    EXPECT_FALSE(player->setPhoneNumber("0123456789"));
    EXPECT_EQ("1234567890", player->getPhoneNumber());
}


TEST_F(PlayerTest, AddEvents) {
    
}


TEST_F(PlayerTest, RemoveEvents) {
    
}


TEST_F(PlayerTest, AddPartners) {
    
}

TEST_F(PlayerTest, RemovePartners) {
    
}

TEST_F(PlayerTest, SetComments) {
    EXPECT_TRUE(player->setComments("Comments"));
    EXPECT_EQ("Comments", player->getComments());
}


TEST_F(PlayerTest, SetMaxNumberOfEvents) {
    EXPECT_TRUE(player->setMaxNumEvents(5));
    EXPECT_EQ(5, player->getMaxNumEvents());
}
