#include "manypoints.h"

ManyPoints::ManyPoints(){}

void ManyPoints::readFromFile(const string &file_name)
{
    ifstream input(file_name);
    if(input.is_open()){
        string type;
        input >> type;
        while(type != "*"){
            if(type == "P"){
                double x;
                double y;
                double z;
                input >> x >> y >> z;
                points.push_back(Point(x, y, z));
            }
            else if(type == "D"){
                double value;
                input >> value;
                values.push_back(value);
            }
            input >> type;
        }
        input.close();
    }
}

void ManyPoints::print(bool reverse) const
{

    if(reverse){
        cout << "Points reversed: ";
        for(list<Point>::reverse_iterator rit = points.rbegin(); rit != points.rend(); ++rit){
            cout << "(" << rit->getX() << ", " << rit->getY() << ", " << rit->getZ() << ")";
        }
        cout << endl << "Values reversed: ";
        for(vector<double>::reverse_iterator rit = values.rbegin(); rit != values.rend(); ++rit){
            cout << *rit << " ";
        }
        cout << endl;
    }
    else{
       cout << "Points: ";
       for(list<Point>::const_iterator cit = points.cbegin(); cit != points.cend(); ++cit){
           cout << "(" << cit->getX() << ", " << cit->getY() << ", " << cit->getZ() << ")";
       }
       cout << endl << "Values: ";
       for(vector<double>::const_iterator cit = values.cbegin(); cit != values.cend(); ++cit){
           cout << *cit << " ";
       }
       cout << endl;
    }

}
