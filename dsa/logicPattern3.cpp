#include <iostream>

using namespace std;

int main()
{
  int height = 0;

  cout << "Height: ";
  cin >> height;

  for(int i = 1; i <= height; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
}
