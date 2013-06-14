#ifndef SCENE
#define SCENE

//Includes
#include <vector>
#include "PointOfInterest"

//Forward Declarations
class Action;

class Scene
{
  private:
  //Members
    std::vector<PointOfInterest> pointsOfInterest;
    std::vector<Action>          actions;
    
    std::string                  sceneName;
    
  //Utilties
    Action* getActions ();
  
  public:
  //Getters
    std::string Name () { return sceneName; }
  
  //Setters
  
  
  //Utilities
    Action* getActionsAt (int x, int y);
    
  //Constructors
    Scene ();
    ~Scene ();
};

#endif
