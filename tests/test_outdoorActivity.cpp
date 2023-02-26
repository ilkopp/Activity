#include <gtest/gtest.h>
#include "../src/activities/outdoorActivity.h"


Season getSeason();
void setSeason(Season s);

/*Tests for Constructor and Getters*/

TEST(OutdoorActivityTestSuite, emptySeason)
{
    OutdoorActivity a = OutdoorActivity();
    EXPECT_EQ(a.getSeason(), ALL);
}

TEST(OutdoorActivityTestSuite, simpleSeason)
{
    OutdoorActivity a = OutdoorActivity("simple Activity", WEEKEND, FALL);
    EXPECT_EQ(a.getSeason(), FALL);
}

/*Tests for Getter and Setter*/

TEST(OutdoorActivityTestSuite, emptySeasonChange)
{
    OutdoorActivity a = OutdoorActivity();
    a.setSeason(SPRING);
    EXPECT_EQ(a.getSeason(), SPRING);
}

TEST(OutdoorActivityTestSuite, simpleSeasonChange)
{
    OutdoorActivity a = OutdoorActivity("simple Activity", SHORT, SUMMER);
    a.setSeason(WINTER);
    EXPECT_EQ(a.getSeason(), WINTER);
}
