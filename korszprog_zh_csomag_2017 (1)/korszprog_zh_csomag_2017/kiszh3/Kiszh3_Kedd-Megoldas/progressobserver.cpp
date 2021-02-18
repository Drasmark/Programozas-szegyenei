#include "progressobserver.h"

ProgressObserver::ProgressObserver()
{

}

void ProgressObserver::hide()
{
    this->hidden = true;
}

void ProgressObserver::show()
{
    this->hidden = false;
}

bool ProgressObserver::isHidden() const
{
    return this->hidden;
}
