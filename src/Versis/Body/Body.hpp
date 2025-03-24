#ifndef __VERSIS_BODY_HPP__
#define __VERSIS_BODY_HPP__

#include "../Object/Object.hpp"

namespace Versis 
{
  class Body : public Object
  {
  private:
    float x = 0;
    float y = 0;
  public:
    // Constructor
    Body()    {};

    // Extendable funcs
    void
    OnCreate()  override  {}

    void
    OnStep()    override  {}

    void
    OnDestroy() override  {}

    // Destructor
   ~Body()    {};
  };
}


#endif //__VERSIS_BODY_HPP__