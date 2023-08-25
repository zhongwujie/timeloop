#include <iostream>
#include "util/numeric.hpp"

int main(){
  CartesianCounter<4> mapping_id;
  auto base = mapping_id.Base();
  std::cout << "end_integer: " << mapping_id.EndInteger() << std::endl;
  for(auto i = 0; i < 4; i++) std::cout << "i: " << i << " base: " << base[i] << 
    std::endl;
  return 0;
}