#include "AbstactFactory.h"

class WindowsFactory : public Factory
{
 public:
  Widget *create_button();
  Widget *create_menu();
};
