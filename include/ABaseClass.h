#ifndef _C6056_ABASECLASS_H_
#define _C6056_ABASECLASS_H_

class ABaseClass {
 protected:
  char numbuf[6];

 public:
  ABaseClass(unsigned short);
  virtual void show_data(void);
  virtual char *get_buf(void);
};

#endif /* _C6056_ABASECLASS_H_ */
