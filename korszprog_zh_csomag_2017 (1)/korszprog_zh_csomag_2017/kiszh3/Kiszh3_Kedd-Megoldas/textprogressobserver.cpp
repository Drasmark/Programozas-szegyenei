#include "textprogressobserver.h"

TextProgressObserver::TextProgressObserver()
{

}

void TextProgressObserver::update(int progress, const string &step)
{
    cout << "Executing step: " << step << " - overall progress: " << progress << "%" << endl;
}
