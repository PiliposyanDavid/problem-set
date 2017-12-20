#include <iostream>
#include <set>
#include <string>

bool isUnique(std::string &str) {
    std::set<char> mySet;
    for(int i = 0; i < str.size(); ++i) {
        mySet.insert(str[i]);
    }
    if(mySet.size() == str.size()) {
        return 1;
     }
     return 0;
}

int main () {
    std::string str = "asd";
    std::cout<<isUnique(str);
}
