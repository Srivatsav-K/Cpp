#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  // LEFT SHIFT of n by k -> shift all the bits of n towards left k times

  int n = 3;

  // Decimal to binary
  bitset<4> binary_of_n(n);    // syntax : bitset<no_of_bits_required> variable_name(value_in_dec)
  cout << binary_of_n << endl; // 0011

  // Binary to decimal
  cout << bitset<5>(00110).to_ulong() << endl; // 6 */

  /*
    0011 3
   0011   --> 0110 -> 6 left most 0 is discarded
  */

  int left_shift_by_1 = n << 1;
  cout << left_shift_by_1 << endl; // 6  --> 3 * (2)^1

  int left_shift_by_2 = n << 2;
  cout << left_shift_by_2 << endl; // 12 --> 3 * (2)^2

  int left_shift_by_3 = n << 3;
  cout << left_shift_by_3 << endl; // 24 --> 3 * (2)^3

  cout << (3 << 4) << endl; // 48
  //? (N << K) => N * (2)^K

  // RIGHT SHIFT of n by k -> shift all the bits of n towards right by k times
  int num = 6;
  cout << (num >> 1) << endl;

  /*
    110
     110 -> 0110 -> 011 (3) (discard right most bit)
  */

  // ? (N >> K) => floor(N/(k^2))

  return 0;
}
