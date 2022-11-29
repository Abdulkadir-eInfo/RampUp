#include "AbstactFactory.h"

/**
 * Client receives a factory object from its creator.
 *
 * All clients work with factories through abstract
 * interface. They don't know concrete classes of
 * factories. Because of this, you can interchange
 * concrete factories without breaking clients.
 *
 * Clients don't know the concrete classes of created
 * products either, since abstract factory methods
 * returns abstract products.
 */
class Client 
{
 private:
  Factory *factory;

 public:
  Client(Factory *f);

  void draw();

  void display_window_one();

  void display_window_two();
};
