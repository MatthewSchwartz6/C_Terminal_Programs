
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>
#include <iomanip>
#include <conio.h>
using namespace std;
#include "BankCustomer.h"

void Welcome();

void DeveloperScreen();

void MainMenu(vector<BankCustomer>& Account);

void NewAccount(vector<BankCustomer>& Account);

void Deposit(vector<BankCustomer>& Account);

void Withdraw(vector<BankCustomer>& Account);

void DisplayAllAccounts(vector<BankCustomer>& Account);


void TransactionHistory(vector<BankCustomer>& Account);

void DeleteAccount(vector<BankCustomer>& Account);

void Loan(vector<BankCustomer>& Account);

void Search(vector<BankCustomer>& Account);

void Transfer(vector<BankCustomer>& Account);




void AccountInfo(vector<BankCustomer>& Account);


int main()//Matthew
{
    vector<BankCustomer> Account(10);


    Welcome();
    DeveloperScreen();
    MainMenu(Account);

    return 0;
}
void Welcome()//Matthew
{
    cout<<"**************************************************************************************************"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*               W E L C O M E                T O                      T H E                      *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                          F I N A L                     P R O J E C T                           *"<<endl;
    cout<<"*                          ----------                    -------------                           *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                          B A N K                                               *"<<endl;
    cout<<"*                                          -------                                               *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                   PRESS ANY ALPHA-NUMERIC KEY FOLLOWED BY AN ENTER KEY TO CONTINUE             *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"**************************************************************************************************"<<endl;
    //char c ;
    system("pause");
    cout<<endl;
}

void DeveloperScreen()//Matthew
{
    cout<<"**************************************************************************************************"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                Y O A N N I E R                               M A T T H E W                     *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                 H E R M I D A                               S C H W A R T Z                    *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"*                PRESS ANY ALPHA-NUMERIC KEY FOLLOWED BY AN ENTER KEY TO CONTINUE                *"<<endl;
    cout<<"*                                                                                                *"<<endl;
    cout<<"**************************************************************************************************"<<endl;
    system("pause");
    cout<<endl;
}

