#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int messagecount=0;
int messagecount2=0;
string message[100];
string message2[100];
int hotsize = 10;
string hotCurrencies[] = {"Bitcoin     ", "Ethereum    ", "Binance Coin", "Ripple      ", "Cardano     ",
                          "Solana      ", "Dogecoin    ", "Polkadot    ", "Litecoin    ", "Chainlink   "};
double hotPrices[] = {27000.00, 1800.00, 240.00, 0.50, 0.30, 20.00, 0.07, 4.00, 85.00, 7.00};
int gainersize = 10;
string gainerCurrencies[] = {"Bitcoin     ", "Ethereum    ", "Solana      ", "Binance Coin", "Polkadot",
                             "Ripple      ", "Cardano     ", "Dogecoin    ", "Litecoin    ", "Chainlink   "};
double gainerPrices[] = {27000.00, 1800.00, 20.00, 240.00, 4.00, 0.50, 0.30, 0.07, 85.00, 7.00};
int losersize = 10;
string loserCurrencies[] = {"Shiba Inu   ", "Cosmos      ", "Tron        ", "Tezos       ", "Monero      ",
                            "EOS         ", "NEO         ", "Stellar     ", "Avalanche   ", "Polygon     "};
double loserPrices[] = {0.00001, 10.00, 0.08, 0.90, 150.00, 0.70, 8.00, 0.09, 15.00, 0.70};
int allsize = 20;
string allCurrencies[] = {"Bitcoin     ", "Ethereum    ", "Binance Coin", "Ripple      ", "Cardano     ", "Solana      ", "Dogecoin    ",
                          "Polkadot    ", "Litecoin    ", "Chainlink   ", "Shiba Inu   ", "Cosmos      ", "Tron        ", "Tezos       ", "Monero      ",
                          "EOS       ", "NEO         ", "Stellar     ", "Avalanche   ", "Polygon     "};
double allPrices[] = {27000.00, 1800.00, 240.00, 0.50, 0.30, 20.00, 0.07, 4.00, 85.00, 7.00,
                      0.00001, 10.00, 0.08, 0.90, 150.00, 0.70, 8.00, 0.09, 15.00, 0.70};
int newsize = 5;
string newCurrencies[] = {"Shiba Inu   ", "Cosmos      ", "Tezos       ", "Monero      ", "EOS         "};
double newPrices[] = {0.00001, 10.00, 0.08, 150.00, 0.70};

struct node
{

    string username;
    string password;
    double balance;
    double Bitcoin;
    double Ethereum = 0.0;
    double BinanceCoin = 0.0;
    double Ripple = 0.0;
    double Cardano = 0.0;
    double Solana = 0.0;
    double Dogecoin = 0.0;
    double Polkadot = 0.0;
    double Litecoin = 0.0;
    double Chainlink = 0.0;
    double ShibaInu = 0.0;
    double Cosmos = 0.0;
    double Tron = 0.0;
    double Tezos = 0.0;
    double Monero = 0.0;
    double EOS = 0.0;
    double NEO = 0.0;
    double Stellar = 0.0;
    double Avalanche = 0.0;
    double Polygon = 0.0;
    node *next;
};
// Class for handling Markets
class Market
{
public:
    void displayHotCurrencies()
    {
        cout << "Name\t\tPrice\n";
        for (int i = 0; i < hotsize; i++)
        {
            cout << hotCurrencies[i] << "\t$" << hotPrices[i] << endl;
        }
    }

    void displayGainerCurrencies()
    {
        cout << "Name\t\tPrice\n";
        for (int i = 0; i < gainersize; i++)
        {
            cout << gainerCurrencies[i] << "\t$" << gainerPrices[i] << endl;
        }
    }

    void displayLoserCurrencies()
    {
        cout << "Name\t\tPrice\n";
        for (int i = 0; i < losersize; i++)
        {
            cout << loserCurrencies[i] << "\t$" << loserPrices[i] << endl;
        }
    }

    void displayAllCurrencies()
    {
        cout << "Name\t\tPrice\n";
        for (int i = 0; i < allsize; i++)
        {
            cout << allCurrencies[i] << "\t$" << allPrices[i] << endl;
        }
    }

