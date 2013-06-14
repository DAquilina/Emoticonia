#include "pointofinterest.hpp"

PointOfInterest::PointOfInterest ()
{
  
}

PointOfInterest::~PointOfInterest ()
{
  
}

PointOfInterest::PointOfInterest (vector<Action>* actionSet, int x1, int y1, int x2, int y2, bool _accesible):
  actions(actionSet), startX(x1), startY(y1), endX(x2), endY(y2), accessible(_accessible)
{
  
}
