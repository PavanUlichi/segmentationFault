#include "include/ANewClass.h"
#include <cstdio>
#include <stdint.h>

ANewClass::ANewClass(unsigned long long input) : ABaseClass((unsigned short)input) {
snprintf(this->get_buf(),sizeof(nbuf), "%llu", input);
}
char*
ANewClass::get_buf(void) {
  return &(this->nbuf[0]);
 }
void
ANewClass::show_data(void) {
  printf("%s\n", this->nbuf);
} 

