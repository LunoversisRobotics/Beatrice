#include "./Body.hpp"


namespace Versis
{
  namespace FrontEnd
  {
    Body::Body()
    {
      Setup(Vec2f32(1,1));
    }

    Body::Body(f32_t x,
               f32_t y)
    {
      Setup(Vec2f32(x, y));
    }

    Body::Body(u32_t x,
               u32_t y)
    {
      Setup(Vec2f32((f32_t) x,
                    (f32_t) y));
    }

    inline void
    Body::Setup(Vec2f32_t x)
    {
      // Set the size as X
      this->bSize = x;

      // Set Axis as { 0, (0,0) }
      this->bAxis =
        new Axis(0, Vec2f32(0,0));

      // Set the Body as Active
      SetState(true);
    }
  }
}
