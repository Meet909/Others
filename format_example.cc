// Constants:            UPPER_CASE
// Classes/structs:	 PascalCase
// Variables/functions:  snake_case
// Class members:        m_variable_name (m_prefix)  
//Brackets: inner

#include <iostream>

// Stała w UPPER_CASE
const int MAX_USERS = 100;

// Klasa w PascalCase
class UserManager
{
public:
    // Konstruktor
    UserManager()
        : m_user_count(0)
    {
    }

    // Funkcja w snake_case
    void add_user()
    {
        if (m_user_count < MAX_USERS)
        {
            m_user_count++;
            std::cout << "User added. Total: " << m_user_count << std::endl;
        }
        else
        {
            std::cout << "Cannot add more users." << std::endl;
        }
    }

private:
    // Członek klasy z prefiksem m_
    int m_user_count;
};

int main()
{
    // Zmienna lokalna w snake_case
    UserManager manager;

    manager.add_user();
    manager.add_user();

    return 0;
}