void MainMenu(vector<BankCustomer>& Account)//Matthew
{
    bool finished = false;
    char choice = '\0';
    while (!finished){
        cout<<"**************************************************************************************************"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                   E N T E R     Y O U R     C H O I C E ' S     N U M B E R                    *"<<endl;
        cout<<"*                   ---------------------------------------------------------                    *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*          1.    O P E N     A C C O U N T                  2.     D E P O S I T                 *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*          3.    W I T H D R A W                            4.     D I S P L A Y  A C C O U N T  *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                    I N F O R M A T I O N       *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*          5.    D I S P L A Y   T R A N S A C T I O N S    6.     D E L E T E   A C C O U N T   *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*          7.    L O A N    M E N U                         8.     S E A R C H                   *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*          9.    T R A N S F E R                            0.     Q U I T                       *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"*                                                                                                *"<<endl;
        cout<<"**************************************************************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        choice =getch();
        cout<<endl;

        if (choice == '1'){
            NewAccount(Account);
        }
        else if (choice == '2')
            Deposit(Account);
        else if (choice == '3')
            Withdraw(Account);
        else if (choice == '4')
            AccountInfo(Account);
        else if (choice == '5')
            TransactionHistory(Account);
        else if (choice == '6')
            DeleteAccount(Account);
        else if (choice == '7')
            Loan(Account);
        else if (choice == '8')
            Search(Account);
        else if (choice == '9')
            Transfer(Account);
        else if (choice == '0')
            finished = true;
        else
            finished = false;
    }
}
void NewAccount(vector<BankCustomer>& Account) {//Yoannier

    string name = "PLACE HOLDER";
    string address = "PLACE HOLDER";
    string birth = "00\00\00";
    string phoneNum = "";
    int initDepos = 0;
    int accountsOpen = 0;
    //bool dateCheck = false;
    //dateCheck = Account[accountsOpen].checkDate(birth);

    int i = 0;
    cout<<"How many accounts do you have open with us?"<<endl;
    cin>>accountsOpen;
    cout<<endl;
    //Account.push_back(BankCustomer tmp)

    cin.ignore(1000, '\n');
    cout << "Enter your full name: " << endl;
    getline(cin, name, '\n');
    cout<<endl;
    //Account[accountsOpen].setAccountName(name);
    while (Account[accountsOpen].checkNameForNumber(name) == false) {
        cout << "Please do not enter numbers in your name input." << endl;
        getline(cin, name, '\n');

        cout<<endl;
    }

    name.at(0) = toupper(name.at(0));

    for (i = 0; i < name.size(); ++i) {
        if (name.at(i) == ' ' && i != name.size() - 1)
            name.at(i+1) = toupper(name.at(i+1));
    }


    cout << "Enter your address: " << endl;
    getline(cin, address, '\n');

    cout << "Enter your date of birth in this manner (mm\\dd\\yy)." << endl;
    cin >> birth;

    while (Account[accountsOpen].checkDate(birth) == false) {
        cout << "Please enter the date correctly (07\\20\\17)." << endl;
        cin >> birth;

    }

    cout << "Enter your telephone number." << endl;
    cin >> phoneNum;

     while (Account[accountsOpen].checkTelephoneNumber(phoneNum) == false) {
        cout << "Please enter your number like so: (3058881010)." << endl;
        cin >> phoneNum;

        Account[accountsOpen].checkTelephoneNumber(phoneNum);

        if (Account[accountsOpen].checkTelephoneNumber(phoneNum) == true)
            break;

    }

    Account[accountsOpen].createAccountNum();



    cout << "Your Account Number is: " << Account[accountsOpen].getAccountNum() << ". Be sure to write it down for future use." << endl;
    cout << endl;


    Account[accountsOpen].setAccountName(name);
    Account[accountsOpen].setAccountAddress(address);
    Account[accountsOpen].setAccountDOB(birth);
    Account[accountsOpen].setAccountTelephone(phoneNum);

    return;
}

void Deposit(vector<BankCustomer>& Account) {//Yoannier
    float amount = 0.00;
    int i = 0;
    int choice = 0;
    std::string depositDate;
    std::string key;
    std::string key2;
    bool check = false;
    bool check2 = false;






    cout << "Which account would you like to deposit to? Enter their corresponding number to choose." << endl;
    for (i = 0; i < Account.size(); ++i) {
        cout << "Account " << i+1 << ": " << Account[i].getAccountName() << endl;
    }
    cin >> choice;

    while (choice <= 0 || choice >= Account.size()) {
        cout << "Invalid input." << endl << endl;
        cin >> choice;
    }





    while (check2 == false) {

        check = false;

        cout << "Enter the amount you would like to deposit (enter dollars and cents, with period): " << endl;
        cin >> amount;

        //Call function to check if only numbers entered

        cout << "Enter the current date that this transaction is occurring (mm\\dd\\yy)." << endl;
        cin >> depositDate;

        if (Account[Account.size()-1].checkDate(depositDate) == false) {
            cout << "Date entered incorrectly." << endl;
            cin >> depositDate;
        }

        Account[choice-1].setTransactionDate(depositDate);

        cout << "Is $" << amount << " correct?" << endl;

        while (check == false) {
            cin >> key;

            if (key == "y" || key == "yes" || key == "Yes") {
                cout << "Your account was at $" << Account[choice-1].getBalance();//Account.getBalance
                cout << " and is now $" << fixed << setprecision(2) << Account[choice-1].getBalance() + amount << "." << endl;
                Account[choice-1].depositToAccount(amount);
                Account[choice-1].getBalance();
                return;
            }

            else if (key == "n" || key == "no" || key == "No") {

                cout << "Would you like to re-enter the amount?" << endl;
                cin >> key2;

                if (key2 == "y" || key2 == "yes" || key2 == "Yes") {
                    check = true;
                    continue;
                }

                else if (key2 == "n" || key2 == "no" || key2 == "No")
                    return;

                else
                    cout << "Invalid input. Is the above correct?" << endl;
            }
        }
    }
    return;

}

