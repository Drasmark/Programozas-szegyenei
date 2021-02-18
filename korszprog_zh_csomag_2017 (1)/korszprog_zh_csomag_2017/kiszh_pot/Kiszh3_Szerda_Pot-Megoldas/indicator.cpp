#include "indicator.h"

indicator::indicator()
{

}

void indicator::update(int rpm)
{
    if(rpm > 3500){
        cout << "RPM warning!" << endl;
    }
}
