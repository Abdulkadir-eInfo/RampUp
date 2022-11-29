#include "AbstactFactory.h"

class LinuxFactory : public Factory
{
 public:
  Widget* create_button();
  Widget* create_menu();
};
