#include <gtest/gtest.h>
#include "../src/activities/indoorActivity.h"

bool getAtHome();
void setAtHome(bool h);

/*Tests for Constructor and Getters*/

TEST(IndoorActivityTestSuite, emptyLocation)
{
    IndoorActivity a = IndoorActivity();
    EXPECT_EQ(a.getAtHome(), false);
}

TEST(IndoorActivityTestSuite, simpleLocation)
{
    IndoorActivity a = IndoorActivity("simple Activity", FULLDAY, true);
    EXPECT_EQ(a.getAtHome(), true);
}

/*Tests for Getter and Setter*/

TEST(IndoorActivityTestSuite, emptyLocationChange)
{
    IndoorActivity a = IndoorActivity();
    a.setAtHome(true);
    EXPECT_EQ(a.getAtHome(), true);
}

TEST(IndoorActivityTestSuite, simpleLocationChange)
{
    IndoorActivity a = IndoorActivity("simple Activity", MEDIUM, true);
    a.setAtHome(false);
    EXPECT_EQ(a.getAtHome(), false);
}