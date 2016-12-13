//
//  event_unittest.cpp
//  
//
//  Created by Martin Hung on 12/13/16.
//
//

#include <stdio.h>

#include "../src/Event.hpp"
#include "gtest/gtest.h"

class EventTest : public testing::Test {
protected:
    Event* event;
    
    EventTest() {
        event = new Event("Name");
    }
    virtual ~EventTest() {
        delete event;
    }
};

TEST_F(EventTest, GetName) {
    EXPECT_EQ("Name", event->getName());
}

TEST_F(EventTest, GetNumPlayers) {
    EXPECT_EQ(0, event->getNumPlayers());
}
