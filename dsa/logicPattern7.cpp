#include <iostream>

using namespace std;

int main()
{
  int height {0};
  cout << "Height: ";
  cin >> height;
  
  for(int i = 0; i < height; i++)
  {
    for(int j = 0; j < height - i - 1; j++)
    {
      cout << " ";
    }
    for(int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
