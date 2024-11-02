#include "main.h"
#include "etk/log.h"

void userSetup()
{   
    etk::log::set_level(etk::log::DEBUG_LVL);
    etk::log::info("Hello from userSetup()!");
}