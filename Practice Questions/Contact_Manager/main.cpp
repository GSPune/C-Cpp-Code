#include "contactManager.cpp"

using namespace std;

int main(void)
{
    ContactManager o1;
    o1.Add("Stephen","George",9062275648,"sjl@gmail");
    o1.Add("ACV","TJKA",90568036277,"xyz@gmail");

    o1.ListAllContacts();
    return 0;
}