void Withdraw(vector<BankCustomer>& Account) {//Yoannier

    float amount = 0.00;
    int i = 0;
    int choice = 0;
    string key;
    string key2;
    string withdrawDate = "00\00\00";
    bool check = false;
    bool check2 = false;



    cout << "Which account would you like to withdraw from? Enter their corresponding number to choose." << endl;
    for (i = 0; i < Account.size(); ++i) {
        cout << "Account " << i+1 << ": " << Account[i].getAccountName() << endl;
    }

    cin >> choice;

    while (choice <= 0 || choice >= Account.size()) {
        cout << "Invalid input." << endl << endl;
        cin >> choice;
    }





    while (check2 == false) {

        check = false;

        cout << "Enter the amount you would like to withdraw (enter dollars and cents, with period): " << endl;

        cin >> amount;
        cout << "Enter the current date that this transaction is occurring (mm\\dd\\yy)." << endl;
        cin >> withdrawDate;

        if (Account[Account.size()-1].checkDate(withdrawDate) == false) {
            cout << "Date entered incorrectly." << endl;
            cin >> withdrawDate;
        }

        Account.at(choice-1).setTransactionDate(withdrawDate);

        cout << "Is $" << amount << " correct?" << endl;

        while (check == false) {
            cin >> key;

            if (key == "y" || key == "yes" || key == "Yes") {

                cout << "Your account was at $" << Account[choice-1].getBalance();
                amount *= -1;
                Account[choice-1].withdrawFromAccount(amount);
                cout << " and is now at $" << fixed << setprecision(2) << Account[choice-1].getBalance() << "." << endl;

                return;
            }

            else if (key == "n" || key == "no" || key == "No") {

                cout << "Would you like to re-enter the amount?" << endl;
                cin >> key2;

                if (key2 == "y" || key2 == "yes" || key2 == "Yes") {
                    check = true;
                    continue;
                }

                else if (key2 == "n" || key2 == "no" || key2 == "No")
                    return;

                else
                    cout << "Invalid input. Is the above correct?" << endl;
            }
        }
    }
    return;

}

void AccountInfo(vector<BankCustomer>& Account) {//Yoannier

   int val = 0;
    int i = 0;
    bool finished = false;
    bool found = false;

    while (finished == false) {
        cout << "Which account would you like to have its personal info printed? Enter its corresponding number." << endl;
        cout << "Enter 0 to exit." << endl << endl;
        for (i = 0; i < Account.size();++i){

                cout<<(i+1)<<".) "<<right<<setw(60)<<Account[i].getAccountNum();
                cout<<endl;
        }

        cin >> val;

        if (val == 0) {
            cout << "Exiting..." << endl << endl;
            return;
        }
        else if (val > 0 && val < Account.size())
            {
            val-=1;
            Account[val].printAccountInformation();
            break;
        }
        else {
                cout << "Invalid." << endl;
                continue;
        }

    }
    return;

}

void TransactionHistory(vector<BankCustomer>& Account) {//Yoannier


    int i = 0;
    int choice = 0;

    cout << "Which account would you like to have its transactions viewed? Enter their corresponding number to choose." << endl;
    for (i = 0; i < Account.size(); ++i) {
        cout << "Account " << i+1 << ": " << Account[i].getAccountName() << endl;
    }
    while (choice <= 0 || choice > i+1) {
        cin >> choice;

        cout << "Invalid input." << endl << endl;
    }

    Account[choice-1].printTransactionHistory();

    return;

}
void DeleteAccount(vector<BankCustomer>& Account)//Matthew
{
    int i;
    int accountNum;
    string yesorno = "";
    cout<<"Open Accounts:"<<endl;

    for (i = 0; i < Account.size();++i){
        cout<<(i+1)<<".) "<<right<<setw(60)<<Account[i].getAccountNum();
        cout<<endl;

    }
    cout<<"Please enter the number next to the account you'd like to delete: ";
    cin>>accountNum;
    cout<<endl;
    accountNum-=1;

    cout<<"Are you sure you want to delete your account?"<<endl;
    cin.ignore(1000,'\n');
    cin>>yesorno;
    cout<<endl;
    if (yesorno == "y" || yesorno == "yes" || yesorno == "Yes"||yesorno == "Y" )
    {
        Account[accountNum].deleteAccount();
        cout<<"Account Number "<<Account[accountNum].getAccountNum()<<" has been deleted."<<endl;
    }
    else
    {
        cout<<"Good to know this option is always there."<<endl;
    }

}

