#ifndef PLANETS_H
#define PLANETS_H
//overloading of operator =
// зазор на кратчайшее расстояние
#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
#include <memory>

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
  virtual Parametrs_dep_coordinates GetCoordinate()=0;
  virtual Parametrs_dep_coordinates GetForces() = 0;
  virtual void SetCoordinates(Parametrs_dep_coordinates &coordinates)=0;
  virtual void SetForces(Parametrs_dep_coordinates &forces)=0;
  //virtual void Move() = 0 ;
  virtual   Parametrs_dep_coordinates Forces ()=0;
  virtual ~TObject()=default;
  virtual std::unique_ptr <TObject> clone() = 0;
};

class Earth:public TObject {
  friend class PrototypeFactory;
private: Earth ();
public :

  double Radius_vector_calculating() override;
  void ShowRadVec() override;
  void SetCoordinates(Parametrs_dep_coordinates &coordinates) override;
  void SetForces(Parametrs_dep_coordinates &forces) override;
  Parametrs_dep_coordinates GetCoordinate() override;
  Parametrs_dep_coordinates GetForces() override;
  Parametrs_dep_coordinates Forces () override;
  Parametrs_dep_coordinates currentCoordinates_;
  Parametrs_dep_coordinates gravityForces_;
  std::unique_ptr <TObject> clone () override;
 // void Move () override ;
  ~Earth () override=default;
private:
double radiusVec;
double gravityEarth_ ;
double RadVectorUntSun;

};
#endif // PLANETS_H


