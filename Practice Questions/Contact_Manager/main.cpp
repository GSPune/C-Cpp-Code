#include "contactManager.cpp"

using namespace std;

int main(void)
{
    ContactManager cm;
    cm.Add("Solomon","King",7403109602,"solman23@oops");

    int choice;
    cout << "***************************************\n";
    cout << "1.Add new user to contacts!\n";
    cout << "2.List out all the contacts.\n";
    cout << "3.Edit User details.\n";
    cout << "4.Remove User from contacts.\n";
    cout << "5.Seach for a User by First Name.\n";
    cout << "6.Seach for a User by Email.\n";
    cout << "7.Seach for a User by Number.\n";
    cout << "8.Backup all the contacts in a file.\n";
    cout << "9.Restore contacts from a file.\n";
    cout << "10.Exit this menu!\n";
    cout << "***************************************\n";

    do{
        cout << "\nEnter your choice:\n";
        cin >> choice ;
        switch(choice)
        {
            case 1:
                {
                    //cout << "Add new user to contacts!\n";
                    cm.Add();
                    break;
                }
            case 2:
                {
                    cm.ListAllContacts();
                    break;
                }
            case 3:
                {
                    cm.Edit();
                    break;
                }
            case 4:
                {
                    cm.removeUser();
                    break;
                }
            case 5:
                {
                    cm.searchName();
                    break;
                }
            case 6:
                {
                    cm.searchEmail();
                    break;
                }
            case 7:
                {
                    cm.searchNumber();
                    break;
                }
            case 8:
                {
                    cm.backUp();
                    break;
                }
            case 9:
                {
                    cm.restore();
                    break;
                }
            case 10:
                {
                    cout << "....Exiting the program!....\n";
                    break;
                }
            default:
            {
                cout << "Invalid choice!\n";
            }
        }
    }
    while(choice != 10);
    return 0;
}