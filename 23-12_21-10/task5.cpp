#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string inputString;
  string word;
  stringstream ss;
  string resultString = "";

  getline(cin, inputString);
  ss.str(inputString);
  while ((ss >> word) {
    if (word.length() <= 3) {
      resultString += word + " ";
    }
  }
  cout << resultString;
}
