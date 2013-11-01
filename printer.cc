// Printer Impl

#include <iostream>
#include "printer.h"
#include "common/base/flags.h"

DEFINE_string(my_lines, "user given lines", "Custom lines to print");
DEFINE_bool(use_my_lines, false, "Should we use user given lines");


using namespace std;

namespace printer {

  void Printer::PrintMyLines() {
    cout << "My Lines implementation, yay!" << endl;

    if (FLAGS_use_my_lines)
      cout << FLAGS_my_lines << endl;
  }
} // namespace printer
