#include <iostream>

using namespace std;

int main()
{
  int height = 0;
  cout << "pattern height: ";
  cin >> height;

  for(int i = 0; i < height; i++)
  {
    for(int j = 0; j < height; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
