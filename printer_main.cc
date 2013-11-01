// Test Binary for Printer library

# include "printer.h"
# include "common/base/init.h"

using namespace printer;
int main(int argc, char** argv) {
  InitProgram(&argc, &argv); // Parse command line flags
  Printer printer;
  printer.PrintMyLines();
  return 0;
}
