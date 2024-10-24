#include <iostream>
#include <vector>
#include <map>

struct pessoa { 
 std::string nome;
 int idade;
};
class Vehicle{ 
 public:
  int tipo;
  std::string name;
};
int main() {
 
 int num{10};
 std::string name{"bruno"};
 std::vector<int>valores{1,2,3,4,5};
 std::map<std::string,std::string> capitais{{"SP","BL"}};

 pessoa p1{"bruno",38};
 pessoa p2{"nicolas",15};

 Vehicle v1 {1,"camaro"};

 for (std::vector<int>:: iterator it =valores.begin(); it!=valores.end();it++) {
 std::cout << *it << '\n';
 }
 return 0;
}