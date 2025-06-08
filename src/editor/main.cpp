#include "engine/engine.h"
#include "Version.h"
#include <iostream>

int main()
{
  std::cout << "Hello world example!" << std::endl;
  Say_Hello();
  std::cout << "MyEngine Version: " << MyEngine::MYENGINE_VERSION << std::endl;
  std::cin.get();

  return 0;
}
