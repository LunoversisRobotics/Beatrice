#ifndef __VERSIS_FRONTEND_VEC_VEC2F_HPP__
#define __VERSIS_FRONTEND_VEC_VEC2F_HPP__

#include "../../VersisShared.hpp"

namespace Versis
{
  namespace FrontEnd
  {
    extern "C"
    {
      /* 32-bit version */
      typedef struct
      {
        f32_t  x;
        f32_t  y;
      } Vec2f32_t;
      
      /* 64-bit version */
      typedef struct
      {
        f64_t  x;
        f64_t  y;
      } Vec2f64_t;

      /* Constructors */
      static Vec2f32_t
      Vec2f32(f32_t x, f32_t y)
      {
        Vec2f32_t v2;
        v2.x = x;
        v2.y = y;
        return v2;
      }
      
      static Vec2f64_t
      Vec2f64(f64_t x, f64_t y)
      {
        Vec2f64_t v2;
        v2.x = x;
        v2.y = y;
        return v2;
      }
    } // extern "C"
  } // namespace FrontEnd
} // namespace Versis

#endif // __VERSIS_FRONTEND_VEC_VEC2F_HPP__
