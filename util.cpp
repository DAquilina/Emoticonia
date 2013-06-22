#ifndef UTIL
#define UTIL

//Includes
#include "scene.hpp"
#include "action.hpp"
#include "pointofinterest.hpp"

//Forward Declarations
//class Scene;
//class Action;
//class PointOfInterest;

class Util
{
  private:
    
  public:
    static bool within (PointOfInterest* test, int xPos, int yPos);
    static bool within (PointOfInterest& poi, int xPos, int yPos);
};

bool Util::within (PointOfInterest* poi, int xPos, int yPos)
{
  return (xPos >= (poi->x1) () &&
          xPos <= (poi->x2) () &&
          yPos >= (poi->y1) () &&
          yPos <= (poi->y2) ());
}

bool Util::within (PointOfInterest& poi, int xPos, int yPos)
{
  return (xPos >= poi.x1 () &&
          xPos <= poi.x2 () &&
          yPos >= poi.y1 () &&
          yPos <= poi.y2 ());
}

#endif
