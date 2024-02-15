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
        ContactManager();
        //ContactManager(string,string,ulong,string);
        //Member functions to add,view,delete,edit
        void Add(string,string,ulong,string);
        void Edit();
        void Delete();
        void ListAllContacts();
        void Display();

        //struct data info;
        vector <struct data> info; //vector <datatype> name
};