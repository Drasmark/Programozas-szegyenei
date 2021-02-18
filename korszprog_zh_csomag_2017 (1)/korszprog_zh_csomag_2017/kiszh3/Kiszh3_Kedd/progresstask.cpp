#include "progresstask.h"

ProgressTask::ProgressTask(const string &_name) : name(_name)
{

}

//a metódus működésével ne foglalkozz, csak a jelölt helyen vedd ki a kommentet ha elkészült a notifyObservers függvény
void ProgressTask::doTask(const vector<string> &steps)
{
    int progress = 0;
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 20);
    auto increment = bind(distribution, generator);
    int step_idx = 0;
    while(progress <= 100){

        //itt értesítsd a feliratkozott megfigyelőket ha kész a függvény
        //notifyObservers(progress, steps[step_idx]);

        if(progress == 100) break;
        this_thread::sleep_for(chrono::seconds(1));
        progress = fmin(100, progress + increment());
        if((100 / steps.size()) * (step_idx + 1) < progress && step_idx < steps.size() - 1) step_idx++;
    }
}
