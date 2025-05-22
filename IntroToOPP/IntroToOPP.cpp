#include <iostream>
#include <Windows.h>

using namespace std;

class Building {
private:
    int year;
    string type;
public:
    void set_data(int y, string t) {
        year = y;
        type = t;
    }
    void get_info() {
        cout << "Type: " << type << ". Year:" << year << '\n';
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Класи
    Building School;
    /*School.type = "School";
    School.year = 2001;*/
    School.set_data(2001, "School");
    School.get_info();

    Building house;
   /* house.type = "House";
    house.year = 2021;*/
    house.set_data(2021, "House");
    house.get_info();

}
