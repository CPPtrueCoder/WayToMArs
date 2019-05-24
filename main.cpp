#include <iostream>
#include "integrator.h"
#include "planets.h"
#include "prototypefactory.h"
using namespace std;

int main()
{
  PrototypeFactory planets_creator;
  vector <std::unique_ptr <TObject>> a;
  a.push_back(planets_creator.createEath());
  Integrator(a);
}
