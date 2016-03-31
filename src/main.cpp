// my 1st program in C++

#include "main.hpp"

int main()
{
	readFile("CMakeLists.txt");
	copyFile("CMakeLists.txt", "CMakeLists_copied.txt");
	writeFile("CMakeLists_written.txt", "set(ProjectName \"CPPTestProgram\" CACHE PATH \"Name of the Project\")");
	editFile("CMakeLists.txt", "CMakeLists_edited.txt", "set(ProjectName \"CPPTestProgram\" CACHE PATH \"Name of the Project\")", "set(ProjectName \"CPPTestProgram\" CACHE PATH \"Name of the Whatever\")", true);
}
