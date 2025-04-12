#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    public:
    string model;
    int manufacture_year;
    
    Car(string model, int manufacture_year){
        this->model=model;
        this->manufacture_year=manufacture_year;
    }
     void dis(){
        cout<<" car's model : "<<model<<endl;
        cout<<" year of manufacture : "<<manufacture_year<<endl;
        
    }
    
    ~Car(){
        cout<<" Car is destroyed "<<endl;
    }
   
};

int main(){
    Car c1("benz",2015);
    c1.dis();
    Car c2("corolla",2017);
    c2.dis();
    return 0;
}

