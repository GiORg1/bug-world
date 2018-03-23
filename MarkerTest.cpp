#include "MarkerTest.h"
#include "../Marker.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MarkerTest);

void MarkerTest::testSetMarker() {
    Marker testMarker;
    tmark mark1, mark2, mark3, mark4;
    tcolor col1, col2, col3;
    mark1.mark = 1;
    mark2.mark = 3;
    mark3.mark = -5;
    mark4.mark = 5;
    col1.color = 0;
    col2.color = 1;
    col3.color = 2;
    
    CPPUNIT_ASSERT_NO_THROW(testMarker.set_marker(mark1,col1));
    CPPUNIT_ASSERT_NO_THROW(testMarker.set_marker(mark2, col2));
    CPPUNIT_ASSERT_THROW(testMarker.set_marker(mark1, col3), std::runtime_error);
    CPPUNIT_ASSERT_THROW(testMarker.set_marker(mark3, col2), std::runtime_error);
    CPPUNIT_ASSERT_THROW(testMarker.set_marker(mark4, col3), std::runtime_error);    
}

void MarkerTest::testCheckMarker() {
    Marker testMarker;
    tmark mark5;
    tcolor col;
    
    mark5.mark = 2;
    col.color = 0;
    testMarker.set_marker(mark5, col);
    
    CPPUNIT_ASSERT(testMarker.check_marker(mark5, col) == true);
    mark5.mark = 4;
    col.color = 1;
    CPPUNIT_ASSERT(testMarker.check_marker(mark5, col) == false);
}

void MarkerTest::testCheckOtherMarker(){
    Marker testMarker;
    tmark mark6;
    tcolor col;
    
    mark6.mark = 3;
    col.color = 0;
    testMarker.set_marker(mark6, col);
    
    CPPUNIT_ASSERT(testMarker.check_other_marker(col) == false);
    
    col.color = 1;
    
    CPPUNIT_ASSERT(testMarker.check_other_marker(col) == true);
}

void MarkerTest::testClearMarker(){
    Marker testMarker;
    tmark mark7;
    tcolor col;
    mark7.mark = 3;
    col.color = 0;
    
    testMarker.set_marker(mark7, col);
    testMarker.clear_marker(mark7, col);
    CPPUNIT_ASSERT(testMarker.check_marker(mark7,col) == false);
    CPPUNIT_ASSERT(testMarker.check_other_marker(col) == false);
}
