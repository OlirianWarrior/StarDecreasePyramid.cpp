#include <iostream>
using namespace std;
void printLine(int);
void recPrintLine(int);

int main() {
  recPrintLine(5);
  cout << endl;
  return 0;
}
//print by recursion
void recPrintLine(int n)
{
  if (n > 0) {
    for(int i=0;i<n;i++) {
      cout << "*";
    }
    cout << endl;
    recPrintLine(n-1);
    for(int i=0;i<n;i++) {
      cout << "*";
    }
    cout << endl;
    // 2 more lines to complete task
  }
}
 

//print by iteration
void printLine(int size)
{
  //top half
  for(int j = size; j > 0;j--) {
     cout << endl;
     for(int i=0;i<j;i++) {
        cout << "*";
     }
  }
  //bottom half
  for(int j = 0; j <size;j++) {
     for(int i=0;i<j;i++) {
        cout << "*";
     }
     cout << endl;
  }
}
