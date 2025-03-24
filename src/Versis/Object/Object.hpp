#ifndef __VERSIS_OBJECT_HPP__
#define __VERSIS_OBJECT_HPP__

namespace Versis 
{
  class Object 
  {
  private:
    bool IsActive = false;
  public:
    // Constructor
    Object()    {};

    // Extendable funcs
    virtual void
    OnCreate()  {}

    virtual void
    OnStep()    {}

    virtual void
    OnDestroy() {}

    // Destructor
   ~Object()    {};
  };
}


#endif //__VERSIS_OBJECT_HPP__