    void displayNewCurrencies()
    {
        cout << "Name\t\tPrice\n";
        for (int i = 0; i < newsize; i++)
        {
            cout << newCurrencies[i] << "\t$" << newPrices[i] << endl;
        }
    }
    void showMarkets()
    {

        int choice;
        do
        {
            system("cls");
            cout << "\n=== Markets ===\n";
            cout << "1. Hot Currencies\n";
            cout << "2. New Currencies\n";
            cout << "3. Gainer Currencies\n";
            cout << "4. Loser Currencies\n";
            cout << "5. All Currencies\n";
            cout << "6. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {

            case 1:
                cout << "-----Displaying Hot Currencies-----\n";
                displayHotCurrencies();
                break;

            case 2:
                cout << "-----Displaying New Currencies-----\n";
                displayNewCurrencies();
                break;
            case 3:

                cout << "-----Displaying Gainer Currencies-----\n";
                displayGainerCurrencies();
                break;
            case 4:

                cout << "-----Displaying Loser Currencies-----\n";
                displayLoserCurrencies();
                break;
            case 5:
                cout << "-----Displaying All Currencies-----\n";
                displayAllCurrencies();
                break;
            case 6:
                cout << "Exciting\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
            }
            system("pause");
        } while (choice != 6);
    }
};

// Class for handling Orders
class Order
{
public:
    void showOrders()
    {
        int choice;
        do
        {
            system("cls");
            cout << "\n=== Orders History ===\n";
            cout << "1. Buying History\n";
            cout << "2. Selling History\n";
            cout << "3. Back\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "-----Buying History-----\n";
                for(int i=0;i<messagecount;i++){
                    cout<<message[i]<<endl;
                }
                break;
            case 2:
                cout << "-----Selling History-----\n";
                for(int i=0;i<messagecount2;i++){
                    cout<<message2[i]<<endl;
                }
                break;
            case 3:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
            }
            system("pause");
        } while (choice != 3);
    }
};

