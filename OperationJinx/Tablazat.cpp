#include <iostream>

using namespace std;

void data(string name ,
              string money ,
              string age ,
              string gender,
              string email,
              int countName,
              int countMoney,
              int countAge,
              int countGender,
              int countEmail
);



void userTable() {

    int n = 40;
    int x = n;
    string name = "Name";
    string money = "Money";
    string age = "Age";
    string gender = "Gender";
    string email = "Email";

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
        if (i+1 == 8)
        {
            cout<<"|";
            break;
        }
    }
    cout<<"Email";
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == 35)
        {
            cout<<"|";
            break;
        }
    }
    
    cout<<endl;
    int nameCount = 0;
    int moneyCount = 0;
    int ageCount = 0;
    int genderCount = 0;
    int emailCount = 0;
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
        if (i+1 == gender.size() + 8)
        {
            cout<<"+";
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<"-";
        emailCount++;
        
    }
    cout<<"+";

    
    cout<<endl;
    data("Paul Eminescu", "12", "61", "Male","sophiataylor@gmail.com", nameCount, moneyCount, ageCount, genderCount,emailCount);
    data("Paul Jake", "12", "61", "Male","danielanderson@gmail.com", nameCount, moneyCount, ageCount, genderCount,emailCount);
    data("Rob", "12", "61", "Male","jameswilson@gmail.com", nameCount, moneyCount, ageCount, genderCount,emailCount);
    data("Huber Blaine Wolf", "12", "61", "Male","michaelbrown@gmail.com", nameCount, moneyCount, ageCount, genderCount,emailCount);
  
    

}

void data(string name ,
              string money ,
              string age ,
              string gender,
              string email,
              int countName,
              int countMoney,
              int countAge,
              int countGender,
              int countEmail) {

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
        if(i+1 == countGender - gender.size()){
            cout<<"|";
            break;
        }
    }
    cout<<email;
    for (int i = 0; i < n; i++) {
        cout<<" ";
        if(i+1 == countEmail - email.size()){
            cout<<"|";
            break;
        }
    }
    cout<<endl;

}

