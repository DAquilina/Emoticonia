#ifndef WORLD
#define WORLD

//Includes
#include <map>
#include <string>

//Forward Declarations
class Scene;

class World
{
  private:
  //Members
    std::map<Scene, std::string> sceneList;
    
  //Utilities
    
  
  public:
  //Getters
    Scene& fetchScene (std::string title);
    Scene& fetchScene (Scene* scene) { return fetchScene (scene->Name ()); }
  
  //Setters
    
  
  //Utilities
    
    
  //Constructors
    World ();
    ~World ();
};

#endif
