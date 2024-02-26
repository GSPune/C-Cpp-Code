#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    std::string firstName,lastName,email;
    ulong number;
} data;

class ContactManager
{   
    public:
        // Constructor
        ContactManager();

        //Member functions to add,view,delete,edit

        void Add(string,string,ulong,string); //1
        void Add(); // accept details from user (2)

        void ListAllContacts();//3

        void Edit();//4
        void editPhoneNumber();//5
        void editName();//6
        void editEmail();//7

       // delete user from system
        void removeUser();//8
        void removeUserName();//9
        void removeUserNumber();//10
        void removeUserEmail();//11
        
        //search for a user
        void searchName();//12
        void searchNumber();//13
        void searchEmail();//14

        //backup/restore data to/from files
        void backUp();//15
        void restore();//16

        vector <data> info; //vector <datatype> name
};