#ifndef __VERSIS_HPP__
#define __VERSIS_HPP__

#include "./VersisShared.hpp"
#include "./BackEnd/BackEnd.hpp"
#include "./FrontEnd/FrontEnd.hpp"

namespace Versis 
{
  class Engine : public BackEnd::Object
  {
  private:
    std::vector<BackEnd::Object> ObjMat;
  public:
    Engine() {};

    void
    OnCreate()   override {}
    void
    OnStep()     override {}
    void
    OnDestroy()  override {}
    
    ~Engine() {};
  };
}


#endif //__VERSIS_HPP__
