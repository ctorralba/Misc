#include <iostream>
using namespace std;

int main ()
{
  char line [256];
  while (cin.getline(line, 256))
  {
    if (line[0] != '#')
    {
      cout << line << endl;
    }
  }
  return 0;
}