void Loan(vector<BankCustomer>& Account)//Matthew
{
    bool done = false;
    bool isCorrect = false;
    bool donewithLoanMenu = false;
    int loanMenuChoice = 0;
    int i ;
    int accountNum = 0;
    int choice = 0;

    string yesorno="";
    string Name ="";
    string Addr = "";
    int Age = 0;
    string loanCreationDate = " ";
    string loanPayDate="";
    float principal = 0;
    float interest = 0;
    float totalLoan = 0;
    float loanPayment = 0;
    cin.ignore(1000,'\n');
    cout<<endl;
    cout<<endl;
    cout<<endl;
    while (!donewithLoanMenu){
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"*********************"<<"                             "<<"*********************"<<endl;
        cout<<"*********************"<<"                             "<<"*********************"<<endl;
        cout<<"*********************"<<"     L O A N     M E N U     "<<"*********************"<<endl;
        cout<<"*********************"<<"     -------------------     "<<"*********************"<<endl;
        cout<<"*********************"<<"                             "<<"*********************"<<endl;
        cout<<endl;
        cout<<"1.) Open a new loan                                          2.) Make a loan payment"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"3.) Display loans offered                                    4.) View all open loans"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"5.) Exit to Main Menu";
        cout<<endl;
        cout<<endl;
        cout<<"Your choice: ";
        cin>>loanMenuChoice;
        cout<<endl;
        cout<<endl;




        if (loanMenuChoice == 1){
            cout<<"Open Accounts:"<<endl;

            for (i = 0; i < Account.size();++i){
                cout<<(i+1)<<".) "<<right<<setw(60)<<Account[i].getAccountNum();
                cout<<endl;
            }
            cout<<"Please enter the number next to the account you'd like to use: ";
            cin>>accountNum;
            cout<<endl;
            accountNum-=1;

            cout<<"How much will you need to borrow"<<endl;
            cout<<"Principal: ";
            cin>>principal;
            cout<<endl;
            Account[accountNum].setLoanPrincipalAmount(principal);

            while (!done){
                choice = Account[accountNum].viewLoanTypes();
                if (choice == 1){
                    Account[accountNum].setLoanType("School");
                    done = true;
                }
                else if( choice == 2){
                    Account[accountNum].setLoanType("Home");
                    done = true;
                }
                else if (choice ==3){
                    Account[accountNum].setLoanType("Auto");
                    done = true;
                }
                else if (choice == 4){
                    Account[accountNum].setLoanType("Personal");
                    done = true;
                }
                else if (choice == 5)
                {
                    done = true;
                    return;
                }
                else {
                    cout<<"Choice invalid."<<endl;
                    done = false;
                }
                Account[accountNum].printLoanTypeInformation(choice);
                cout<<endl;
                cout<<endl;
                choice = 0 ;
                cout<<"Would you like to select this loan for $"<<principal;
                cout<<" with a minimum monthly payment of only $"<<Account[accountNum].getMonthlyPayment()<<"?"<<endl;
                cin.ignore(1000,'\n');
                cin>>yesorno;
                cout<<endl;
                if (yesorno == "n" || yesorno == "no" || yesorno == "No"||yesorno == "N" )
                {
                    cout<<"Too bad! Feel free to browse our other loans."<<endl;
                    done = true;
                    isCorrect = true;

                }
                Account[accountNum].depositToAccount(principal);
                while (!isCorrect){
                    cout <<"Please enter your information\n"<<endl;
                    cout<<"Name: ";
                    cin.ignore(1000,'\n');
                    getline(cin,Name);
                    cout<< endl;
                    cout<<"Address: ";
                    //cin.ignore(1000,'\n');
                    getline(cin,Addr);
                    cout<<endl;
                    cout<<"Age: ";
                    //cin.ignore(1000,'\n');
                    cin>>Age;
                    cout<<endl;
                    cout<<"Today's Date: ";
                    cin.ignore(1000,'\n');
                    getline(cin, loanCreationDate);
                    cout<<endl;
                    Account[accountNum].setLoanID();
                    Account[accountNum].setBorrowerName(Name);
                    Account[accountNum].setBorrowerAddress(Addr);
                    Account[accountNum].setBorrowerAge(Age);
                    Account[accountNum].setLoanCreationDate(loanCreationDate);
                    cout<<"Please review this information, verify it is correct, and save it for your records."<<endl;
                    cout<<endl;
                    Account[accountNum].printLoanHistory();
                    done = false;
                    while(!done){
                        yesorno="  ";
                        cout<<"Is this information correct?"<<endl;
                        cin>>yesorno;
                        cout<<endl;

                        if (yesorno == "y" || yesorno == "yes" || yesorno == "Yes"||yesorno == "Y" )
                        {
                            cout<<fixed<<showpoint<<setprecision(2)<<"Your loan of $"<<principal;
                            cout<<fixed<<showpoint<<setprecision(2)<<" which has a total interest of $"<<Account[accountNum].getTotalInterest();
                            cout<<fixed<<showpoint<<setprecision(2)<<" will require a monthly payment of $"<<Account[accountNum].getMonthlyPayment()<<endl;

                            done = true;
                            isCorrect = true;
                        }
                        else if (yesorno == "n" || yesorno == "no" || yesorno == "No"||yesorno == "N" )
                        {
                            done = false;
                            isCorrect = false;
                        }
                        else{
                            cout<<"Invalid choice."<<endl;
                            done = false;
                        }
                    }
                }

            }
        }

        else if (loanMenuChoice == 2)
        {
            cout<<"Open Accounts:"<<endl;
            for (i = 0; i < Account.size();++i){
                cout<<(i+1)<<".) "<<right<<setw(60)<<Account[i].getAccountNum();
                cout<<endl;
            }
            cout<<"Please enter the number next to the account you'd like to use: ";
            cin>>accountNum;
            cout<<endl;
            accountNum-=1;
            cin.ignore(1000,'\n');
            cout<<"Date:    ";
            getline(cin, loanPayDate);
            cout<<endl;
            cout<<"Payment: ";
            cin>>loanPayment;
            cout<<endl;

            Account[accountNum].payLoan(loanPayment);
            Account[accountNum].setLoanPaymentDate(loanPayDate);
            cout<<"Payment successful."<<endl;
            if(Account[accountNum].getTotalLoan()== 0 )
            {
                cout<<"Hooray! You paid off your loan!"<<endl;
                Account[accountNum].deleteLoan();

            }
        }

        else if (loanMenuChoice == 3)
        {
            cout<<"Greetings! We have various loan options to choose from. Below you will find our many loan plans"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"1. Home Loan                                             2. School Loan"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"3. Auto Loan                                             4. Personal Loan"<<endl;

            cout<<endl;
            cout<<"Open an account with us today!"<<endl;

        }
        else if (loanMenuChoice == 4)
        {
            if (Account[i].getLoanID()==0)
            {
                cout<<"There are no loans open with this account."<<endl;
            }
            cout<<"Open Accounts: "<<endl;
            for (i = 0; i < Account.size();++i){
                if (Account[i].getAccountNum()==0)
                {
                    break;
                }
                cout<<(i+1)<<".) "<<Account[i].getAccountNum();
                cout<<endl;
                Account[i].printLoanHistory();

                cout<<endl;

            }

        }

        else if (loanMenuChoice == 5)
        {
            donewithLoanMenu = true;
        }
        else
            donewithLoanMenu = false;
    }
    return;
}

