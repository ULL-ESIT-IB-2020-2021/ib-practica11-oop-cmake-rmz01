#include <iostream>
#include <cstdlib> 
#include "tools.h"    

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Faltan parámetros" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
