#include "progresstask.h"

ProgressTask::ProgressTask(const string &_name) : name(_name)
{

}

void ProgressTask::addObserver(ProgressObserver *observer)
{
    observers.push_back(observer);
}

void ProgressTask::doTask(const vector<string> &steps)
{
    int progress = 0;
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 20);
    auto increment = bind(distribution, generator);
    int step_idx = 0;
    while(progress <= 100){
        //itt értesítjük a feliratkozott megfigyelőket
        notifyObservers(progress, steps[step_idx]);
        if(progress == 100) break;
        this_thread::sleep_for(chrono::seconds(1));
        progress = fmin(100, progress + increment());
        if((100 / steps.size()) * (step_idx + 1) < progress && step_idx < steps.size() - 1) step_idx++;
    }
}

void ProgressTask::notifyObservers(int progress, const string& step)
{
    for(list<ProgressObserver*>::const_iterator it = observers.cbegin(); it != observers.cend(); ++it){
        if(!((*it)->isHidden())){
            (*it)->update(progress, step);
        }
    }
}