void Search(vector<BankCustomer>& Account)//Matthew
{
    int choice = 0;
    int searchNum = 0;
    string searchDate = "";
    float searchAmount = 0;
    bool done = false;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    while (!done){
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"*********************"<<"                                 "<<"*********************"<<endl;
        cout<<"*********************"<<"                                 "<<"*********************"<<endl;
        cout<<"*********************"<<"     S E A R C H     M E N U     "<<"*********************"<<endl;
        cout<<"*********************"<<"     -----------------------     "<<"*********************"<<endl;
        cout<<"*********************"<<"                                 "<<"*********************"<<endl;
        cout<<endl;

        cout<<"Please select an account. "<<endl;
        for (int i = 0; i < Account.size();++i){
            cout<<(i+1)<<".) "<<right<<setw(60)<<Account[i].getAccountNum();
            cout<<endl;
        }

        cout<<"Enter your choice(In the form of 1, 2, 3, etc.): ";
        cin>>choice;
        cout<<endl;
        cout<<endl;
        choice -= 1;
        cout<<"Option 1. Search by date of transaction                                    Option 2. Search by amount of transaction"<<endl;
        cout<<endl;
        cout<<"Option 3. Print all account information including all transactions         Option 4. Exit"<<endl;
        cin.ignore(1000,'\n');
        cout<<"Which option?  ";
        cin>>searchNum;
        cout<<endl;
        cout<<endl;

        if (searchNum == 1)
        {
            cout<<"Date must be in form of (01\\02\\16) for \"January, 2nd, 2016\""<<endl;
            cout<<"Date: ";
            cin.ignore(10000,'\n');
            cin>>searchDate;
            cout<<endl;

            Account[choice].returnDateInfo(searchDate);


        }
        else if (searchNum == 2)
        {
            cin.ignore(10234,'\n');
            cout<<"Enter an amount: $";
            cin>>searchAmount;
            cout<<endl;
            Account[choice].returnTransInfo(searchAmount);
        }
        else if (searchNum == 3)
        {
            Account[choice].printAccountInformation();
            Account[choice].printTransactionHistory();
        }
        else if (searchNum ==4)
            done = true;
        else
        {
            cout<<"Wrong option.";
            cout<<endl;
            done = false;
        }

    }
}

