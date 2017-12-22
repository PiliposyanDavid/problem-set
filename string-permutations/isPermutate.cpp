#include <iostream>
#include <cstring>

bool isPermutate(char*  st1,const char* st2){
  if(strstr(st1,st2) != NULL){
    return true;
  }
  return false;
}

int main() {
  std::cout << isPermutate("aasda","avsd");
}
