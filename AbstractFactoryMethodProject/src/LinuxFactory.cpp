#include "LinuxFactory.h"
#include "LinuxFamily.h"

/**
 * Each concrete factory corresponds to one product
 * family. It creates all possible products of
 * one kind.
 */

Widget* LinuxFactory::create_button() 
{
return new LinuxButton;
}
Widget* LinuxFactory::create_menu() 
{
return new LinuxMenu;
}

