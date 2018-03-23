#ifndef MARKERTEST_H
#define MARKERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class MarkerTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MarkerTest);

    CPPUNIT_TEST(testSetMarker);
    CPPUNIT_TEST(testClearMarker);
    CPPUNIT_TEST(testCheckMarker);
    CPPUNIT_TEST(testCheckOtherMarker);

    CPPUNIT_TEST_SUITE_END();

public:
    MarkerTest(){};
    virtual ~MarkerTest(){};
    void setUp(){};
    void tearDown(){};

private:
    void testSetMarker();
    void testClearMarker();
    void testCheckMarker();
    void testCheckOtherMarker();
};

#endif /* MARKERTESTH_H */
