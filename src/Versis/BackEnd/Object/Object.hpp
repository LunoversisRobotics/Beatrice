#ifndef __VERSIS_BACKEND_OBJECT_HPP__
#define __VERSIS_BACKEND_OBJECT_HPP__

#include "../../VersisShared.hpp"

namespace Versis 
{
  namespace BackEnd
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

      bool GetState() const
      { return this->IsActive; }

      void SetState(bool x)
      { this->IsActive = x; }
      
      // Destructor
     ~Object()    {};
    };
  } // namespace BackEnd
} // namespace Versis


#endif // __VERSIS_BACKEND_OBJECT_HPP__
