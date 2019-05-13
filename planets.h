#ifndef PLANETS_H
#define PLANETS_H
//overloading of operator =
// зазор на кратчайшее расстояние
#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
// разобраться с наследованием
// Создать единицы трансляции для создания вектора
#include <iostream>
struct Parametrs_dep_coordinates {
  double x;
  double y;
} ;

const  double Tend = 365*86400;
const double Tbeginning= 1;
const double deltaT=86400;

class Earth {
public : Earth ();
  double Radius_vector_calculating();
  void ShowRadVec();
  void GetCoordinate();
  void GravityShow() {
  std::cout<<" Gravity :" <<gravityForces_.x<<" "<<gravityForces_.y<<std::endl;}
  Parametrs_dep_coordinates Forces () ;
  Parametrs_dep_coordinates currentCoordinates_;
  Parametrs_dep_coordinates gravityForces_;
  void Move ();
private:
double gravityEarth_ ;
double RadVectorUntSun;

};
#endif // PLANETS_H
