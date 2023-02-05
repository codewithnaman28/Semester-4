#include <iostream>
using namespace std;

int main() {
  int num[10];
  for (int i : num)
  {
    cin >> num[i];
  }
  for (int i : num ) 
  {
   cout << i << endl;
  }
  return 0;
} 