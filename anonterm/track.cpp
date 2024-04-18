#include<iostream>
#include<string>
#include<list>
#include<chrono>
#include<ctime>
#include<vector>
#include <cstdlib>
#include<sstream>
using namespace std;
int main(){
vector<string> choices = {"history -c","sudo apt autoremove", "sudo apt clean", "sudo rm -rf /var/log/*"};
int count = 0;
while (count < choices.size()) {
  system(choices[count].str());
  count++;
}
return 0;
}
