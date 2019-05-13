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

class TObject{

public :  TObject() = default ;
  virtual double Radius_vector_calculating() =0;
  virtual void ShowRadVec()=0;
  virtual void GetCoordinate()=0;
  virtual void GravityShow() = 0;
  virtual void Move() = 0 ;
  virtual   Parametrs_dep_coordinates Forces ()=0;
  virtual ~TObject()=default;
};

class Earth:public TObject {
public :
  Earth ();
  double Radius_vector_calculating() override;
  void ShowRadVec() override;
  void GetCoordinate() override;
  void GravityShow() override;
  Parametrs_dep_coordinates Forces () override;
  Parametrs_dep_coordinates currentCoordinates_;
  Parametrs_dep_coordinates gravityForces_;
  void Move () override ;
  ~Earth () override=default;
private:
double gravityEarth_ ;
double RadVectorUntSun;

};
#endif // PLANETS_H
