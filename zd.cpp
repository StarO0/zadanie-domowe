#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
        string name;
        string model;
        int year;
    public:
        Car(string n, string m,int y){
            name = n;
            model = m;
            year = y;
        }
    string getName(){
        return name;
    }
    void setName(string n){
        name = n;
    }
    void describtionOfCar(){
        cout<<name<<" "<<model<<" makes sound like \"boom boom\" because it was made like "<<year<<" years ago!"<<endl;
    }
};

int main() {
    Car car1("BMW","panamera",18);
    car1.describtionOfCar();
    
    car1.setName("Porsche");
    cout<<"New name of car is "<<car1.getName()<<endl;
    return 0;
}