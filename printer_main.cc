// Binary to run our printer!

#include "common/base/init.h"
#include "printer.h"

int main(int argc, char** argv) {
  InitProgram(&argc, &argv);
  printer::Printer print;
  print.PrintMyLines();
  return 0;
}