void Transfer(vector<BankCustomer>& Account)//Matthew
{
    int choiceFrom = 0;
    int choiceTo = 0;
    float transAmount = 0;
    string transDate= "";
    bool done = false;
    cin.ignore(12345,'\n');

    cout<<"Please select an account to transfer from. "<<endl;
    for (int i = 0; i < Account.size();++i){
        cout<<(i+1)<<".) "<<right<<setw(60)<<Account[i].getAccountNum();
        cout<<endl;
    }
    cout<<"Enter your choice(In the form of 1, 2, 3, etc.): ";
    cin>>choiceFrom;
    cout<<endl;
    cout<<endl;
    choiceFrom -= 1;
    Account[choiceFrom].printAccountInformation();
    cout<<"Please select an account to transfer to. "<<endl;
    for (int i = 0; i < Account.size();++i){
        cout<<(i+1)<<".) "<<right<<setw(60)<<Account[i].getAccountNum();
        cout<<endl;
    }
    cout<<"Enter your choice(In the form of 1, 2, 3, etc.): ";
    cin>>choiceTo;
    cout<<endl;
    cout<<endl;
    choiceTo -= 1;
    Account[choiceTo].printAccountInformation();

    cout<<"Transfer Amount: ";
    cin>>transAmount;
    cout<<endl;



        cout<<"Date must be in form of (01\\02\\16) for January, 2nd, 2016"<<endl;
        cout<<"Transfer Date: ";
        cin>>transDate;
        cout<<endl;


        Account[choiceTo].depositToAccount(transAmount);
        transAmount *= -1;
        Account[choiceFrom].withdrawFromAccount(transAmount);

        Account[choiceFrom].setTransactionDate(transDate);
        Account[choiceTo].setTransactionDate(transDate);


return;
}
