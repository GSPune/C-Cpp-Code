#include "contactManager.hpp"
#include <bits/stdc++.h>
#include <fstream>
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
    cout << endl;

    tmp.firstName = fn;
    tmp.lastName = ln;
    tmp.number = num;
    tmp.email = em;

    info.push_back(tmp);
}

void ContactManager::ListAllContacts()
{
    cout << "----------------------<List of all Contacts>-------------------------\n";
    for(int i = 0; i < info.size(); i++)
    {
        cout << i + 1 << ". " << info[i].firstName << "  " << info[i].lastName <<"  "<< info[i].email <<"  "<< info[i].number << endl;
    }
    cout << "---------------------------------------------------------------------\n";
}

void ContactManager::Edit()
{
    ListAllContacts();
    cout <<"Select Valid User Id for editing details!\n";
    int id;
    cin >> id;

    cout <<"Enter new first name :: ";
    cin >> info[id-1].firstName;

    cout <<"Enter new last name :: ";
    cin >> info[id-1].lastName;

    cout <<"Enter new email :: ";
    cin >> info[id-1].email;
    cout << "\n";
}


void ContactManager::editPhoneNumber(){
    ListAllContacts();
    cout <<"Select Valid User Id for editing Mobile Number!\n";
    int id;
    cin >> id;

    cout <<"Enter new mobile number :: ";
    cin >> info[id-1].number;
    cout << "\n";
}

void ContactManager::editName(){
    ListAllContacts();
    cout <<"Select Valid User Id for editing Name!\n";
    int id;
    cin >> id;

    cout <<"Enter new first name :: ";
    cin >> info[id-1].firstName;

    cout <<"Enter new last name :: ";
    cin >> info[id-1].lastName;
    cout << "\n";
}

void ContactManager::editEmail(){
    ListAllContacts();
    cout <<"Select Valid User Id for editing Email!\n";
    int id;
    cin >> id;

    cout <<"Enter new email :: ";
    cin >> info[id-1].email;
    cout << "\n";
}

void ContactManager::removeUser(){
    ListAllContacts();
    cout <<"Select Valid User Id to remove from contacts!\n";
    int id;
    cin >> id;

    info.erase(info.begin()+(id-1));
    cout << "\n";
    // info[id - 1].firstName = "";
    // info[id - 1].lastName = "";
    // info[id - 1].number = 0;
    // info[id - 1].email = "";
}

void ContactManager::removeUserName(){
    ListAllContacts();
    cout << "Enter User First Name to remove from contacts!\n";
    string fn;
    cin >> fn;

    for(int i = 0; i < info.size(); i++)
    {
        if (fn.compare(info[i].firstName) == 0)
        {
            info.erase(info.begin()+i);
            cout << "\n";
            return;
        }
    }
    cout << "NO User found!\n\n";
}

void ContactManager::removeUserEmail(){
    ListAllContacts();
    cout << "Enter User Email to remove from contacts!\n";
    string em;
    cin >> em;

    for(int i = 0; i < info.size(); i++)
    {
        if (em.compare(info[i].email) == 0)
        {
            info.erase(info.begin()+i);
            cout << "\n";
            return;
        }
    }
    cout << "NO User found!\n\n";
}

void ContactManager::removeUserNumber(){
    ListAllContacts();
    cout << "Enter User Number to remove from contacts!\n";
    ulong num;
    cin >> num;

    for(int i = 0; i < info.size(); i++)
    {
        if (num == info[i].number)
        {
            info.erase(info.begin()+i);
            cout << "\n";
            return;
        }
    }
    cout << "NO User found!\n\n";
}

void ContactManager::searchName(){
    ListAllContacts();
    cout << "Enter User's First Name to search for in contacts!\n";
    string fn;
    cin >> fn;

    for(int i = 0; i < info.size(); i++)
    {
        if (fn.compare(info[i].firstName) == 0)
        {
            cout << "User Found!Details:\n";
            cout << info[i].firstName << "  " << info[i].lastName <<"  "<< info[i].email <<"  "<< info[i].number << endl << endl;
            return;
        }
    }
    cout << "NO User found!\n\n";
}

void ContactManager::searchNumber(){
    ListAllContacts();
    cout << "Enter User's Number to search for in contacts!\n";
    ulong num;
    cin >> num;

    for(int i = 0; i < info.size(); i++)
    {
        if (num == info[i].number)
        {
            cout << "User Found!Details:\n";
            cout << info[i].firstName << "  " << info[i].lastName <<"  "<< info[i].email <<"  "<< info[i].number << endl  << endl;
            return;
        }
    }
    cout << "NO User found!\n\n";
}

void ContactManager::searchEmail(){
    ListAllContacts();
    cout << "Enter User's Email to search for in contacts!\n";
    string em;
    cin >> em;

    for(int i = 0; i < info.size(); i++)
    {
        if (em.compare(info[i].email) == 0)
        {
            cout << "User Found!Details:\n";
            cout << info[i].firstName << "  " << info[i].lastName <<"  "<< info[i].email <<"  "<< info[i].number << endl << endl;
            return;
        }
    }
    cout << "NO User found!\n\n";
}

void ContactManager::backUp(){
    ofstream file("backup.txt");
    file << "----------------------<List of all Contacts>-------------------------\n";
    for(int i = 0; i < info.size(); i++)
    {
        file << i + 1 << ". " << info[i].firstName << "  " << info[i].lastName <<"  "<< info[i].email <<"  "<< info[i].number << endl;
    }
    file << "---------------------------------------------------------------------\n";
    file.close();
}

void ContactManager::restore(){
    ifstream file("restore.txt");string line;
    if (file.is_open())
    {
        while(file.good())
        {
            getline(file,line);
            stringstream ss(line);
            data tmp;
            ss >> tmp.firstName;
            ss >> tmp.lastName;
            ss >> tmp.email;
            ss >> tmp.number;
            info.push_back(tmp);
        }
    }

    //file.close();
}