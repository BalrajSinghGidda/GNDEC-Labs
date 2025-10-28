#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
  ofstream outfile("overloading.cpp");
  if (outfile.is_open()) {
    outfile << "This is a cpp file." << endl;

    outfile.close();

    cout << "Cpp file saved!" << endl;
  }
  else {
    cout << "error" << endl;
  }
  return 0;
}
