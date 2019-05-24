#include "integrator.h"
//Перегрузка оператора
// Разобраться с циклом
void Integrator(std::vector<std::unique_ptr<TObject> > &ji)
{
  const  double Tend = 365*86400;
  const double Tbeginning= 1;
  const double deltaT=86400;
  for (  double i =Tbeginning;  i<Tend/deltaT; ++i){
    for (auto &j : ji){
      Parametrs_dep_coordinates coordinates;
      Parametrs_dep_coordinates forces;
      coordinates=j->GetCoordinate();
      forces=j->Forces();
      coordinates.x+=forces.x*deltaT;
      coordinates.y+=forces.y*deltaT;
      j->SetCoordinates(coordinates);
      j->GetForces();
    }
  }

}
