#include <vector>
#include<iostream>

#include "progresstask.h"
//#include "barprogressobserver.h"
//#include "textprogressobserver.h"

using namespace std;

int main()
{
    ProgressTask hacking("Hacking the FBI");

//    TextProgressObserver text_observer;
//    text_observer.show(); //mutassuk a szöveges kiíratást (hidden = false)
//    BarProgressObserver bar_observer;
//    bar_observer.show(); //mutassuk a grafikus kiíratást (hidden = false)

//    hacking.addObserver(&text_observer);
//    hacking.addObserver(&bar_observer);

    vector<string> steps;
    steps.push_back("Establish super secret connection");
    steps.push_back("Do some hackerman stuff");
    steps.push_back("Steal all incriminating data");
    steps.push_back("Disconnect and hide");

    cout << "Do the hacking #1..." << endl;
    hacking.doTask(steps);
    //a százalékok és a + jelek száma a véletlenszám-generátor által előállított értékektől függően más lehet
    /*
    Do the hacking #1...
    Executing step: Establish super secret connection - overall progress: 0%

    Executing step: Establish super secret connection - overall progress: 13%
    +
    Executing step: Establish super secret connection - overall progress: 16%
    +
    Executing step: Do some hackerman stuff - overall progress: 31%
    +++
    Executing step: Do some hackerman stuff - overall progress: 37%
    +++
    Executing step: Do some hackerman stuff - overall progress: 42%
    ++++
    Executing step: Steal all incriminating data - overall progress: 54%
    +++++
    Executing step: Steal all incriminating data - overall progress: 64%
    ++++++
    Executing step: Steal all incriminating data - overall progress: 70%
    +++++++
    Executing step: Disconnect and hide - overall progress: 89%
    ++++++++
    Executing step: Disconnect and hide - overall progress: 93%
    +++++++++
    Executing step: Disconnect and hide - overall progress: 100%
    ++++++++++
    */

    //text_observer.hide(); // ne mutassuk a szöveges kiíratást (hidden = true)
    cout << endl << endl << "Do the hacking #2..." << endl;
    hacking.doTask(steps);
    /*
    Do the hacking #2...

    +
    +
    +++
    +++
    ++++
    +++++
    ++++++
    +++++++
    ++++++++
    +++++++++
    ++++++++++
    */
    return 0;
}
