#include<iostream>

using namespace std;

class Automobile{
    protected:
    //Vehicle
    string type,v_name,date_of_purchase;
    int cost_of_vehicle;
    //Customer
    string c_name,job_type,uid;
    int income;

    public:

    Automobile(){
        cout << endl;
        //Vehicle Details :
        cout << "Enter Vehicle Details :" << endl;
        cout << "Type : ";
        cin >> type;
        cout << "Name : ";
        cin >> v_name;
        cout << "Date of purchase : ";
        cin >> date_of_purchase;
        cout << endl;
        //Customer Details :
        cout << "Enter Customer Details :" << endl;
        cout << "Name : ";
        cin >> c_name;
        // cout << "Unique Identity Number (UID) : 548564123" << endl;
        cout << "Job type : ";
        cin >> job_type;
        cout << "Income : ";
        cin >> income;
    }

};

class Vehicle : public Automobile{
    
};

class Customer : public Automobile{

};



int main(){

    // cout << "Hello World";
    Automobile obj;

    return 0;
}