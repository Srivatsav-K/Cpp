#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vec) {
  cout << "[";
  for (auto it = vec.begin(); it != vec.end(); it++) {
    if (it == vec.end() - 1) {
      cout << *it;
    } else {
      cout << *it << ", ";
    }
  }
  cout << "]" << endl;
}

int main() {
  vector<int> vec = {1, 2, 3, 4, 5};

  vec.push_back(6);

  //? iterator
  /*
    vec.begin() returns an iterator pointing to the beginning of the vector
    `vector<int>::iterator it = vec.begin();`
    (We use scope resolution to tell iterator which data structure to traverse)
      or
    `auto it = vec.begin();`

    vec.end()->returns an iterator pointing just past the end (similar to
    vec.size())
  */
  for (auto it = vec.begin(); it != vec.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  //? insert(index as iterator,value)
  vec.insert(vec.begin() + 3, 3);
  printVector(vec);

  //? pop_back()
  vec.pop_back();
  printVector(vec);

  //? erase(index as iterator)
  vec.erase(vec.begin() + 3);
  printVector(vec);

  //? sort(begin,end)
  sort(vec.begin(), vec.end());
  printVector(vec);

  /*
    void sort(RandomIt first, RandomIt last, Compare comp);

    - RandomIt: A type representing a random-access iterator, typically obtained
    from the container (e.g., std::vector<int>::iterator).
    - first: An iterator pointing to the first element to be sorted.
    - last: An iterator pointing just beyond the last element to be sorted.
    - comp: A comparison function or lambda that defines the sorting order. It
    should return true if the first argument is considered less than the second.
  */
  sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
  printVector(vec);

  sort(vec.rbegin(), vec.rend());  // rbegin() -> from the end 1st ele
  printVector(vec);

  //? reverse(begin,end)
  reverse(vec.begin(), vec.end());
  printVector(vec);

  //? find(begin,end,element)
  /*
    returns an iterator pointing to where the element was found. If not
    found returns vec.end()
  */
  vec.push_back(50);
  printVector(vec);

  auto it2 = find(vec.begin(), vec.end(), 50);
  if (it2 != vec.end()) {
    cout << *it2
         << " found at index : "
         // distance between 2 iterators (start,end)
         << distance(vec.begin(), it2) << endl;
  } else {
    cout << "Element not found, element at vec.end() = " << *it2 << endl;
  }

  auto it3 = vec.end();
  cout << *it3 << endl;  // 6 same as vec.size() 6

  //? count(begin,end,ele) : no.of time an ele occured in a vector
  int n = count(vec.begin(), vec.end(), 5);
  cout << "5 is present " << n << " time/s in the vector" << endl;  // 1

  //? min_element(begin,end) returns iterator to the min ele
  auto it4 = min_element(vec.begin(), vec.end());
  cout << "Minimum element is : " << *it4
       << ". Found at index : " << distance(vec.begin(), it4) << endl;  // 1

  //? max_element(begin,end)
  cout << *max_element(vec.begin(), vec.end()) << endl;  // 50

  return 0;
}