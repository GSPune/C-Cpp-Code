#include <bits/stdc++.h>
using namespace std;

struct data
{
    std::string firstName,lastName,email;
    ulong number;
};

class ContactManager
{   
    public:
        // Constructor
        ContactManager();

        //Member functions to add,view,delete,edit

        void Add(string,string,ulong,string);
        void add(); // accept details from user


        void ListAllContacts();

        void Edit();
        void editPhoneNumber();
        void editName();
        void editEmail();

       // delete user from system
        void removeUser();
        void removeUserName();
        void removeUserNumber();
        void removeUserEmail();
        
        void searchName();
        void searchNumber();
        void searchEmail();

        void backUp();
        void restore();

        vector <struct data> info; //vector <datatype> name
};