#include <iostream>
#include <iterator>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>ff

using namespace std;




int main() {
  string from, to;
  cin >> from >> to;
  ifstream is(from.c_str());
  ofstream os(to.c_str());

  istream_iterator<string> ii(is);
  istream_iterator<string> eos;
  ostream_iterator<string> oo(os,"\n");

  vector<string> b(ii,eos);
  sort(b.begin(), b.end());
  unique_copy(b.begin(), b.end(), oo);

}
