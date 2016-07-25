#include <cstdlib>
#include <iostream>
#include <string>

static volatile int Sink;

void checkString(std::string s) {
  if (s.size() < 3)
    return;

  if (s[0] == 'H') {
    Sink = 1;
    if (s[1] == 'i') {
      Sink = 2;
      if (s[2] == '!') {
        std::cout << "BINGO; Found the target, exiting\n";
        exit(0);
      }
    }
  }
}
