#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {1,2,3,4,5,6,7,8,9};
  int i = 0;
  while (arr[i] != 8 && arr.size() > ++i);
  cout << i << endl;
}
