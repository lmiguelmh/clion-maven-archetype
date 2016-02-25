@echo off
echo For groupId, artifactId you could use:
echo groupId: organization.projectname, organization.projectname.app, organization.projectname.lib
echo This groupId directories hierarchy should be created inside the project src/main and src/include and in their own namespaces(like Java packages) 
echo artifactId: projectname, projectname-app, projectname-lib
echo.

call mvn archetype:generate -DarchetypeGroupId=clion.archetype -DarchetypeArtifactId=clion-executable -DarchetypeVersion=1.0 

echo.
echo Now you should open the project using the CLion IDE and compile it (with CLion and then with Maven)
pause