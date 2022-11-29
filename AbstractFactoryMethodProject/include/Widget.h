#ifndef WIDGET_H
#define WIDGET_H

/**
 * Abstract base product. It should define an interface
 * which will be common to all products. Clients will
 * work with products through this interface, so it
 * should be sufficient to use all products.
 */
class Widget 
{
 public:
  virtual void draw() = 0;
  // virtual ~Widget();
};

#endif