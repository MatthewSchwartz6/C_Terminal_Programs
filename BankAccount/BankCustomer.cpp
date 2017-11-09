#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
using namespace std;
#include "BankCustomer.h"

BankCustomer::BankCustomer()//Matthew
{
    accountNum = 0;
    Name = " ";
    DOB = " ";
    Address = " ";
    Telephone = "";
    balance = 0;

    loanID = 0;
    loanPrincipalAmount= 0;
    totalMonths = 0;
    monthlyPayment = 0;
    interestSchoolLoan = 0;
    interestHomeLoan = 0;
    interestPersonalLoan = 0;
    interestAutoLoan = 0;
    monthlyInterestRate = 0;
    totalInterest = 0;
    totalLoan = 0;
    borrowerName = " ";
    borrowerAddress = " ";
    borrowerAge = 0;
    loanCreationDate = " ";

    loanType=" ";

    choice = 0;
    strchoice = "";
    i = 0;
    j =  0;
    good = false;
    sum = 0;
}
void BankCustomer::createAccountNum()//Yoannier
{
    srand(time(0));
    accountNum = 1000000000 + (rand() % 1000000000);
}
int BankCustomer::getAccountNum()
{
    return accountNum;
}

void BankCustomer::setAccountName(string fullname)
{
    Name = fullname;
}
string BankCustomer::getAccountName()
{
    return Name;
}

void BankCustomer::setAccountDOB(string birth)
{
    DOB = birth;
}

string BankCustomer::getAccountDOB()
{
    return DOB;
}
void BankCustomer::setAccountAddress(string addr)
{
    Address = addr;
}
string BankCustomer::getAccountAddress()
{
    return Address;
}

void BankCustomer::setAccountTelephone(string phone)
{
    Telephone = phone;
}
string BankCustomer::getAccountTelephone()
{
    return Telephone;
}


void BankCustomer::setTransactionDate(string transacDate)//Matthew & Yoannier
{
    transactionDate.push_back(transacDate);
}
void BankCustomer::getTransactionDate()
{
    for (i = 0; i < transactionDate.size(); ++i)
        cout << "Date: " << transactionDate.at(i);
}

void BankCustomer::depositToAccount(float depos)
{
    sum = 0;
    Transactions.push_back(depos);
    for (i = 0; i < Transactions.size(); i++) {
        sum += Transactions.at(i);
    }
    balance = sum;


}

void BankCustomer::withdrawFromAccount(float withd)
{
    sum = 0;
    Transactions.push_back(withd);
    for (i = 0; i < Transactions.size(); i++) {
        sum += Transactions.at(i);
    }
    balance = sum;
}

float BankCustomer::getBalance()
{
    sum = 0;

    for (i = 0; i < Transactions.size(); i++) {
        sum += Transactions.at(i);
    }
    return sum;
}


void BankCustomer::printBalance()
{
    balance = getBalance();

    cout << "Current balance: $" << fixed << setprecision(2) << balance << endl;
}

void BankCustomer::printTransactionHistory()
{
    for (i = 0; i < transactionDate.size(); ++i) {
        cout << "Date: " << transactionDate.at(i) << "                                 Activity: "<< "$" << Transactions.at(i)<<endl;
    }
     printBalance();
}


void BankCustomer::printAccountInformation()//Yoannier
{
    getAccountNum();
    getAccountName();
    getAccountDOB();
    getAccountAddress();
    getAccountTelephone();
    getBalance();


    cout<<"Account Num.:       "<<accountNum<<endl;
    cout<<"Customer Name:      "<<Name<<endl;
    cout<<"Date of Birth:      "<<DOB<<endl;
    cout<<"Customer Address:   "<<Address<<endl;
    cout<<"Phone number:       "<<Telephone<<endl;
    cout<<"Current balance:    $"<<fixed<<showpoint<<setprecision(2)<<balance<<endl;
}

void BankCustomer::deleteAccount()//Matthew
{
    accountNum = 0;
    Name = " ";
    DOB = " ";
    Address = " ";
    Telephone = "";
    balance = 0;

    loanID = 0;
    loanPrincipalAmount= 0;
    totalMonths = 0;
    monthlyPayment = 0;
    interestSchoolLoan = 0;
    interestHomeLoan = 0;
    interestPersonalLoan = 0;
    interestAutoLoan = 0;
    monthlyInterestRate = 0;
    totalInterest = 0;
    totalLoan = 0;
    borrowerName = " ";
    borrowerAddress = " ";
    borrowerAge = 0;
    loanCreationDate = " ";

    loanType=" ";

    choice = 0;
    strchoice = "";
    i = 0;
    j =  0;
    good = false;
    sum = 0;

}


void BankCustomer::setLoanID()
{
    srand(time(0));
    loanID = (rand()%1000000 + 1);

}
int BankCustomer::getLoanID()
{
    return loanID;
}

