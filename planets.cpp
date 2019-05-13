#include "planets.h"
Earth::Earth()
{
  currentCoordinates_.x=-25659934.567178;
  currentCoordinates_.y=133937639.222002;
  gravityEarth_=398600.4415;
  RadVectorUntSun=Radius_vector_calculating();
}

double Earth::Radius_vector_calculating()
{
  return sqrt(pow(currentCoordinates_.x,2)+pow(currentCoordinates_.y,2) );
}

void Earth::ShowRadVec()
{
  std::cout<<RadVectorUntSun;
}

void Earth::GetCoordinate()
{
  std::cout<<currentCoordinates_.x<<std::endl;
  std::cout<<currentCoordinates_.y<<std::endl;
}

void Earth::GravityShow(){
  std::cout<<" Gravity :" <<gravityForces_.x<<" "<<gravityForces_.y<<std::endl;}


Parametrs_dep_coordinates Earth::Forces()
{
  gravityForces_.x=(-gravityEarth_*currentCoordinates_.x)/(RadVectorUntSun*RadVectorUntSun*RadVectorUntSun);
  gravityForces_.y=(-gravityEarth_*currentCoordinates_.y)/(RadVectorUntSun*RadVectorUntSun*RadVectorUntSun);
  return gravityForces_;
}

void Earth::Move()
{ for (int i= 1; i<10 ; ++i){

    currentCoordinates_.x +=Forces().x*864000000;
    currentCoordinates_.y+=Forces().y*864000000;

  GravityShow();
  }
}


