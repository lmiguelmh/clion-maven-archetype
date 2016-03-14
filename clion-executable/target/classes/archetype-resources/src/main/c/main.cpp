/* 
It is recommend to use namespaces as physical directory levels (much like Java does)
*/

\#include <iostream>
using namespace std;

/* Log4z
\#include <log4z/log4z.h>
using namespace zsummer::log4z;
*/

int main() {
	
	/* 
	Log4z initialize
	ILog4zManager::getRef().setLoggerLevel(LOG4Z_MAIN_LOGGER_ID, LOG_LEVEL_TRACE);
    ILog4zManager::getRef().setLoggerPath(LOG4Z_MAIN_LOGGER_ID, ".");
    ILog4zManager::getRef().setLoggerName(LOG4Z_MAIN_LOGGER_ID, "${artifactId}-log"); //write file
    ILog4zManager::getRef().setLoggerFileLine(LOG4Z_MAIN_LOGGER_ID, false);
    ILog4zManager::getRef().setLoggerDisplay(LOG4Z_MAIN_LOGGER_ID, false); //display in stdout?
    ILog4zManager::getRef().start();
	*/
	
	cout << "${artifactId}: Hello world from Maven NAR Project and with CLion IDE!" << endl;
	cout << "${artifactId}: Now you should open the terminal set your compiler path and type: mvn test or mvn install" << endl;
    return 0;
}