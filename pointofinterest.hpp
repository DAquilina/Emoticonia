#ifndef POI
#define POI

//Includes
#include <vector>
#include "Action.hpp"

//Forward Declarations


class PointOfInterest
{
  private:
  //Members
    std::vector<Action> actions;
    int startX, startY, endX, endY;
    bool accessible;
    
  //Utilities
    
  
  public:
  //Getters
    bool isAccessible () {return accessible;}
    
    int x1 () { return startX; }
    int x2 () { return endX; }
    int y1 () { return startY; }
    int y2 () { return endY; }
    
    std::vector<Action> getActions () { return actions; }
    
  //Setters
    
  
  //Utilities
    
    
  //Constructors
    PointOfInterest ();
    PointOfInterest (vector<Action>* actionSet, int x1, int y1, int x2, int y2, bool _accesible = false);
    ~PointOfInterest ();
};

#endif
