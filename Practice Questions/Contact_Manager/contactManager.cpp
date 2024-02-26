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

/*ContactManager::ContactManager(string firstName, string lastName, ulong number, string email)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->number = number;
    this->email = email;
}*/

void ContactManager::Display()
{
    //cout << "\nFirstName ::" << firstName << "\t lastName ::" << lastName <<"\t email ::"<< email << endl;
}

/**
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
    struct data tmp;
    tmp.firstName = firstName;
    tmp.lastName = lastName;
    tmp.number = number;
    tmp.email = email;

    info.push_back(tmp);
}

void ContactManager::ListAllContacts()
{
    for(int i = 0; i < info.size(); i++)
    {
        cout << "\nFirstName ::" << info[i].firstName << "\t lastName ::" << info[i].lastName <<"\t email ::"<< info[i].email << endl;
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

void ContactManager::Remove(){
    ListAllContacts();
    cout <<"Select User to delete...enter id\n";
    int id;
    cin >> id;

    //info.erase(id-1);
    info[id - 1].firstName = "";
    info[id - 1].lastName = "";
    info[id - 1].number = 0;
    info[id - 1].email = "";
}

