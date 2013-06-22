#include "scene.hpp"

Scene::Scene ()
{
  
}

Scene::~Scene ()
{
  
}

Action* Scene::GetActions ()
{
  
}

/**
 * Retrieves the actions associated with the point of interest at a given point.
 * If there is no point of interest at that point, then the Scene's independent
 * set of actions is used.
 */
Action* Scene::getActionsAt (int x, int y)
{
  std::vector<Action> actionSet;
  
  for (PointOfInterest POI : pointsOfInterest)
  {
    if (within (POI, x, y) && POI.isAccessible ())
    {
      for (Action action : POI.getActions ())
      {
        actionSet.push_back (action);
      }
    }
  }
  
  if (actionSet.empty ())
  {
    for (Action action : this->actions)
    {
      actionSet.push_back (action);
    }
  }
  
  return &actionSet[0];
}
