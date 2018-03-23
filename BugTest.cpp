#include "BugTest.h"
#include "../Bug.h"

CPPUNIT_TEST_SUITE_REGISTRATION(BugTest);

void BugTest::testConstructor() {
    tcolor col;
    col.color = 0;
    int progId = 1;
    int resting = 10;
 
    CPPUNIT_ASSERT_NO_THROW(Bug testBug(col, progId, resting));
    
    Bug testBug(col, progId, resting);
    CPPUNIT_ASSERT(testBug.get_color().color == col.color);
    CPPUNIT_ASSERT(testBug.get_progid() == progId);
}

void BugTest::testRest(){
    tcolor col;
    col.color = 1;
    int progId = 1;
    int resting = 10;
    
    Bug testBug(col, progId, resting);

    CPPUNIT_ASSERT(testBug.rested() == false);
    
    testBug.start_resting();
    
    CPPUNIT_ASSERT(testBug.rested() == true);
}

void BugTest::testGetters(){
    int progId = 1;
    int resting = 10;
    bool food = true;

    tcolor col;
    col.color = 1;
    
    tstate st;
    st.state = 2;

    tdirection dir;
    dir.direction = 5;

    tposition pos;
    pos.posX = 0;
    pos.posY = 0;

    Bug testBug(col, progId, resting);

    testBug.set_state(st);
    testBug.set_direction(dir);
    testBug.set_position(pos);
    testBug.set_food(food);

    CPPUNIT_ASSERT(testBug.get_progid() == 1);
    CPPUNIT_ASSERT(testBug.get_color().color == col.color);
    CPPUNIT_ASSERT(testBug.get_state().state == st.state);
    CPPUNIT_ASSERT(testBug.get_direction().direction == dir.direction);
    CPPUNIT_ASSERT(testBug.get_position().posX == pos.posX);
    CPPUNIT_ASSERT(testBug.get_position().posY == pos.posY);
    CPPUNIT_ASSERT(testBug.has_food() == true);
}

void BugTest::testSetters(){
    int progId = 1;
    int resting = 10;
    bool food = true;

    tstate st;
    tcolor col;
    tposition pos;
    tdirection dir;

    col.color = 0;

    Bug testBug(col, progId, resting);

    st.state = -1;

    CPPUNIT_ASSERT_THROW(testBug.set_state(st), std::runtime_error);

    st.state = 10000;
    CPPUNIT_ASSERT_THROW(testBug.set_state(st), std::runtime_error);

    dir.direction = -1;
    CPPUNIT_ASSERT_THROW(testBug.set_direction(dir), std::runtime_error);

    dir.direction = 6;

    CPPUNIT_ASSERT_THROW(testBug.set_direction(dir), std::runtime_error);
    
    st.state = 1;
    dir.direction = 1;
    pos.posX = 0;
    pos.posY = 0;
    
    testBug.set_state(st);
    testBug.set_direction(dir);
    testBug.set_position(pos);

    CPPUNIT_ASSERT(testBug.get_state().state == st.state);
    CPPUNIT_ASSERT(testBug.get_direction().direction == dir.direction);
    CPPUNIT_ASSERT(testBug.get_position().posX == pos.posX);
    CPPUNIT_ASSERT(testBug.get_position().posY == pos.posY);
}

void BugTest::testKill(){
    int progId = 1;
    int resting = 10;

    tcolor col;
    col.color = 1;

    Bug testBug(col, progId, resting);

    CPPUNIT_ASSERT(testBug.is_dead() == false);

    testBug.kill();

    CPPUNIT_ASSERT(testBug.is_dead() == true);

    CPPUNIT_ASSERT_THROW(testBug.kill(), std::runtime_error);
}




