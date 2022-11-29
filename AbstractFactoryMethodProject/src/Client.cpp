#include <iostream>
#include "Client.h"
using namespace std;

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

Client::Client(Factory *f)
{
    factory = f;
}

void Client::draw()
{
    Widget *w = factory->create_button();
    w->draw();
    display_window_one();
    display_window_two();
}

void Client::display_window_one() 
{
    Widget *w[] = {
        factory->create_button(),
        factory->create_menu()
    };
    w[0]->draw();
    w[1]->draw();
}

void Client::display_window_two() 
{
    Widget *w[] = 
    {
        factory->create_menu(),
        factory->create_button()
    };
    w[0]->draw();
    w[1]->draw();
}