// Class for handling Account functionalities
class Account
{
public:
    node *head;
    node *tail;
    Account()
    {
        head = NULL;
        tail = NULL;
    }
    node *temp = new node;
    void registeraccount()
    {
        cout << "Enter Username\n";
        cin >> temp->username;
        cout << "Enter Password\n";
        cin >> temp->password;
        temp->balance = 0.0;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    int searchaccount()
    {
        node *temp = head;
        string user, pass;
        int f = 0;
        cout << "Enter Username\n";
        cin >> user;
        cout << "Enter Password\n";
        cin >> pass;
        while (temp != NULL)
        {
            if (temp->username == user)
            {
                if (temp->password == pass)
                {
                    f = 1;
                    break;
                }
            }
            temp = temp->next;
        }
        if (f == 1)
        {
            cout << "Account Found\n";
            return 1;
        }
        else
        {
            cout << "Username or Password Incorrect\n";
            return 0;
        }
    }

    void showprofile()
    {
        cout << "Username:\t" << temp->username << endl;
        cout << "Password:\t" << temp->password << endl;
        cout << "Account Balance:\t" << temp->balance << endl;
    }

    void deposit()
    {
        double amount;
        int f = 0;
        string pass;
        cout << "Enter the amount you want to deposit\n";
        cin >> amount;
        cout << "Enter your password For confirmation\n";
        cin >> pass;
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->password == pass)
            {
                temp->balance += amount;
                cout << "Deposited $" << amount << " into " << temp->username << "'s account\n";
                f = 1;
                break;
            }
            temp = temp->next;
        }
        if (f == 0)
        {
            cout << "Wrong Password\n";
        }
    }
    void withdraw()
    {
        double amount;
        int f = 0;
        string pass;
        cout << "Enter the Amount to Withdraw\n";
        cin >> amount;
        cout << "Enter your password For confirmation\n";
        cin >> pass;
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->username == pass)
            {
                if (temp->balance >= amount)
                {
                    temp->balance -= amount;
                    cout << "Withdrew $" << amount << " from " << temp->username << "'s account\n";
                    f = 1;
                }
                else
                {
                    cout << "Insufficient balance\n";
                    f = 1;
                }
                break;
            }
            temp = temp->next;
        }

        if (f == 0)
        {
            cout << "Wrong Password\n";
        }
    }
    void deleteaccount()
    {
        node *temp = head;
        node *pre = head;
        string user, pass;
        cout << "Enter Username\n";
        cin >> user;
        cout << "Enter Password\n";
        cin >> pass;
        while (temp != NULL)
        {
            if (temp->username == user && temp->password == pass)
            {
                break;
            }
            temp = temp->next;
        }
        while (pre != NULL)
        {
            if (pre->next == tail)
            {
                break;
            }
            else if (pre->next == temp)
            {
                break;
            }
            pre = pre->next;
        }
        if (temp == head)
        {
            head = head->next;
            delete temp;
            cout << "Account Deleted Successfully\n";
        }
        else if (temp == tail)
        {
            tail = pre;
            delete temp;
            tail->next = NULL;
            cout << "Account Deleted Successfully\n";
        }
        else if (temp == NULL)
        {
            cout << "Account with this Information not found\n";
        }
        else
        {
            pre->next = temp->next;
            delete temp;
            cout << "Account Deleted Successfully\n";
        }
    }
    void changepassword()
    {
        string neww, old;
        int f = 0;
        cout << "Enter your Old Password\n";
        cin >> old;
        cout << "Enter your New Password\n";
        cin >> neww;
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->password == old)
            {
                temp->password = neww;
                f = 1;
                break;
            }
            temp = temp->next;
        }
        if (f == 1)
        {
            cout << "Password changed\n";
        }
        else
        {
            cout << "Your Old Password is wrong\n";
        }
    }
    void showAccount()
    {
        int choice;

        do
        {
            system("cls");
            cout << "\n=== Account Management===\n";
            cout << "1. View Profile\n";
            cout << "2. Change Password\n";
            cout << "3. Delete Account\n";
            cout << "4. Back\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:

                cout << "-----Profile-----\n";

                showprofile();
                break;
            case 2:

                cout << "-----Changing Password-----\n";
                changepassword();
                break;
            case 3:
                cout << "-----Delete Account-----\n";
                deleteaccount();
                break;
            case 4:
                cout << "Returning to main menu...\n";

                break;
            default:
                cout << "Invalid choice, please try again.\n";
            }
            system("pause");
        } while (choice != 4);
    }

    void showWallet()
    {
        int choice;
        do
        {
            system("cls");
            cout << "\n=== Wallet ===\n";
            cout << "1. View Balance\n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout << "4. Back\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "-----Viewing Balance-----\n";
                cout << "Balance:\t$" << temp->balance << endl;
                if (temp->Bitcoin > 0)
                {
                    cout << "Bitcoin: " << temp->Bitcoin << endl;
                }
                if (temp->Ethereum > 0)
                {
                    cout << "Ethereum: " << temp->Ethereum << endl;
                }
                if (temp->BinanceCoin > 0)
                {
                    cout << "Cardano: " << temp->BinanceCoin << endl;
                }
                if (temp->Ripple > 0)
                {
                    cout << "Ripple: " << temp->Ripple << endl;
                }
                if (temp->Cardano > 0)
                {
                    cout << "Cardano: " << temp->Cardano << endl;
                }
                if (temp->Solana > 0)
                {
                    cout << "Dogecoin: " << temp->Solana << endl;
                }

                if (temp->Dogecoin > 0)
                {
                    cout << "Dogecoin: " << temp->Dogecoin << endl;
                }
                if (temp->Polkadot > 0)
                {
                    cout << "Polkadot: " << temp->Polkadot << endl;
                }

                if (temp->Litecoin > 0)
                {
                    cout << "Litecoin: " << temp->Litecoin << endl;
                }

                if (temp->Chainlink > 0)
                {
                    cout << "Chainlink: " << temp->Chainlink << endl;
                }

                if (temp->ShibaInu > 0)
                {
                    cout << "Shiba Inu: " << temp->ShibaInu << endl;
                }

                if (temp->Cosmos > 0)
                {
                    cout << "Cosmos: " << temp->Cosmos << endl;
                }

                if (temp->Tron > 0)
                {
                    cout << "Tron: " << temp->Tron << endl;
                }

                if (temp->Tezos > 0)
                {
                    cout << "Tezos: " << temp->Tezos << endl;
                }

                if (temp->Monero > 0)
                {
                    cout << "Monero: " << temp->Monero << endl;
                }

                if (temp->EOS > 0)
                {
                    cout << "EOS: " << temp->EOS << endl;
                }

                if (temp->NEO > 0)
                {
                    cout << "NEO: " << temp->NEO << endl;
                }

                if (temp->Stellar > 0)
                {
                    cout << "Stellar: " << temp->Stellar << endl;
                }

                if (temp->Avalanche > 0)
                {
                    cout << "Avalanche: " << temp->Avalanche << endl;
                }

                if (temp->Polygon > 0)
                {
                    cout << "Polygon: " << temp->Polygon << endl;
                }

                break;
            case 2:
                cout << "-----Deposite Fund-----\n";
                deposit();
                break;
            case 3:
                cout << "-----Withdraw Fund-----\n";
                withdraw();
                break;
            case 4:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
            }
            system("pause");
        } while (choice != 4);
    }

    void buy()
    {
        int choice;

        do
        {
            cout << "Select the cryptocurrency you want to buy:" << endl;
            cout << "1. Bitcoin" << endl;
            cout << "2. Ethereum" << endl;
            cout << "3. Binance Coin" << endl;
            cout << "4. Ripple" << endl;
            cout << "5. Cardano" << endl;
            cout << "6. Solana" << endl;
            cout << "7. Dogecoin" << endl;
            cout << "8. Polkadot" << endl;
            cout << "9. Litecoin" << endl;
            cout << "10. Chainlink" << endl;
            cout << "11. Shiba Inu" << endl;
            cout << "12. Cosmos" << endl;
            cout << "13. Tron" << endl;
            cout << "14. Tezos" << endl;
            cout << "15. Monero" << endl;
            cout << "16. EOS" << endl;
            cout << "17. NEO" << endl;
            cout << "18. Stellar" << endl;
            cout << "19. Avalanche" << endl;
            cout << "20. Polygon" << endl;
            cout << "21. Exit\n";
            cout << "Enter your choice (1-21): \n";

            cin >> choice;
            string pass;
            int quantity = 0;
            int f = 0;
            double total;
            node *temp = head;

            system("cls");
            switch (choice)
            {
            case 1:

                cout << "You selected Bitcoin." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[0];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Bitcoin += quantity;
                            temp->balance -= total;
                            cout << quantity << " Bitcoin Added in " << temp->username << "'s Account" << endl;
                           message[messagecount++]= to_string(quantity) + " Bitcoin Added in " + temp->username + "'s Account";
                           
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {

                    cout << "Insufficent Balance or Wrong Password\n";
                }

                break;
            case 2:
                cout << "You selected Ethereum." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[1];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Ethereum += quantity;
                            temp->balance -= total;
                            cout << quantity << " Ethereum Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Ethereum Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 3:
                cout << "You selected Binance Coin." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[2];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->BinanceCoin += quantity;
                            temp->balance -= total;
                            cout << quantity << " Binance Coin Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Binance Coin Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 4:
                cout << "You selected Ripple." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[3];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Ripple += quantity;
                            temp->balance -= total;
                            cout << quantity << " Ripple Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Ripple Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 5:
                cout << "You selected Cardano." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[4];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Cardano += quantity;
                            temp->balance -= total;
                            cout << quantity << " Cardano Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Cardano Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 6:
                cout << "You selected Solana." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[5];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Solana += quantity;
                            temp->balance -= total;
                            cout << quantity << " Solana Added in " << temp->username << "'s Account" << endl;
                             message[messagecount++] = to_string(quantity) + " Solana Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 7:
                cout << "You selected Dogecoin." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[6];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Dogecoin += quantity;
                            temp->balance -= total;
                            cout << quantity << " Dogecoin Added in " << temp->username << "'s Account" << endl;
                           message[messagecount++] = to_string(quantity) + " Dogecoin Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 8:
                cout << "You selected Polkadot." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[7];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Polkadot += quantity;
                            temp->balance -= total;
                            cout << quantity << " Polkadot Added in " << temp->username << "'s Account" << endl;
                           message[messagecount++] = to_string(quantity) + " Polkadot Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 9:
                cout << "You selected Litecoin." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[8];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Litecoin += quantity;
                            temp->balance -= total;
                            cout << quantity << " Litecoin Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Litecoin Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 10:
                cout << "You selected Chainlink." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[9];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Chainlink += quantity;
                            temp->balance -= total;
                            cout << quantity << " Chainlink Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Chainlink Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 11:
                cout << "You selected Shiba Inu." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[10];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->ShibaInu += quantity;
                            temp->balance -= total;
                            cout << quantity << " Shiba Inu Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Shiba Inu Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 12:
                cout << "You selected Cosmos." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[11];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Cosmos += quantity;
                            temp->balance -= total;
                            cout << quantity << " Cosmos Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Cosmos Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 13:
                cout << "You selected Tron." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[12];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Tron += quantity;
                            temp->balance -= total;
                            cout << quantity << " Tron Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Tron Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 14:
                cout << "You selected Tezos." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[13];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Tezos += quantity;
                            temp->balance -= total;
                            cout << quantity << " Tezos Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Tezos Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 15:
                cout << "You selected Monero." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[14];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Monero += quantity;
                            temp->balance -= total;
                            cout << quantity << " Monero Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Monero Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 16:
                cout << "You selected EOS." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[15];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->EOS += quantity;
                            temp->balance -= total;
                            cout << quantity << " EOS Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " EOS Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 17:
                cout << "You selected NEO." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[16];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->NEO += quantity;
                            temp->balance -= total;
                            cout << quantity << " NEO Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " NEO Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 18:
                cout << "You selected Stellar." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[17];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Stellar += quantity;
                            temp->balance -= total;
                            cout << quantity << " Stellar Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Stellar Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 19:
                cout << "You selected Avalanche." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[18];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Avalanche += quantity;
                            temp->balance -= total;
                            cout << quantity << " Avalanche Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Avalanche Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 20:
                cout << "You selected Polygon." << endl;
                cout << "Enter the Quantity to buy\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                total = quantity * allPrices[19];
                if (temp == NULL)
                {
                    cout << "No users available in the system." << endl;
                    break;
                }

                while (temp != NULL)
                {
                    if (temp->password == pass)
                    {
                        if (temp->balance >= total)
                        {
                            temp->Polygon += quantity;
                            temp->balance -= total;
                            cout << quantity << " Polygon Added in " << temp->username << "'s Account" << endl;
                            message[messagecount++] = to_string(quantity) + " Polygon Added in " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if (f == 0)
                {
                    cout << "Insufficient Balance or Wrong Password\n";
                }
                break;

            case 21:
                cout << "Exiting\n";
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
            system("pause");
        } while (choice != 21);
    }

    void sell()
    {
        int choice;
        do{
            system("cls");
        cout << "1. Bitcoin: " << temp->Bitcoin << endl;
        cout << "2. Ethereum: " << temp->Ethereum << endl;
        cout << "3. Binance Coin: " << temp->BinanceCoin << endl;
        cout << "4. Ripple: " << temp->Ripple << endl;
        cout << "5. Cardano: " << temp->Cardano << endl;
        cout << "6. Solana: " << temp->Solana << endl;
        cout << "7. Dogecoin: " << temp->Dogecoin << endl;
        cout << "8. Polkadot: " << temp->Polkadot << endl;
        cout << "9. Litecoin: " << temp->Litecoin << endl;
        cout << "10. Chainlink: " << temp->Chainlink << endl;
        cout << "11 Shiba Inu: " << temp->ShibaInu << endl;
        cout << "12. Cosmos: " << temp->Cosmos << endl;
        cout << "13. Tron: " << temp->Tron << endl;
        cout << "14. Tezos: " << temp->Tezos << endl;
        cout << "15. Monero: " << temp->Monero << endl;
        cout << "16. EOS: " << temp->EOS << endl;
        cout << "17. NEO: " << temp->NEO << endl;
        cout << "18. Stellar: " << temp->Stellar << endl;
        cout << "19. Avalanche: " << temp->Avalanche << endl;
        cout << "20. Polygon: " << temp->Polygon << endl;
        cout << "21. Exit\n";
        cout << "Enter your choice\n";
        cin >> choice;
        node *temp=head;
        double quantity;
        string pass;
        int f=0;
        switch(choice){
            case 1:
            cout<<"You selected Bitcoin\n";
            cout<<"Enter the amount you want to sell\n";
            cin>>quantity;
            cout<<"Enter your Password for confirmation\n";
            cin>>pass;
        while(temp!=NULL){
            if(temp->password==pass){
                if(temp->Bitcoin>=quantity){
                    temp->balance +=  allPrices[0];
                    cout<<quantity<<" Bitcoin Sold from "<<temp->username<<"'S Account"<<endl;
                    message2[messagecount2++]= to_string(quantity) + " Bitcoin Sold from " + temp->username + "'s Account";

                    f=1;
                    break;
                }
            }temp=temp->next;
        }
        if(f==0){
            cout<<"Wrong Password or Insufficient balance \n";
        }
        break;
                    case 2:
                cout << "You selected Ethereum\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Ethereum >= quantity) {
                            temp->Ethereum -= quantity;
                            temp->balance += (quantity * allPrices[1]);
                            cout << quantity << " Ethereum Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Ethereum Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 3:
                cout << "You selected Binance Coin\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->BinanceCoin >= quantity) {
                            temp->BinanceCoin -= quantity;
                            temp->balance += (quantity * allPrices[2]);
                            cout << quantity << " Binance Coin Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Binance Coin Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 4:
                cout << "You selected Ripple\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Ripple >= quantity) {
                            temp->Ripple -= quantity;
                            temp->balance += (quantity * allPrices[3]);
                            cout << quantity << " Ripple Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Ripple Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 5:
                cout << "You selected Cardano\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Cardano >= quantity) {
                            temp->Cardano -= quantity;
                            temp->balance += (quantity * allPrices[4]);
                            cout << quantity << " Cardano Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Cardano Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 6:
                cout << "You selected Solana\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Solana >= quantity) {
                            temp->Solana -= quantity;
                            temp->balance += (quantity * allPrices[5]);
                            cout << quantity << " Solana Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Solana Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 7:
                cout << "You selected Dogecoin\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Dogecoin >= quantity) {
                            temp->Dogecoin -= quantity;
                            temp->balance += (quantity * allPrices[6]);
                            cout << quantity << " Dogecoin Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Dogecoin Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 8:
                cout << "You selected Polkadot\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Polkadot >= quantity) {
                            temp->Polkadot -= quantity;
                            temp->balance += (quantity * allPrices[7]);
                            cout << quantity << " Polkadot Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Polkadot Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 9:
                cout << "You selected Litecoin\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Litecoin >= quantity) {
                            temp->Litecoin -= quantity;
                            temp->balance += (quantity * allPrices[8]);
                            cout << quantity << " Litecoin Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Litecoin Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
 case 10:
                cout << "You selected Chainlink\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Chainlink >= quantity) {
                            temp->Chainlink -= quantity;
                            temp->balance += (quantity * allPrices[9]);
                            cout << quantity << " Chainlink Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Chainlink Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 11:
                cout << "You selected Shiba Inu\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->ShibaInu >= quantity) {
                            temp->ShibaInu -= quantity;
                            temp->balance += (quantity * allPrices[10]);
                            cout << quantity << " Shiba Inu Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Shiba Inu Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 12:
                cout << "You selected Cosmos\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Cosmos >= quantity) {
                            temp->Cosmos -= quantity;
                            temp->balance += (quantity * allPrices[11]);
                            cout << quantity << " Cosmos Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Cosmos Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 13:
                cout << "You selected Tron\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Tron >= quantity) {
                            temp->Tron -= quantity;
                            temp->balance += (quantity * allPrices[12]);
                            cout << quantity << " Tron Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Tron Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 14:
                cout << "You selected Tezos\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Tezos >= quantity) {
                            temp->Tezos -= quantity;
                            temp->balance += (quantity * allPrices[13]);
                            cout << quantity << " Tezos Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Tezos Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        }
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 15:
                cout << "You selected Monero\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Monero >= quantity) {
                            temp->Monero -= quantity;
                            temp->balance += (quantity * allPrices[14]);
                            cout << quantity << " Monero Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Monero Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 16:
                cout << "You selected EOS\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->EOS >= quantity) {
                            temp->EOS -= quantity;
                            temp->balance += (quantity * allPrices[15]);
                            cout << quantity << " EOS Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " EOS Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 17:
                cout << "You selected NEO\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->NEO >= quantity) {
                            temp->NEO -= quantity;
                            temp->balance += (quantity * allPrices[16]);
                            cout << quantity << " NEO Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " NEO Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 18:
                cout << "You selected Stellar\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Stellar >= quantity) {
                            temp->Stellar -= quantity;
                            temp->balance += (quantity * allPrices[17]);
                            cout << quantity << " Stellar Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Stellar Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 19:
                cout << "You selected Avalanche\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Avalanche >= quantity) {
                            temp->Avalanche -= quantity;
                            temp->balance += (quantity * allPrices[18]);
                            cout << quantity << " Avalanche Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Avalanche Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
            case 20:
                cout << "You selected Polygon\n";
                cout << "Enter the amount you want to sell\n";
                cin >> quantity;
                cout << "Enter your Password for confirmation\n";
                cin >> pass;
                while(temp != NULL) {
                    if(temp->password == pass) {
                        if(temp->Polygon >= quantity) {
                            temp->Polygon -= quantity;
                            temp->balance += (quantity * allPrices[19]);
                            cout << quantity << " Polygon Sold from " << temp->username << "'s Account" << endl;
                            message2[messagecount2++] = to_string(quantity) + " Polygon Sold from " + temp->username + "'s Account";
                            f = 1;
                            break;
                        } 
                    }
                    temp = temp->next;
                }
                if(f == 0) {
                    cout << "Wrong Password or Insufficient balance \n";
                }
                break;
        case 21:
        cout<<"Exiting\n";
        break;
        default:
        cout<<"Invalid choice\n";
        }
        system("pause");
    }
    while(choice!=21);
    }

    void showTrading()
    {
        int choice;
        do
        {
            system("cls");
            cout << "\n=== Trading ===\n";
            cout << "1. Buy Coin\n";
            cout << "2. Sell Coin\n";
            cout << "3. Back\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "-----Buy Coin-----\n";
                buy();
                break;
            case 2:
                 cout << "-----Sell Coin-----\n";
                 sell();
                break;
            case 3:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
            }
            system("pause");
        } while (choice != 3);
    }
};

class Exchange
{
private:
    Market market;
    Order order;
    Account account;

public:
    void showlogin()
    {
        int choice;
        do
        {
            system("cls");
            cout << "\n=== Crypto Exchange Login Page ===\n";
            cout << "1. Sign up\n";
            cout << "2. Login\n";
            cout << "3. Explore as Guest\n";
            cout << "4. Exit\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "-----Welcome to Sign up-----\n";
                account.registeraccount();
                cout << "Account Sign up Successfully\n";
                cout << "Now go to Login\n";
                break;
            case 2:
                cout << "-----Welcome to Login-----\n";
                if (account.searchaccount() == 1)
                {
                    showMainMenu();
                };

                break;
            case 3:
                market.showMarkets();
                break;
            case 4:
                cout << "Exiting...\n";

                break;
            default:
                cout << "Invalid choice, please try again.\n";
            }
            system("pause");
        } while (choice != 4);
    }
    void showMainMenu()
    {
        int choice;
        do
        {
            system("cls");
            cout << "\n=== Crypto Exchange App ===\n";
            cout << "1. Account Management\n";
            cout << "2. Wallet\n";
            cout << "3. Market\n";
            cout << "4. Trading\n";
            cout << "5. Order History\n";
            cout << "6. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                account.showAccount();
                break;
            case 2:
                account.showWallet();
                break;
            case 3:
                market.showMarkets();
                break;
            case 4:
                account.showTrading();
                break;
            case 5:
                order.showOrders();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
            }
            system("pause");
        } while (choice != 6);
    }
};

int main()
{
    Exchange exchange;
    exchange.showlogin();
    return 0;
}
