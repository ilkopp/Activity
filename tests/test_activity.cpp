#include <gtest/gtest.h>
#include <QString>
#include "../src/activities/activity.h"

QString getName();
Duration getDuration();
void setName(QString n);
void setDuration(Duration d);

/*Tests for Constructor and Getters*/

TEST(ActivityTestSuite, emptyName)
{
    Activity a = Activity();
    EXPECT_EQ(a.getName(), "");
}

TEST(ActivityTestSuite, emptyDuration)
{
    Activity a = Activity();
    EXPECT_EQ(a.getDuration(), UNKNOWN);
}

TEST(ActivityTestSuite, simpleName)
{
    Activity a = Activity("Test", SHORT);
    EXPECT_EQ(a.getName(), "Test");
}

TEST(ActivityTestSuite, simpleDuration)
{
    Activity a = Activity("Test", SHORT);
    EXPECT_EQ(a.getDuration(), SHORT);
}

/*Tests for Getter and Setter*/

TEST(ActivityTestSuite, emptyNameChange)
{
    Activity a = Activity();
    a.setName("Simple Activity");
    EXPECT_EQ(a.getName(), "Simple Activity");
}

TEST(ActivityTestSuite, emptyDurationChange)
{
    Activity a = Activity();
    a.setDuration(FULLDAY);
    EXPECT_EQ(a.getDuration(), FULLDAY);
}

TEST(ActivityTestSuite, simpleNameChange)
{
    Activity a = Activity("Test", SHORT);
    a.setName("New Activity Name");
    EXPECT_EQ(a.getName(), "New Activity Name");
}

TEST(ActivityTestSuite, simpleDurationChange)
{
    Activity a = Activity("Test", SHORT);
    a.setDuration(WEEKEND);
    EXPECT_EQ(a.getDuration(), WEEKEND);
}