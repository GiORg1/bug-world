#ifndef BUGTEST_H
#define BUGTEST_H

#include <cppunit/extensions/HelperMacros.h>

class BugTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(BugTest);

    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testRest);
    CPPUNIT_TEST(testGetters);
    CPPUNIT_TEST(testSetters);
    CPPUNIT_TEST(testKill);
    
    CPPUNIT_TEST_SUITE_END();

public:
    BugTest(){};
    virtual ~BugTest(){};
    void setUp(){};
    void tearDown(){};

private:
    void testConstructor();
    void testRest();
    void testGetters();
    void testSetters();
    void testKill();
};

#endif /* BUGTEST_H */

