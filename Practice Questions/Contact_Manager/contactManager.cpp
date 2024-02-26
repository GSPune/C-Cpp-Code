#include "contactManager.hpp"
#include <bits/stdc++.h>
using namespace std;

ContactManager::ContactManager()
{
    // firstName = "John";
    // lastName = "Doe";
    // number = 9999999999;
    // email = "johndoe@gmail.com";
}

/**
(This is Java Doc)
*@brief Function to add a new user
*
*@param First Name
*@param Last Name
*@param Number
*@param Email
*
*/
void ContactManager::Add(string firstName, string lastName, ulong number, string email)
{
    data tmp;
    tmp.firstName = firstName;
    tmp.lastName = lastName;
    tmp.number = number;
    tmp.email = email;

    info.push_back(tmp);
}

void ContactManager::Add()
{
    string fn,ln,em;ulong num;
    data tmp;
    cout << "Enter the details for the user as prompted!\n";
    cout << "First Name: " ;
    cin >> fn ;
    cout << "Last Name: ";
    cin >> ln;
    cout << "Mobile Number: ";
    cin >> num;
    cout << "Email: ";
    cin >> em;

    tmp.firstName = fn;
    tmp.lastName = ln;
    tmp.number = num;
    tmp.email = em;

    info.push_back(tmp);
}

void ContactManager::ListAllContacts()
{
    for(int i = 0; i < info.size(); i++)
    {
        cout << i + 1 << ". " << info[i].firstName << "  " << info[i].lastName <<"  "<< info[i].email <<"  "<< info[i].number << endl << endl;
    }
}

void ContactManager::Edit()
{
    ListAllContacts();
    cout <<"Select User to edit\n";
    int id;
    cin >> id;

    cout <<"\nEnter new name::";
    cin >> info[id-1].firstName;
}

// void ContactManager::Remove(){
//     ListAllContacts();
//     cout <<"Select User to delete...enter id\n";
//     int id;
//     cin >> id;

//     //info.erase(id-1);
//     info[id - 1].firstName = "";
//     info[id - 1].lastName = "";
//     info[id - 1].number = 0;
//     info[id - 1].email = "";
// }

