#include <iostream>

using namespace std;

int main()
{
  int height = 0;

  cout << "Height: ";
  cin >> height;

  for(; height > 0; height--)
  {
    for(int i = 1; i <= height; i++)
    {
      cout << i;
    }
    cout << "\n";
  }
  return 0;
}