void BankCustomer::setLoanPrincipalAmount(float principal)
{
    loanPrincipalAmount = principal;
}
float BankCustomer::getLoanPrincipalAmount()
{
    return loanPrincipalAmount;
}
float BankCustomer::getTotalInterest()
{
    return totalInterest;
}

float BankCustomer::getMonthlyInterestRate()
{
    return monthlyInterestRate;
}
float BankCustomer::getMonthlyPayment()
{
    return monthlyPayment;
}

void BankCustomer::setBorrowerName(string borName)
{
    borrowerName = borName;
}
string BankCustomer::getBorrowerName()
{
    return borrowerName;
}

void BankCustomer::setBorrowerAddress(string borAddr)
{
    borrowerAddress = borAddr;
}
string BankCustomer::getBorrowerAddress()
{
    return borrowerAddress;
}

void BankCustomer::setBorrowerAge(int borAge)
{
    borrowerAge = borAge;
}
int BankCustomer::getBorrowerAge()
{
    return borrowerAge;
}

int BankCustomer::viewLoanTypes()
{
    cout<<"We do not discriminate based on credit rating! How about that?"<<endl;
    cout<<"     Select from the following: \n     ----------------------\n\n";
    cout<<"1. School Loan\n 2.Auto Loan\n 3. Home Loan\n 4. Personal Loan\n 5. Return\n";


    cout<<"     ";
    cin>>choice;
    cout<<endl;
    return choice;
}
void BankCustomer::printLoanTypeInformation(int type)
{
    if (type ==1 )
    {
        totalMonths = 120.00;
        cout<<"School loans are over a 10 year period. "<<endl;
        interestSchoolLoan = 0.045;
        cout<<"The interest for this loan is: 4.5%"<<endl;
        monthlyInterestRate = interestSchoolLoan/totalMonths;
        cout<<"Monthly interest rate is "<<monthlyInterestRate<<"%"<<endl;
        totalInterest = loanPrincipalAmount * monthlyInterestRate * totalMonths;
        cout<<"Total interest paid for the amount of $"<<loanPrincipalAmount<<" will be $"<<totalInterest<<endl;
        totalLoan = loanPrincipalAmount + totalInterest;
        monthlyPayment = totalLoan/totalMonths;
        cout<<"Minimum monthly payment is: $"<<monthlyPayment<<endl;
        cout<<endl;cout<<endl;

    }
    else if (type == 2)
    {
        totalMonths = 180.00;
        cout<<"Home loans are over a 15 year period. "<<endl;
        interestHomeLoan = 0.0339;
        cout<<"The interest for this loan is: 3.39%"<<endl;
        monthlyInterestRate = interestHomeLoan/totalMonths;
        cout<<"Monthly interest rate is "<<monthlyInterestRate<<"%"<<endl;
        totalInterest = loanPrincipalAmount * monthlyInterestRate * totalMonths;
        cout<<"Total interest paid for the amount of $"<<loanPrincipalAmount<<" will be $"<<totalInterest<<endl;
        totalLoan = loanPrincipalAmount + totalInterest;
        monthlyPayment = totalLoan/totalMonths;
        cout<<"Minimum monthly payment is: $"<<monthlyPayment<<endl;
        cout<<endl;cout<<endl;
    }
    else if (type == 3)
    {
        totalMonths = 48.00;
        cout<<"Auto loans are over a 4 year period. "<<endl;
        interestAutoLoan = 0.065;
        cout<<"The interest for this loan is: 6.5%"<<endl;
        monthlyInterestRate = interestAutoLoan/totalMonths;
        cout<<"Monthly interest rate is "<<monthlyInterestRate<<"%"<<endl;
        totalInterest = loanPrincipalAmount * monthlyInterestRate * totalMonths;
        cout<<"Total interest paid for the amount of $"<<loanPrincipalAmount<<" will be $"<<totalInterest<<endl;
        totalLoan = loanPrincipalAmount + totalInterest;
        monthlyPayment = totalLoan/totalMonths;
        cout<<"Minimum monthly payment is: $"<<monthlyPayment<<endl;
        cout<<endl;cout<<endl;
    }
    else if (type == 4)
    {
        totalMonths = 24.00;
        cout<<"Personal loans are over a 4 year period. "<<endl;
        interestPersonalLoan = 0.198;
        cout<<"The interest for this loan is: 19.8%"<<endl;
        monthlyInterestRate = interestPersonalLoan/totalMonths;
        cout<<"Monthly interest rate is "<<monthlyInterestRate<<"%"<<endl;
        totalInterest = loanPrincipalAmount * monthlyInterestRate * totalMonths;
        cout<<"Total interest paid for the amount of $"<<loanPrincipalAmount<<" will be $"<<totalInterest<<endl;
        totalLoan = loanPrincipalAmount + totalInterest;
        monthlyPayment = totalLoan/totalMonths;
        cout<<"Minimum monthly payment is: $"<<monthlyPayment<<endl;
        cout<<endl;cout<<endl;
    }

}

