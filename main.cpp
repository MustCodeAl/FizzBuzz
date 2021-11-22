#include <iostream>

using namespace std;

void FizzBuzz(int num) {
  if (num <= 1) {
	cout << num << endl;
	return;
  }
  for (int i = 0; i < num + 1; ++i) {
	if (i % 3 == 0 && i % 5 == 0) {
	  cout << "FizzBuzz(" << i << ")" << endl;

	} else if (i % 3 == 0)
	  std::cout << "Fizz(" << i << ")" << endl;
	else if (i % 5 == 0) {
	  std::cout << "Buzz(" << i << ")" << endl;
	} else {
	  cout << i << endl;
	}
  }
  //cout << num << endl;
}

int main() {
  cout << "Enter a number 1 - 100: " << endl;
  short num_;
  cin >> num_;
  if (num_ > 100) {
	cout << "Invalid Number" << endl;
	exit(EXIT_FAILURE);

  }
  FizzBuzz(num_);
  //Test("vi");
  return 0;
}
