#include <iostream>
using namespace std;

void Withdraw();
void Deposit();
void Check_balance();

int balance = 10000;
int main(){
    int user;
    while(user!=4){

    cout <<"Welcome To $$$ Bank"<<"\n";
    cout <<"\n";

    cout <<"Option 1: Withdraw Money."<<"\n";
    cout <<"Option 2: Deposit Money."<<"\n";
    cout <<"Option 3: Check your Balance."<<"\n";
    cout <<"Option 4: To EXIT."<<"\n";
    cout <<"\n";

    cout <<"Enter your option: "; cin >> user;
    if(user !=1 && user !=2 && user!=3 && user!= 4){
        cout << "Option not valid"<<"\n";
        cout <<"\n";
    }

    switch(user){
        case 1:
            Withdraw();
            break;
        case 2:
            Deposit();
            break;
        case 3:    
            Check_balance();
            break;
        case 4:
            cout <<"Thank you for visiting!";
            break;
    }
    

    }


}
void Withdraw(){
    int withdraw_amt;
    cout <<"Enter your amount to withdraw: $"; cin >> withdraw_amt;
    if(balance < withdraw_amt){
        cout <<"Not Enough Balance!"<<"\n";
        cout <<"\n";
    }
    else{
        balance -= withdraw_amt;
        cout << "Transfer Successful!"<<"\n";
    }
}   

void Deposit(){
    int amt;
    cout <<"Enter the amount to deposit: $"; cin >> amt;
    balance += amt;
    cout <<"Transfer successful!"<<"\n";

}

void Check_balance(){
    cout << "Your balance: $"<< balance<<"\n";
    cout <<"\n";
}
