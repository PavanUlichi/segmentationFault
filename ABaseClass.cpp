#include "include/ABaseClass.h"
#include <cstdio>
#include <cstring>

ABaseClass::ABaseClass(unsigned short input) {
  sprintf(this->numbuf, "%hu", input);
}

void
ABaseClass::show_data(void) {
  printf("%s\n", this->numbuf);
}

char*
ABaseClass::get_buf(void) {
  return &(this->numbuf[0]);
}
