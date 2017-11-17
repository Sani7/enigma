#ifndef REFLECTOR_H
#define REFLECTOR_H

#include "SubComponent.h"

class Reflector: public SubComponent{
public:
  Reflector(const char* path);
  // Add virtual keyword
  virtual void throwInvalidMappingError();
};

#endif
