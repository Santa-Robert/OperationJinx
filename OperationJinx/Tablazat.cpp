#include <iostream>

using namespace std;

void data(string name ,
              string money ,
              string age ,
              string gender,
              int countName,
              int countMoney,
              int countAge,
              int countGender
);



int userTable() {

    int n = 40;
    int x = n;
    string name = "Name";
    string money = "Money";
    string age = "Age";
    string gender = "Gender";

    cout<<name;
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == 15){
            cout<<"|";
            break;
        }
    }
    cout<<"Money";
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == 15){
            cout<<"|";
            break;
        }
    }
    cout<<"Age";
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == 5){
            cout<<"|";
            break;
        }
    }
    cout<<"Gender";
    for (int i = 0; i < n; i++) {
        cout<<" ";

    }
    cout<<endl;
    int nameCount = 0;
    int moneyCount = 0;
    int ageCount = 0;
    int genderCount = 0;
    for (int i = 0; i < n; i++) {
        cout<<"-";
        nameCount++;
        if(i+1 == name.size() + 15){
            cout<<"+";
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<"-";
        moneyCount++;
        if(i+1 == money.size() + 15){
            cout<<"+";
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<"-";
        ageCount++;
        if(i+1 == age.size() + 5){
            cout<<"+";
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<"-";
        genderCount++;
    }


    cout<<endl;
    data("Paul Eminescu", "12", "61", "Male", nameCount, moneyCount, ageCount, genderCount);
    data("Roby", "152396489", "13", "Male", nameCount, moneyCount, ageCount, genderCount);
    data("Lenard Mate Istvan", "51233584", "26", "Programmer", nameCount, moneyCount, ageCount, genderCount);
    data("Julia", "1235", "5", "femlae", nameCount, moneyCount, ageCount, genderCount);

    return 1;

}

void data(string name ,
              string money ,
              string age ,
              string gender,
              int countName,
              int countMoney,
              int countAge,
              int countGender) {

    int n = 40;


    cout<<name;
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == countName - name.size()){
            cout<<"|";
            break;
        }
    }
    cout<<money;
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == countMoney - money.size()){
            cout<<"|";
            break;
        }
    }
    cout<<age;
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == countAge - age.size()){
            cout<<"|";
            break;
        }
    }
    cout<<gender;
    for (int i = 0; i < n; i++) {
        cout<<" ";

    }

    cout<<endl;

}

