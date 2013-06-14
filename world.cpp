#include "world.hpp"

World::World ()
{
  
}

World::~World ()
{
  
}

Scene& World::fetchScene (std::string title)
{
  try
  {
    return sceneList.at (title);
  }
  catch (out_of_range e)
  {
    return NULL;
  }
}

