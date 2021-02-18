#include "barprogressobserver.h"

BarProgressObserver::BarProgressObserver()
{

}

void BarProgressObserver::update(int progress, const string &step)
{
    int progress_level = progress / 10;
    //if(progress_count != progress_level){
        for(int i = 0; i < progress_level; ++i){
            cout << "+";
        }
        //progress_count = progress_level;
        cout << endl;
    //}
    //if(progress == 100) progress_count = 0;
}
