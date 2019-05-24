#ifndef PROTOTYPEFACTORY_H
#define PROTOTYPEFACTORY_H
#include "planets.h"

class PrototypeFactory{
public:
  PrototypeFactory() = default;
  std::unique_ptr <TObject>  createEath(){
    static Earth prototype;
    return prototype.clone();
  }
};

#endif // PROTOTYPEFACTORY_H
