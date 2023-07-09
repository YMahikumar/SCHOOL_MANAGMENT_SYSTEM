class staff_directory
{
private:
    staff *head;
    staff *tail;

public:
    staff_directory()
    {
        head = nullptr;
        tail = nullptr;
    }
    void new_joining()
    {
        cout << "-------------------WELCOME TO OUR SCHOOL-----------------" << endl;
        cout << "Staff joining form " << endl;
        string name;
        cout << "Enter your name" << endl;
        cin >> name;

        cout << "Enter your age" << endl;
        int age;
        cin >> age;

        cout << "Enter your phone numner" << endl;
        long long number;
        cin >> number;

        cout << "Enter your teaching subject" << endl;
        string subject;
        cin >> subject;

        cout << "Enter your teaching standard (1-5=primary/6-7=mid/8-10=higher) " << endl;
        string level;
        cin >> level;

        cout << "Do you have any teaching experience before if there any enter how many years if not there enter none" << endl;
        string exp;
        cin >> exp;

        cout << "Enter your password" << endl;
        string pas;
        cin >> pas;

        cout << "---------Thanks for filling all the details--------------------" << endl;
        staff *newStaff = new staff(name, age, number, pas, exp, subject, level);
        if (head == nullptr)
        {
            head = newStaff;
            tail = newStaff;
        }
        else
        {
            tail->next = newStaff;
            tail = newStaff;
        }
    }
    void displayStaff()
    {
        staff *temp = head;
        if (temp == nullptr)
        {
            cout << "no staff" << endl;
            return;
        }
        cout << "--------------------Staff details-------------------" << endl;
        cout << "Enter your name" << endl;
        string name;
        cin >> name;
        cout << "enter your password" << endl;
        string password;
        cin >> password;
        while (temp != nullptr)
        {
            if (temp->name == name && temp->password == password)
            {
                temp->display();
                return;
            }
            temp = temp->next;
        }
        cout << "not found" << endl;
        cout << "-------------------------------------------------------" << endl;
        return;
    }
    void remove_staff()
    {
        cout << "--------------------Staff resignation-------------------" << endl;
        cout << "Enter your name" << endl;
        string name;
        cin >> name;
        cout << "enter your password" << endl;
        string password;
        cin >> password;
        if (head->name == name && head->password == password)
        {
            head = head->next;
            return;
        }
        staff *temp = head;
        while (temp != nullptr)
        {
            if (temp->next != nullptr)
            {
                if (temp->next->name == name && temp->next->password == password)
                {
                    staff *todelete = temp->next;
                    temp->next = temp->next->next;
                    delete todelete;
                    return;
                }
                temp = temp->next;
            }
        }
        cout << "staff not found" << endl;
        cout << "-------------------------------------------------------" << endl;
        return;
    }
    void edit_details()
    {
        staff *temp = head;
        if (temp == nullptr)
        {
            cout << "no staff" << endl;
            return;
        }
        cout << "--------------------Staff edit details-------------------" << endl;
        cout << "Enter your name" << endl;
        string name;
        cin >> name;
        cout << "enter your password" << endl;
        string password;
        cin >> password;
        while (temp != nullptr)
        {
            if (temp->name == name && temp->password == password)
            {
            }
            cout << "what details do you want to change?" << endl;
            string details;
            cin >> details;
            if (details == "name")
            {
                cout << "Enter new name" << endl;
                string name;
                cin >> name;
                temp->name = name;
                return;
            }
            else if (details == "password")
            {
                cout << "Enter new password" << endl;
                string password;
                cin >> password;
                temp->password = password;
                return;
            }
            else if (details == "number")
            {
                cout << "Enter new phone number" << endl;
                long long phone;
                cin >> phone;
                temp->phone = phone;
                return;
            }
            else if (details == "age")
            {
                cout << "Enter new age" << endl;
                int age;
                cin >> age;
                temp->age = age;
                return;
            }
            else
            {
                cout << "sorry you cannot change this details" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "not found" << endl;
        cout << "-------------------------------------------------------" << endl;
        return;
    }
};
