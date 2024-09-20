#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    long long accnumber;
    long long amount = 0;
    long long tot = 0;

public:
    void setvalue() {
        cout << "Enter Account number\n";
        cin >> accnumber;
    }

    void showdata() {
        cout << "Account No: " << accnumber << endl;
    cout << "Balance: " << tot << endl;
    }

    void deposit() {
        cout << "Enter amount to be Deposited"<<endl;
        cin >> amount;
        tot += amount;
        amount = 0;
    }
    void withdrawl() {
        long long withdrawAmount;
        cout << "Enter amount to withdraw";
        cin >> withdrawAmount;
        if (withdrawAmount > tot) {
            cout << "Insufficient balance";
        } else {
            tot -= withdrawAmount;
            cout << "Available Balance is: " << tot << endl;
        }
    }
};


class Customer {
public:
  string n1, n = "vaibhav";
  long p1, p = 123456;

};
void clearConsole() {
    cout << "\033[H\033[J";
}
void bankings(){
      Bank b; 
    int choice; 

    while (1) {
    cout << "Enter Your Choice"<<endl;
cout << "1. Enter/Setup Account number"<<endl;
  cout << "2. Balance Enquiry"<<endl;
   cout << "3. Deposit Money"<<endl;
    cout << "4. Withdraw Money"<<endl;
      cout << "5. Cancel"<<endl;
 cin >> choice;
        switch (choice) {
        case 1:
            b.setvalue(); 
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit(); 
            break;
        case 4:
             b.withdrawl(); 
            break;
        case 5:
            exit(0); 
            break;
        default:
            cout << "Invalid choice"<<endl; 
        }
    }
}
void printheading() {
  cout << endl;
  cout << "          Bank Of UCER" << endl;
  cout << "     Thankyou For Choosing us!" << endl;
  cout << endl;
}

void login(string n, int p){
Customer c1;
c1.n1=n;
c1.p1=p;
string na;
int pa;
  cout<<"    Login"<<endl;
  cout << "Enter Your Name : ";
  cin >> na;
  cout << "Enter Your Password : ";
  cin >> pa;
    if (c1.n1 == na && c1.p1 == pa){
      cout << "Login Successfull !";
int t;
cin>>t;
      clearConsole();
      bankings();
}
else {
      cout << "Name/Password incorrect";
  }
}

int new_account() {
  cout << endl;
  string n;
  int p, pp;
  cout << "Enter Your Name : ";
  cin >> n;
  cout << "Enter Your Password : ";
  cin >> p;
  cout << "Re-enter Your Password : ";
  cin >> pp;
  if (p == pp) {
    
    cout << "Account Created Successfully !";
    cout<<endl;
    cout << endl;
    login(n, p);
  }
 else {
    cout << "Something went wrong!" << endl;
    new_account();
  }
  return 0;
}

int main() {
  printheading();
    int a;
    char p,d='y';
    cout << "1. Customer Login" << endl;
    cout << "2. New Account" << endl;
    cout << "3. Close" << endl;
    cout<<"-> ";
    cin >> a;
    switch (a) {
    case 1:
      cout << "*";
      cout<<"Do you Have Account ? (y/n)";
      cin>>p;
      if (p==d){
int ps;
string nam;
Customer c1;
    cout<<"Enter Your Name : ";
cin>>nam;
cout<<"Enter Your Password :  ";
cin>>ps;
if (nam==c1.n && ps==c1.p)
{
      cout << "Login Successfull !";
int t;
cin>>t;
      clearConsole();
      bankings();
}
else
  {
      cout << "Name/Password incorrect";
  main();
  }

      }
      else 
        main();
      break;
    case 2:
      cout << "*";
      new_account();
      break;
    case 3:
      break;
   }
 return 0;
}
