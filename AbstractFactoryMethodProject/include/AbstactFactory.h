#include "Widget.h"
#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

/**
 * Abstract factory defines methods to create all
 * related products.
 */
class Factory 
{
 public:
  virtual Widget* create_button() = 0;
  virtual Widget* create_menu() = 0;
};

#endif