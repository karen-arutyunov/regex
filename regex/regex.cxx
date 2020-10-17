#include <regex>
#include <cassert>
#include <iostream>
#include <exception>

using namespace std;

int
main (int argc, char* argv[])
try
{
  assert (argc == 4);

  string s (argv[1]);
  regex  re (argv[2]);
  string fmt (argv[3]);

  string r (regex_replace (s, re, fmt));
  cout << r << endl;
}
catch (const exception& e)
{
  cerr << e.what () << endl;
  return 1;
}
