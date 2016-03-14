/* 
It is recommend to use namespaces as physical directory levels (much like Java does)
*/

/* Google test
//http://stackoverflow.com/a/23879731/2692914
\#define GTEST_HAS_TR1_TUPLE 0
\#define GTEST_USE_OWN_TR1_TUPLE 1
\#include <gtest/gtest.h>
*/

\#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	
	/* Google test: initialize and run *all* the tests
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	*/
	
	cout << "${artifactId}-test: Hello world from Maven NAR Project and with CLion IDE!" << endl;
	cout << "${artifactId}-test: Now you should open the terminal set your compiler path and type: mvn test or mvn install" << endl;
    return 0;
}