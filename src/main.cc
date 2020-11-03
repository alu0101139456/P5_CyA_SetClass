#include <iostream>
#include "set.h"

int main() {
    
  
  Set set;

  set.Add(8);
  set.Add(3);
  set.Add(13);
  set.print();

  std::string aux = set.toString();

  std::cout << aux;
  



}