#include <iostream>
using namespace std ;

// abstract 
class Property {
    int latitude;
    int longitude;
    virtual void sell() = 0;     // Pure virtual function
    virtual void print() = 0;    // Pure virtual function
    
public:
    static vector<vector<string>> allProps;
    static vector<vector<string>> soldProps;
Property(int l, int m){
    this->latitude=l;
    this->longitude=m;
}
int getLat() {return latitude ; };
int getLong() {return longitude ;};
};

class House : public Property{
    bool sold;
    string name; 
public :
House(string name , int lat , int lon , bool s): Property(lat,lon){
    this->name = name;
    this->sold=s;
    vector<string> v = {
       "Name: " + name ,
       "Latitude :" + to_string(lat)
    };
    allProps.push_back(v);
    if(s){
        soldProps.push_back(v);
    }
}
void sell() {
    this->sold=true;
    soldProps.push_back({
       ("Name: " + name ),
       ( "Latitude :" + Property::getLat() )
       });
}
};

class Hotel : public Property{
    bool sold;
    string name; 
public:
Hotel(string name , int lat , int lon , bool s): Property(lat,lon){
    this->name = name;
    this->sold=s;
    vector<string> v = {
       "Name: " + name ,
       "Latitude :" + to_string(lat)
    };
    allProps.push_back(v);
    if(s){
        soldProps.push_back(v);
    }
}
void sell() {
    this->sold=true;
    soldProps.push_back({
       ("Name: " + name ),
       ( "Latitude :" + Property::getLat() )
       });
}
};

class Park : public Property{
    bool sold;
    string name; 
public:
Park(string name , int lat , int lon , bool s): Property(lat,lon){
    this->name = name;
    this->sold=s;
    vector<string> v = {
       "Name: " + name ,
       "Latitude :" + to_string(lat)
    };
    allProps.push_back(v);
    if(s){
        soldProps.push_back(v);
    }
}

void sell() {
    this->sold=true;
    soldProps.push_back({
       ("Name: " + name ),
       ( "Latitude :" + Property::getLat() )
       });
}
};



class GovtRegistry : public Property {

public :
    static void RegistrySale(){
    cout<<"Solded Props are : \n";
    for(int i=0;i<soldProps.size();i++) {
        for(int j=0;j<soldProps[0].size();j++) {
        cout<<soldProps[i][j] <<endl;
    }
}
}

static void displayRegistry(){
    cout<<"All Props are : \n";
    for(int i=0;i<allProps.size();i++) {
        for(int j=0;j<allProps[0].size();j++) {
        cout<<allProps[i][j] <<endl;
    }
}
}


};
vector<vector<string>> Property::allProps = {};
vector<vector<string>> Property::soldProps = {};

int main() {
    Park p1 ("p1" ,100 ,200 ,false);
    House h1 ("h1" ,300 ,340 ,true);
    // GovtRegistry*g1;
    // g1->displayRegistry();
    // g1->RegistrySale();

    GovtRegistry::RegistrySale();
    GovtRegistry::displayRegistry();

}