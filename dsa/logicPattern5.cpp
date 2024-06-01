#include <iostream>

using namespace std;

int main()
{
  int height = 0;

  cout << "Height: ";
  cin >> height;

  for(; height > 0; height--) 
  {
    for(int i = height; i > 0; i--)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
}
