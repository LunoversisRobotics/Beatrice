#include <iostream>
#include "./Versis/versis.hpp"

int
main( int   argc,
      char *argv)
{
  std::cout << "Hi mom!" << std::endl;
  Versis::Engine *engine = new Versis::Engine();
  delete engine;
  return 0;
}
