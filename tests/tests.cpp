#define BOOST_TEST_MODULE Tests
#include <boost/test/unit_test.hpp>


#include "../headers/Engine.h"


struct EngineCreation {
    EngineCreation() { 
        BOOST_TEST_MESSAGE( "setup" );
        p = std::make_shared<Engine>();
    }
    ~EngineCreation() {
        BOOST_TEST_MESSAGE( "teardown" ); 
    }

    EnginePtr p;
};


BOOST_AUTO_TEST_SUITE(EngineSuite)

BOOST_AUTO_TEST_SUITE(MovingSuite)

BOOST_FIXTURE_TEST_CASE(SoldierOneStep, EngineCreation) {
    
}

BOOST_FIXTURE_TEST_CASE(SoldierTenSteps, EngineCreation) {
    BOOST_CHECK(false);
}

BOOST_FIXTURE_TEST_CASE(TenSoldiersTenSteps, EngineCreation) {
    
}


BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()