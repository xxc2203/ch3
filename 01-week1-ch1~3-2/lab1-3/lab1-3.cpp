//lab1-3
#include <iostream>
#include <cstdlib>
using namespace std;

//int main(int argc, char *argv[]) {
int main(int argc, char** argv) {
  cout << "We have " << argc << " arguments" << endl;
  for (int i = 0; i < argc; ++i) 
    cout << "[" << i << "] " << argv[i] << endl;
  return 0;
}
