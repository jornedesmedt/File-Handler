#include "FileHandler.h"

void appendLine(string file, string s)
{
	ofstream out(file);
	if(!out)
	{

	}
	out << s << endl;
	out.close();
}
void append(ofstream out, string s) //Bug: Doesn't work. Do not use.
{
	out << s << endl;
}
string readFile(string file)
{
	string result = "";
	ifstream in(file);
	while(!in.eof())
	{
		string s;
		getline(in, s);
		result += s;
	}

	in.close();
	return result;
}