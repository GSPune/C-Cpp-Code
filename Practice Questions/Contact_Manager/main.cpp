#include "contactManager.cpp"

using namespace std;

int main(void)
{
    ContactManager cm;
    cm.Add("Solomon","King",7403109602,"solman23@oops");
    cm.Add();
    cm.Add();
    cm.Edit();
    cm.editPhoneNumber();
    cm.removeUser();

    cm.ListAllContacts();
    return 0;
}