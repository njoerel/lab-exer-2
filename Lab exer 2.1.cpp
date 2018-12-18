#include <iostream>
using namespace std;
 
int max(int one, int two);
 
int main () {
  
   int x;
   int y;
   int high;
 
   cout << "Enter two integers: \n";
   cin >> x;
   cin >> y; 
 	
   high = max(x, y);
   cout << "Max value is : " << high << endl;
 
   return 0;
}
 
int max(int one, int two) {
 
   int result;
 
   if (one > two)
      result = one;
   else
      result = two;
 
   return result; 
}
