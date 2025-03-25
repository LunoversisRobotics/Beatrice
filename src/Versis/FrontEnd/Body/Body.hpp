#ifndef __VERSIS_FRONTEND_BODY_HPP__
#define __VERSIS_FRONTEND_BODY_HPP__

#include "../Axis/Axis.hpp"
#include "../Vec2/Vec2f.hpp"
#include "../../VersisShared.hpp"
#include "../../BackEnd/BackEnd.hpp"

namespace Versis 
{
  namespace FrontEnd
  {
    class Body : public BackEnd::Object
    {
    private:
      /* Body Size */
      Vec2f32_t  bSize;

      Axis *bAxis = nullptr;
      
      /* Setup Functions */
      inline void
      Setup(Vec2f32_t x);
    public:
      // Constructor
      Body();

      /* Polymorphic Constructors */
      Body(f32_t x,
           f32_t y);
      
      Body(u32_t x,
           u32_t y);

      /* Overridable functions */
      void
      OnCreate()  override  {}
      void
      OnStep()    override  {}
      void
      OnDestroy() override  {}

      
      /* Destructor */
     ~Body() {};
    };
  } // namespace FrontEnd
} // namespace Versis


#endif // __VERSIS_FRONTEND_BODY_HPP__
