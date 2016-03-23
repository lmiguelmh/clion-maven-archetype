cmake_minimum_required(VERSION 3.3)
project(${artifactId})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#this project's include directories
include_directories("src/main/include")

#dependencies' include directories should be added here (as is pom.xml) (first you must mvn compile for target directory to be created)
#in one project I have opencv libraries in my pom.xml and thus should be here too (see the NAR projects for OpenCV binaries/Windows/VS12 in https://github.com/lmiguelmh)
#make sure you follow this answer to generate your own libraries http://stackoverflow.com/questions/34076669/add-a-static-library-for-the-link-phase-of-a-maven-nar-project
#opencv-core
#include_directories("target/nar/opencv-core-2.4.10-noarch/include")
#opencv-highgui
#include_directories("target/nar/opencv-highgui-2.4.10-noarch/include")
#opencv-imgproc
#include_directories("target/nar/opencv-imgproc-2.4.10-noarch/include")
#log4z - a really good logger
#include_directories("target/nar/log4z-3.0-noarch/include")
#commons - some commons functions 
#include_directories("target/nar/commons-1.0-noarch/include")
#gtest
#include_directories("target/test-nar/gtest-1.7.0-noarch/include")

#every file you add to the project should be added so CLion will recognize it
set(SOURCE_FILES src/main/include/main.h src/main/c/main.cpp)

add_executable(${artifactId} ${SOURCE_FILES})

add_executable(${artifactId}-test src/test/c/main-test.cpp)