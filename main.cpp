// Hoppock, Zachary
// vectorSort.cpp
// November 21, 2020
// Sort the elements in a vector in ascending order
// Version #1
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  vector<double> values;
  values.push_back(10);
  values.push_back(14);
  values.push_back(28);
  values.push_back(2);
  values.push_back(9);
  cout << "Original vector:" << endl;
  for (int i = 0; i < values.size(); i++)
  {
    cout << values[i] << " ";
  }
  sort(values.begin(), values.end());
  cout << endl << "Sorted vector:" << endl;
  for (int i = 0; i < values.size(); i++)
  {
    cout << values[i] << " ";
  }
  return (0);
}