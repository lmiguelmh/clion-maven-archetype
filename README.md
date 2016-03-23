# clion-maven-archetype
Simple C/C++ project archetype for CLion IDE and Maven NAR plugin.
This archetype will generate a simple and ready to be used project for the outstanding CLion IDE.  
It uses the Maven NAR plugin to take advantage of repositories of dependencies/libraries and a standard lifecycle model for projects (it is used as a de facto standar in Java). 
Now you could code in your favorite IDE (CLion obviously) and compile, test and install/deploy your C/C++ projects/libraries in a local or external repository. For now, CLion doesn't support the Maven NAR plugin, you will need to use the Terminal (ALT+F12) to send simple commands like "mvn compile".
Then, if you want to use your library in another project you only need to add the dependency in your `pom.xml` like this:

        <dependency>
            <groupId>org.opencv</groupId>
            <artifactId>opencv-core</artifactId>
            <version>2.4.10</version>
            <type>nar</type>
        </dependency>

For starters you need to:	
1. have Maven installed (and know the basics of it)
2. install the archetype (clion-executable-install.bat)
3. create a project using the archetype (clion-executable-new-project.bat)
4. use a command line and execute `mvn test` (your compiler must be in your PATH or you could configure it in `pom.xml`)


## Using dependencies/libraries
1. add your required <dependencies/> in `pom.xml`
2. execute `mvn compile` in the terminal (Maven will bring your dependencies headers and libraries)
3. add the `include_directories` and `target_link_libraries` in `CMakeLists.txt` and reload the project.
4. enjoy CLion!
You could find some library dependencies in https://github.com/lmiguelmh/ and https://github.com/maven-nar/nar-maven-plugin/wiki/Working-examples


## Making your own dependencies/libraries
If you want to build your own dependencies from compiled libraries follow this SO answer (don't forget to give +1):
http://stackoverflow.com/questions/34076669/add-a-static-library-for-the-link-phase-of-a-maven-nar-project

For system libraries you can add them in your source or use <linker/>:

		#pragma comment(lib, "user32.lib")
		#pragma comment(lib, "gdi32.lib")
		#pragma comment(lib, "advapi32.lib")
		...

Every dependency marked as a static or shared library could be used in other projects.
1. modify the <configuration/> on your `pom.xml` 
		<libraries>
			<!-- static library
			<library>
			  <type>static</type>
			</library>
			-->

			<!-- shared library
			<library>
			  <type>shared</type>
			</library>
			-->
		</libraries>
2. open the terminal and compile (`mvn compile`) and install your library on the repository (`mvn install`) 
3. open your project and add the dependency in your `pom.xml`, for example:

        <dependency>
            <groupId>lmiguelmh.commons</groupId>
            <artifactId>commons</artifactId>
            <version>1.0</version>
            <type>nar</type>
        </dependency>

		
## Configure your compiler 
For setting which toolset and sdk to use, you could override automatic detection with the next configuration in your `pom.xml`. In older versions this will fix some issues too http://stackoverflow.com/q/35903652/2692914 http://stackoverflow.com/q/35898892/2692914 

		<msvc>
			<version>11.0</version>
			<windowsSdkVersion>8.0</windowsSdkVersion>
		</msvc>

Finally, you should visit:
- the official Maven page: http://maven.apache.org
- the official Maven NAR plugin page: https://github.com/maven-nar/nar-maven-plugin/wiki
