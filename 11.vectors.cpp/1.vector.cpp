#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    if (i < vec.size() - 1) {
      cout << vec[i] << ", ";
    } else {
      cout << vec[i];
    }
  }
  cout << " ]" << endl;
}

int main() {
  vector<int> vec = {1, 2, 3, 4, 5};

  // size()
  cout << vec.size() << endl;

  // push_back()
  vec.push_back(6);
  print_vector(vec);

  // pop_back()
  vec.pop_back();
  print_vector(vec);

  // insert(index_as_iterator,element))
  // vec.begin() -> vec[0]
  vec.insert(vec.begin(), 0);
  print_vector(vec);

  // erase(index_as_iterator);
  vec.erase(vec.begin() + 2);
  print_vector(vec);

  // at(index)
  cout << vec.at(3) << endl;  // 4

  // clear()
  vec.clear();
  print_vector(vec);

  return 0;
}