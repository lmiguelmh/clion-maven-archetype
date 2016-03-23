/* 
It is recommend to use namespaces as physical directory levels (much like Java does)
*/

/* Google test
//http://stackoverflow.com/a/23879731/2692914
\#define GTEST_HAS_TR1_TUPLE 0
\#define GTEST_USE_OWN_TR1_TUPLE 1
\#include <gtest/gtest.h>
*/

/* Log4z
\#include <log4z/log4z.h>
using namespace zsummer::log4z;
*/

\#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	
	/* Log4z: initialize logger
	ILog4zManager::getRef().setLoggerName(LOG4Z_MAIN_LOGGER_ID, "${artifactId}-test");
    ILog4zManager::getRef().setLoggerPath(LOG4Z_MAIN_LOGGER_ID, "./");
    ILog4zManager::getRef().setLoggerLevel(LOG4Z_MAIN_LOGGER_ID, LOG_LEVEL_TRACE);
    ILog4zManager::getRef().setLoggerFileLine(LOG4Z_MAIN_LOGGER_ID, true);
    ILog4zManager::getRef().setLoggerDisplay(LOG4Z_MAIN_LOGGER_ID, true);
    ILog4zManager::getRef().start();
	*/
	
	/* Google test: initialize and run *all* the tests
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	*/
			
	cout << "${artifactId}-test: Hello world from Maven NAR Project and with CLion IDE!" << endl;
	cout << "${artifactId}-test: Now you should open the terminal set your compiler path and type: mvn test or mvn install" << endl;
    return 0;
}