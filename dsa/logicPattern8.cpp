#include <iostream>

using namespace std;

int main()
{
  int height = 0;
  cout << "Height: ";
  cin >> height;

  for(int i = 0; i < height; i++)
  {
    for(int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for(int j = 0; j < 2 * height - (2 * i + 1); j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}
