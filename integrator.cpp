#include "integrator.h"
//Перегрузка оператора
// Разобраться с циклом
void Integrator(std::vector<Earth> &Earth)
{
  const  double Tend = 365*86400;
  const double Tbeginning= 1;
  const double deltaT=86400;
  for (  double i =Tbeginning;  i<Tend/deltaT; ++i){
    for (auto j : Earth){
      j.Forces();
      j.currentCoordinates_.x+=j.gravityForces_.x*deltaT;
      j.currentCoordinates_.y+=j.gravityForces_.y*deltaT;
      j.GravityShow();
    }
  }

}
