// Printer Impl

#include <iostream>
#include "printer.h"
#include "common/base/flags.h"

DEFINE_string(my_lines, "user given lines", "Custom lines to print");


using namespace std;

namespace printer {

  void Printer::PrintMyLines() {
    cout << "My Lines implementation, yay!" << endl;

    cout << FLAGS_my_lines << endl;
  }
} // namespace printer
