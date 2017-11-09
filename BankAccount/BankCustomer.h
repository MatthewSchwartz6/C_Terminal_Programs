#ifndef BANKCUSTOMER_H
#define BANKCUSTOMER_H

#include <string>
using namespace std;
class BankCustomer
{
public:
    BankCustomer();
    //Yoannier
    void createAccountNum();
    int getAccountNum();

    void setAccountName(string);
    string getAccountName();

    void setAccountDOB(string);
    string getAccountDOB();

    void setAccountAddress(string);
    string getAccountAddress();

    void setAccountTelephone(string);
    string getAccountTelephone();


    void setTransactionDate(string);
    void getTransactionDate();


    void depositToAccount(float);


    void withdrawFromAccount(float);

    float getBalance();



    void printBalance();

    void printTransactionHistory();


    void printAccountInformation();
    //Matthew
    void deleteAccount();


    void setLoanID();
    int getLoanID();

    void setLoanPrincipalAmount(float);
    float getLoanPrincipalAmount();
    float getTotalInterst();

    void setBorrowerName(string);
    string getBorrowerName();

    void setBorrowerAddress(string);
    string getBorrowerAddress();

    void setBorrowerAge(int);
    int getBorrowerAge();

    void printLoanTypeInformation(int type);//

    void setLoanType(string);

    string getLoanType();
    int viewLoanTypes();


    void setLoanCreationDate(string);
    string getLoanCreationDate();
    float getTotalInterest();
    float getMonthlyInterestRate();
    float getMonthlyPayment();
    void setLoanPaymentDate(string);
    string getLoanPaymentDate();
    float getTotalLoan();
    void deleteLoan();

    void payLoan(float);

    void printLoanHistory();
    void returnDateInfo(string);
    void returnTransInfo(float);
    void setTransferDate(string);

    bool checkNameForNumber(string);
    bool checkTelephoneNumber(string);
    bool checkDate(string);




private:
    int accountNum;
    string Name;
    string DOB;
    string Address;
    string Telephone;

    vector<float> Transactions;
    vector<string> transactionDate;
    float balance;

    int loanID;
    float loanPrincipalAmount;

    float totalMonths;
    float totalInterest;
    float interestSchoolLoan;
    float interestHomeLoan;
    float interestPersonalLoan;
    float interestAutoLoan;
    float monthlyInterestRate;
    float totalLoan;
    float monthlyPayment;

    string borrowerName;
    string borrowerAddress;
    int borrowerAge;
    string loanCreationDate;
    string loanType;

    vector<string> datesOfLoanPayments;
    vector<float> loanPayments;

    vector<string> transferDates;

    int choice;
    string strchoice;
    int i;
    unsigned int j;
    bool good;
    float sum;



};

#endif // BANKCUSTOMER_H
