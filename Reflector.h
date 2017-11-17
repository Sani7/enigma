#ifndef REFLECTOR_H
#define REFLECTOR_H

#include "SubComponent.h"

class Reflector: public SubComponent{
public:
  Reflector(const char* path);
  // Add virtual keyword
  void checkParameters(const int counter);
  void throwConfigError();
  virtual void throwNonNumericCharacterError();
  virtual void throwInvalidMappingError();
};

#endif
