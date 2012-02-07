/**
*	@brief FileHandler is a collection of functions to make reading and writing files easier.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/** @brief appendLine
*	@details Adds a single line to a file.
*	@param string file: contains the filename
*	@param string s: contains the string that needs to be added
*/
void appendLine(string file, string s);

/** @brief append
*	@details Adds a line to a file, but doesn't close it.
*	@param ofstream out is the stream
*	@param s: is the string that neads to be added
*	@bug Doesn't work yet.
*/
void append(ofstream out, string s);

/** @brief readFile
*	@details reads all the lines of a file and puts them in a single string.
*	@param string file: name of the file
*/
string readFile(string file);