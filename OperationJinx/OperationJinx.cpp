#include <iostream>
#include "problems.h"
#include <fstream>
#include <random>
#include <string>
#include <sstream>

using namespace std;


struct userStruct {

    string name;
    string money;
    string age;
    string gender;
    string email;

};

struct countOfTheRow {

    int nameCount;
    int moneyCount;
    int ageCount;
    int genderCount;

};


void cleaning() {

    ofstream MyFile("data.txt", ios::trunc);

    MyFile.close();


}



void mainData(string name,
                       string money,
                       string age,
                       string gender,
                       countOfTheRow userCount
);

countOfTheRow tableHeader(userStruct user) {

    int n = 40;


    cout << "Name";
    for (int i = 0; i < n; i++) {
        cout << " ";
        if (i + 1 == 15) {
            cout << "|";
            break;
        }
    }
    cout << "Money";
    for (int i = 0; i < n; i++) {
        cout << " ";
        if (i + 1 == 15) {
            cout << "|";
            break;
        }
    }
    cout << "Age";
    for (int i = 0; i < n; i++) {
        cout << " ";
        if (i + 1 == 5) {
            cout << "|";
            break;
        }
    }
    cout << "Gender";
    for (int i = 0; i < n; i++) {
        cout << " ";

    };
    cout << endl;

    countOfTheRow dataCount{};
    dataCount.nameCount = 0;
    dataCount.moneyCount = 0;
    dataCount.ageCount = 0;
    dataCount.genderCount = 0;

    for (int i = 0; i < n; i++) {
        cout << "-";
        dataCount.nameCount++;
        if (i + 1 == user.name.size() + 15) {
            cout << "+";
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "-";
        dataCount.moneyCount++;
        if (i + 1 == user.money.size() + 16) {
            cout << "+";
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "-";
        dataCount.ageCount++;
        if (i + 1 == user.age.size() + 6) {
            cout << "+";
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "-";
        dataCount.genderCount++;
    }

    cout << endl;

    return dataCount;

}

void createFile(userStruct user);

void readFile();

string ageGenerator()
{
    int age = 0;

    age=randomizer(18,100);

    return std::to_string(age);
}

string moneyGenerator()
{
    int money = 0;

    money=randomizer(100,120000);

    return std::to_string(money);
}

int main() {

   //
   //  userStruct user;
   //
   //  
   //
   // // createFile(user);
   // mainData(user.name, user.money, user.age, user.gender, tableHeader(user) );
   //
   //  readFile();
   //

    string age = ageGenerator();
    string money = moneyGenerator();
    
   userTable("Robi",money,age,"male","santarobert@gmail.com");

    // cout<<ageGenerator()<<endl;
    // cout<<moneyGenerator();
}

void mainData(string name,
              string money,
              string age,
              string gender,
              countOfTheRow userCount
              ) {

    int n = 40;


    cout << name;
    for (int i = 0; i < n; i++) {
        cout << " ";
        if (i + 1 == userCount.nameCount  - name.size()) {
            cout << "|";
            break;
        }
    }
    cout << money;
    for (int i = 0; i < n; i++) {
        cout << " ";
        if (i + 1 == userCount.moneyCount - money.size()) {
            cout << "|";
            break;
        }
    }
    cout << age;
    for (int i = 0; i < n; i++) {
        cout << " ";
        if (i + 1 == userCount.ageCount - age.size()) {
            cout << "|";
            break;
        }
    }
    cout << gender;
    for (int i = 0; i < n; i++) {
        cout << " ";

    }

    cout << endl;

}

void createFile(userStruct user) {


    ofstream MyFile("data.txt", ios::app);

    MyFile << user.name << " ";
    MyFile << user.money << " ";
    MyFile << user.age << " ";
    MyFile << user.gender << " ";


    MyFile.close();

    
    
}

userStruct loopCounting(userStruct user, string MyText)
{

    int loopCount = 0;
    

    stringstream ss(MyText);
    while (getline(ss, MyText, ',')) {

        if (loopCount == 0) {

            user.name = MyText;
        } else if (loopCount == 1) {

            user.gender = MyText;
        } else if (loopCount == 2) {

            user.email = MyText;
        }
        if (loopCount > 2) {
            loopCount = 0;
        }
        loopCount++;

    }

    return user;
    
}

void readFile() {

    userStruct user;

int userCounter = 0;
    
    userStruct clients[10] ;

    // int loopCount = 0;

    string myText;


    ifstream MyReadFile("C:\\Users\\santa\\source\\repos\\OperationJinx\\OperationJinx\\dataBase\\json.txt");

    

    while (getline(MyReadFile, myText)) {
       
        
        user = loopCounting(user, myText);
       
        
        clients[userCounter] = user;
        userCounter++;
    }

    for (int i = 0; i < 10; ++i) {
        cout<<"name:"<<clients[i].name<<" ";
        cout<<"gender:"<<clients[i].gender<<" ";
        cout<<"email:"<<clients[i].email<<" ";
        cout<<endl;
    }



    MyReadFile.close();


}