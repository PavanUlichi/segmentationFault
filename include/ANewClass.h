#ifndef _C6056_ANEWCLASS_H_
#define _C6056_ANEWCLASS_H_

#include "ABaseClass.h"

/*
 * Implement a version which can accept new 64-bit type values,
 * but remains backward compatible!
 */

class ANewClass : public ABaseClass {
protected:
  char nbuf[24];
  public:
    ANewClass(unsigned long long input);
    void show_data(void);
    char *get_buf(void);
};

#endif /* _C6056_ANEWCLASS_H_ */

