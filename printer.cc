// My printer implementation!
#include <iostream>
#include "printer.h"
#include "common/base/flags.h"

// These flag values can be specified at run time like:
// bin/printer_main --my_lines="something else!"
DEFINE_string(my_lines, "My lines are user controlled.",
              "User specified lines.");

namespace printer {

void Printer::PrintMyLines() {
  std::cout << FLAGS_my_lines << std::endl;
}

}  // namespace printer
