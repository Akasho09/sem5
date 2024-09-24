// DO NOT NAME VARIABLES 'time'

#include <iostream>
#include <ctime>
using namespace std;

int main() {
  time_t current_time;

  current_time = time(NULL);

  cout << current_time;
  cout << " seconds has passed since 00:00:00 GMT, Jan 1, 1970";

  return 0;
}