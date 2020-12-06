#include "Factory.h"

void ClientSide(const Creator& creator) {
    cout << "Client side: I received the following message: \n" << creator.BusinessLogic() << endl;
}

int main()
{
    string ans = "S";
    Creator *creator = nullptr;

    do {
        cout << "Please input A/B/C/Exit to create the respective products." << endl;
        //cin.ignore(1);
        getline(cin, ans);
        //cout << ans << endl;

        if (ans.compare("A") == 0) {
            creator = new ConcreteCreatorA();
            ClientSide(*creator);
        } else if (ans == "B") {
            creator = new ConcreteCreatorB();
            ClientSide(*creator);
        } else if (ans == "C") {
            creator = new ConcreteCreatorC();
            ClientSide(*creator);
        }
        else if (ans != "Exit") cout << "Invalid input" << endl;
        if (creator != nullptr) delete creator;
        creator = nullptr;

    } while (ans != "Exit");
    if (creator != nullptr) delete creator;
    return 0;
}
