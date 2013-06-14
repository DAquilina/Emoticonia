#ifndef UTIL
#define UTIL

class Scene;
class Action;
class PointOfInterest;

class Util
{
  private:
    
  public:
    static bool within (PointOfInterest* POI, int xPos, int yPos);
    static bool within (PointOfInterest& POI, int xPos, int yPos);
};

static bool Util::within (PointOfInterest* POI, int xPos, int yPos)
{
  return (xPos >= POI->x1 () &&
          xPos <= POI->x2 () &&
          yPos >= POI->y1 () &&
          yPos <= POI->y2 ());
}

static bool Util::within (PointOfInterest& POI, int xPos, int yPos)
{
  return (xPos >= POI.x1 () &&
          xPos <= POI.x2 () &&
          yPos >= POI.y1 () &&
          yPos <= POI.y2 ());
}

#endif
