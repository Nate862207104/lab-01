#include "c-echo.h"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3];
	test_val[0]= "./c-echo";
	test_val[1] = "hello";
	test_val[2] = "world ";
	EXPECT_EQ("hello world " , echo(3, test_val));

}
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest,IFinishedLab1) {
	char* test_val[5];
	test_val[0] = "./c-echo";
	test_val[1] = "I";
	test_val[2] = "finished";
	test_val[3] = "Lab";
	test_val[4] = "1! ";
	EXPECT_EQ("I finished Lab 1! ", echo(5,test_val));   
}
TEST(EchoTest, Blank) {
	char* test_val[4];
	test_val[0] = "./c-echo";
	test_val[1] = " ";
	test_val[2] = " ";
 	test_val[3] = "  ";
	EXPECT_EQ("      ", echo(4,test_val));
}
TEST(EchoTest, TestNo3){
	char* test_val[4];
	test_val[0] = "./c-echo";
	test_val[1] = "Test";
	test_val[2] = "Number";
	test_val[3] = "Three ";
	EXPECT_EQ("Test Number Three ", echo(4, test_val));
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc , argv);
	return RUN_ALL_TESTS();
}
