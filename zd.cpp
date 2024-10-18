#include <iostream>
#include <string>

using namespace std;
//create class Car
class Car{
//make private properties name,model and year of car
    private:
        string name;
        string model;
        int year;
//make public properties name,model and year of car
    public:
//make constructor
        Car(string n, string m,int y){
            name = n;
            model = m;
            year = y;
        }
//make getter for name
    string getName(){
        return name;
    }
//make getter for model
    string getModel(){
        return model;
    }
//make setter for name
    void setName(string n){
        if (!n.empty()) {
            name = n;
        } else {
            cout << "write name pls" <<endl;
        }
    }
//make setter for model
    void setModel(string m){
        if (!m.empty()) {
            model = m;
        } else {
            cout << "write model pls" <<endl;
        }
    }
//make function which prints text
    void describtionOfCar(){
        cout<<name<<" "<<model<<" makes sound like \"boom boom\" because it was made like "<<year<<" years ago!"<<endl;
    }
};

int main() {
//give parametrs
    Car car1("BMW","panamera",18);
//activate function
    car1.describtionOfCar();
//set name of car
    car1.setName("Porsche");
//get new name of car
    cout<<"New name of car is "<<car1.getName()<<endl;
    
    return 0;
}
