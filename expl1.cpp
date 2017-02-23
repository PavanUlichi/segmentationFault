#include <cstdio>
#include <cstring>

#include "include/ANewClass.h"

int
main(int argc, char **argv) {
   ANewClass a = ANewClass(0x4040404040404040404040404040);

   a.show_data();
}
