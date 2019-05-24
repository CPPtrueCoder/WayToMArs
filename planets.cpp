#include "planets.h"
Earth::Earth()
{
  currentCoordinates_.x=-25659934.567178;
  currentCoordinates_.y=133937639.222002;
  gravityEarth_=398600.4415;
  radiusVec=6140;
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

void Earth::SetCoordinates(Parametrs_dep_coordinates &coordinates)
{
  currentCoordinates_=coordinates;
}

void Earth::SetForces(Parametrs_dep_coordinates &forces)
{
  gravityForces_=forces;
}

Parametrs_dep_coordinates Earth::GetCoordinate()
{
  std::cout<<currentCoordinates_.x<<" ";
  std::cout<<currentCoordinates_.y<<std::endl;
  return currentCoordinates_;
}

Parametrs_dep_coordinates Earth::GetForces(){
  std::cout<<" Gravity :" <<gravityForces_.x<<" "<<gravityForces_.y<<std::endl;
return gravityForces_;}

Parametrs_dep_coordinates Earth::Forces()
{
  gravityForces_.x=(-gravityEarth_*currentCoordinates_.x)/(radiusVec*radiusVec*radiusVec);
  gravityForces_.y=(-gravityEarth_*currentCoordinates_.y)/(radiusVec*radiusVec*radiusVec);
  return gravityForces_;
}

std::unique_ptr<TObject> Earth::clone()
{
  static Earth prototype;
  return std::make_unique <Earth>(*this);
}

//void Earth::Move()
//{ for (int i= 1; i<10 ; ++i){

//    currentCoordinates_.x +=Forces().x*864000000;
//    currentCoordinates_.y+=Forces().y*864000000;

//  GravityShow();
//  }
//}


