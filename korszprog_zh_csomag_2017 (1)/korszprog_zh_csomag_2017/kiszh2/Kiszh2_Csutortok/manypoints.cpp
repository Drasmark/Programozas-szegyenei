#include "manypoints.h"

ManyPoints::ManyPoints()
{

}

void ManyPoints::readFromFile(const string &file)
{
    string jel;
    ifstream read(file);
    read >> jel;
    while(jel!= "*"){
        if(jel == "D"){
            double szam;
            read >> szam;
            ertekek.push_back(szam);
        }else if(jel == "P"){
            double x,y,z;
            read >> x >> y >> z;
            pontok.push_back(Point(x,y,z));
        }
        read >> jel;
    }
}

void ManyPoints::print(bool fordit) const
{
    if(fordit == false){
        for(auto elem : pontok){
            cout << elem.getX() << " "<< elem.getY() << " "<< elem.getZ() << endl;
        }
        for(auto elem : ertekek){
            cout << elem << endl;
        }
    }
    else{
        for_each(pontok.rbegin(),pontok.rend(),[](const Point& pont){
            cout << pont.getX() << " "<< pont.getY() << " "<< pont.getZ() << endl;
        });
        for_each(ertekek.rbegin(),ertekek.rend(),[](const double ertek){
            cout << ertek << endl;
        });
    }
}
