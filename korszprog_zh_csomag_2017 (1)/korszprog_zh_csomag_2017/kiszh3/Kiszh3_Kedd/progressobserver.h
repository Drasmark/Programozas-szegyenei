#ifndef PROGRESSOBSERVER_H
#define PROGRESSOBSERVER_H

#include<string>

using namespace std;

class ProgressObserver
{
private:
    bool hidden;
public:
    ProgressObserver();
    virtual void update(int progress, const string& step) = 0;
    void hide();
    void show();
    bool isHidden() const;
};

#endif // PROGRESSOBSERVER_H