void BankCustomer::setLoanType(string lotype)
{
    loanType = lotype;
}

string BankCustomer::getLoanType()
{
    return loanType;
}



void BankCustomer::setLoanCreationDate(string loCrDa)
{
    loanCreationDate = loCrDa;
}
string BankCustomer::getLoanCreationDate()
{
    return loanCreationDate;
}

void BankCustomer::setLoanPaymentDate(string payDate)
{
    datesOfLoanPayments.push_back(payDate);
}


void BankCustomer::payLoan(float loanPay)
{
    totalLoan -= loanPay;
    loanPayments.push_back(loanPay);
    loanPay *= -1;
    Transactions.push_back(loanPay);
}

float BankCustomer::getTotalLoan()
{
    return totalLoan;
}
void BankCustomer::deleteLoan()
{
    loanID = 0;
    loanPrincipalAmount= 0;
    totalMonths = 0;
    monthlyPayment = 0;
    interestSchoolLoan = 0;
    interestHomeLoan = 0;
    interestPersonalLoan = 0;
    interestAutoLoan = 0;
    monthlyInterestRate = 0;
    totalInterest = 0;
    totalLoan = 0;
    borrowerName = " ";
    borrowerAddress = " ";
    borrowerAge = 0;
    loanCreationDate = " ";

    loanType=" ";
}
void BankCustomer::printLoanHistory()
{
    cout<<"Loan ID:           "<<loanID<<endl;
    cout<<"Borrower Name:     "<<borrowerName<<endl;
    cout<<"Borrower Age:      "<<borrowerAge<<endl;
    cout<<"Borrower Address:  "<<borrowerAddress<<endl;
    cout<<"Loan Created:      "<<loanCreationDate<<endl;
    cout<<"Principal Amount: $"<<fixed<<showpoint<<setprecision(2)<<loanPrincipalAmount<<endl;
    cout<<"Interest:         $"<<fixed<<showpoint<<setprecision(2)<<totalInterest<<endl;
    cout<<"Total Balance:    $"<<fixed<<showpoint<<setprecision(2)<<totalLoan<<endl;
    cout<<"-----------------------"<<endl;
    cout<<endl;
    if (loanPayments.size()>=1){
        for(i = 0; i< loanPayments.size();++i)
        {
            cout<<"Date:              "<<datesOfLoanPayments.at(i)<<endl;
            cout<<"Payment:           "<<loanPayments.at(i)<<endl;
        }
    }
    cout<<endl; cout<<endl;
}

void BankCustomer::returnDateInfo(string date)
{

    for(i = 0;i<transactionDate.size();++i)
    {
        if (transactionDate.at(i)== date){
            cout<<"Date: "<<transactionDate.at(i);
            cout<<"             Transaction: "<<Transactions.at(i);
            cout<<"             Balance: "<<balance<<endl;

        }

    }


}
void BankCustomer::returnTransInfo(float trans)
{
    for (i = 0; i<Transactions.size();++i)
    {
        if (Transactions.at(i)==trans)
        {
            cout<<"Date: "<<transactionDate.at(i);
            cout<<"             Transaction: $"<<Transactions.at(i);
            cout<<"             Balance: $"<<balance<<endl;
            return;
        }
        else
            cout<<"That amount is not in this account's transaction history."<<endl;


    }
}

void BankCustomer::setTransferDate(string transDate)
{
    transactionDate.push_back(transDate);
}

bool BankCustomer::checkNameForNumber(string input)
{

    for (j = 0 ;j<=input.length()-1;j++)
    {
        switch(input.at(j))
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '!':
            case '@':
            case '#':
            case '$':
            case '%':
            case '^':
            case '&':
            case '*':
            case '(':
            case ')':
            case '-':
            case '=':
            case '_':
            case '+':
            case '~':
            case '`':
            case '{':
            case '[':
            case ']':
            case '}':
            case '\\':
            case '|':
            case ';':
            case ':':
            case '\'':
            case '"':
            case ',':
            case '<':
            case '.':
            case '>':
            case '/':
            case '?':

                return false;
        }

    }
    return true;
}
bool BankCustomer::checkTelephoneNumber(string telephone)//Yoannier
{
    if (telephone.length() != 10) return false;

    for (j= 0; j < telephone.length();j++)
    {
        switch(telephone.at(j))
        {

        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            return false;
            }
    }
    return true;
}

bool BankCustomer::checkDate(string date)
{

    if (date.size() != 8)
        return false;

    if (date.at(2) != '\\' || date.at(5) != '\\')
        return false;

    for (i = 0; i < date.size(); ++i) {
        if (i == 2 || i == 5)
            continue;

        switch (date.at(i)) {

        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            return false;
            }
    }
    return true;
}
