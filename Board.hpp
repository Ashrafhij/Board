#include <iostream>
#include <string>
#include <map>
#include "Direction.hpp"

namespace ariel
{
class Board { 
  public:
  std::map<unsigned int,std::map<unsigned int,char>> m;
  Board();
  void post(unsigned int i , unsigned int j ,Direction d, std::string ad);
  std::string read(unsigned int i , unsigned int j ,Direction d, unsigned int len);
  void show();
};
}