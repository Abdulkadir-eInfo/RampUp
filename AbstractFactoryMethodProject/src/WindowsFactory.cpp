#include "AbstactFactory.h"
#include "WindowsFamily.h"

/**
 * Concrete factory creates concrete products, but
 * returns them as abstract.
 */
class WindowsFactory : public Factory 
{
 public:
  Widget *create_button() 
  {
    return new WindowsButton;
  }
  Widget *create_menu() 
  {
    return new WindowsMenu;
  }
};