#include <iostream>
#include<cstdlib>
#include<fstream>
#include <vector>

using namespace std;

class Bank{
private:
    int deposit;
    string name;
    string accountNumber ;


public:
    Bank(string accountHolder, int amount ){
        name = accountHolder;
        deposit = amount;
        accountNumber = "1001" + to_string(rand()% 9000 + 10000);
    }

    string getAccountHolder(){
        return name;
    }

    int getBalance(){
        return deposit;
    }

    string getAccountNumber(){
        return accountNumber;
    }

    string setName(string newAccountHolder){
        return name = newAccountHolder;
    }

    int setBalance(int newAmount){
        return deposit = newAmount;
    }

    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"balance : "<<deposit<<endl;
        cout<<"Account number : "<<accountNumber<<endl;
    }

    void fetchAcc_Details(){

    }

    

};


void display(){
    cout<<""<<endl;
    cout<<"1. Create a New Account"<<endl;
    cout<<"2. View Account Details"<<endl;
    cout<<"3. Deposit Money"<<endl;
    cout<<"4. Withdraw Money"<<endl;
    cout<<"5. Close Account"<<endl;
    cout<<"6. Exit"<<endl;
}


int main() {

    vector<Bank> userDetails;

    int choice;
    string userName, option;
    int userDeposit;
    string userAccNumEntry;

    do
    {
    display();

    cout<<"Enter your choice ";
    cin>>choice;

    

    switch (choice)
    {   
    case 1:{
        cout<<"Enter new User name : "<<endl;
        cin>>userName;
        cout<<"Enter initial amount: "<<endl;
        cin>>userDeposit;
        cout<<">>***===***===***==***<<"<<endl;

        Bank newUser(userName, userDeposit);
        userDetails.push_back(newUser);

        for (auto details : userDetails){ 
            details.display();
        }break;
    }
    case 2:{
        cout<<">>***===***===***==***<<"<<endl;

        cout<<"Enter your account number ==> ";
        cin>>userAccNumEntry;

        cout<<">>***===***===***==***<<"<<endl;
        for (auto details : userDetails){
            if(details.getAccountNumber() == userAccNumEntry){
                cout<<"Name: "<<details.getAccountHolder()<<" || Balance: "<<details.getBalance()
                <<" accountnum: "<<details.getAccountNumber()<<endl;
            }

        }break;
    }
    // case 3:
        
    //     break;

    // case 4:
        
    //     break;

    // case 5:
        
    //     break;

    // case 6:
        
    //     break;

    default:
        break;
    }

    cout<<"Do you wnat to continue ? press 'y/Y' to continue... ";
	cin>>option;

   } while (option=="y" || option =="Y");
    

    

   

    return 0;
}