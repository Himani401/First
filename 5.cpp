#include <iostream>
using namespace std;
int main() {
   int *p2;
   int *p1;
   p2 = (int *)300;
   p1 = (int *)200;
   if(p1>p2) {
      cout<<"P1 is greater than p2";
   } else {
      cout<<"P2 is greater than p1";
   }
   return(0);
}
