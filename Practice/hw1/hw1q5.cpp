#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void recursion(string in, int n, string a)
{
  if (n == 0)
  {
     cout << a << endl;
  }
  else
  {
    for (unsigned int i = 0; i < in.length(); i++)
    {
	     recursion(in, n-1, a + in[i]);
    }
  }
}

int main()
{
  string input; int number;
  cout << "Enter input: ";
  cin >> input;
  cout << "Enter number: ";
  cin >> number;

  recursion(input, number, "");
}
