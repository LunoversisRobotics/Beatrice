#ifndef __VERSIS_FRONTEND_AXIS_HPP__
#define __VERSIS_FRONTEND_AXIS_HPP__

#include "../Vec2/Vec2f.hpp"
#include "../Angle/Angle.hpp"
#include "../../VersisShared.hpp"

namespace Versis
{
  namespace FrontEnd
  {
    class Axis
    {
      Angle_t   ang;
      Vec2f32_t pos;
    public:
      Axis(Angle_t   ang,
           Vec2f32_t pos) : ang(ang), pos(pos) {}
     ~Axis() {}
    };
  }
}

#endif // __VERSIS_FRONTEND_AXIS_HPP__
