#include <iostream>
#include "AbstactFactory.h"
#include "LinuxFactory.h"
#include "LinuxFamily.h"
#include "WindowsFamily.h"
#include "Client.h"
#define LINUX

using namespace std;
/**
 * Now the nasty switch statement is needed only once to
 * pick and create a proper factory. Usually that's
 * happening somewhere in program initialization code.
 */
int main() 
{
  Factory *factory;
#ifdef LINUX
  factory = new LinuxFactory;
#else 
  factory = new WindowsFactory;
#endif

  Client *c = new Client(factory);
  c->draw();
}
