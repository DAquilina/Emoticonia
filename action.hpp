#ifndef ACTION
#define ACTION

enum ICON { EYE, HAND_OPEN, HAND_POINT, HAND_FIST, HAND_PINCH, FOOT, FOOTSTEP, MOUTH_TEETH, MOUTH_TONGUE, SPEECH, EAR, SELF };

//Includes


//Forward Declarations


class Action
{
  private:
    //Members
    std::string descriptor;
    ICON icon;
    
    //Utilities
    
  public:
    //Getters
    ICON Icon () { return icon; }
    
    //Setters
    
    
    //Utilties
    
    
    //Constructors
    Action ();
    ~Action ();
};

#endif
