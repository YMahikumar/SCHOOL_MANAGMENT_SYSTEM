class AdmissionSystem
{
private:
    Student *head;
    Student *tail;

public:
    int strength[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AdmissionSystem()
    {
        head = nullptr;
        tail = nullptr;
    }

    void addStudent()
    {
       
        cout<<"-------------------WELCOME TO OUR SCHOOL-----------------"<<endl;
        cout<<"Student admission form "<<endl;
        cout << "Enter your name" << endl;
        string name;
        cin >> name;
        cout << "enter your age" << endl;
        int age;
        cin >> age;
        cout << "enter your phone number" << endl;
        long long phone;
        cin >> phone;
        cout << "enter your class" << endl;
        int Class;
        cin >> Class;

        cout << "enter your password" << endl;
        string password;
        cin >> password;
        strength[Class-1]++;
        cout<<"------------------------Thankyou----------------------"<<endl;

        Student *newStudent = new Student(name, age,password, phone, Class);
        newStudent->roll_no = strength[Class-1];
      

        if (head == nullptr)
        {
            head = newStudent;
            tail = newStudent;
        }
        else
        {
            tail->next = newStudent;
            tail = newStudent;
        }
    }

    void displayStudents()
    {
        Student *temp = head;

        if (temp == nullptr)
        {
            cout << "No students in the admission system." << endl;
            return;
        }
        cout<<"-----------------------Student details----------------------"<<endl;
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
        return;
    }
    void student_deletion()
    {
        cout<<"--------------------Student delation-------------------"<<endl;
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
        Student *temp = head;
        while (temp != nullptr)
        {
            if (temp->next != nullptr)
            {
                if (temp->next->name == name && temp->next->password == password)
                {
                    Student *todelete = temp->next;
                    temp->next = temp->next->next;
                    delete todelete;
                    return;
                }
                temp = temp->next;
            }
        }
        cout << "student not found" << endl;
        cout<<"-------------------------------------------------------"<<endl;
        return;
    }
    void student_grades()
    {
        Student *temp = head;

        if (temp == nullptr)
        {
            cout << "No students in the admission system." << endl;
            return;
        }
        cout<<"------------------Student grades----------------------"<<endl;
        cout << "enter student class" << endl;
        int Class;
        cin >> Class;
        cout << "Enter student roll number" << endl;
        int roll_no;
        cin >> roll_no;

        while (temp != nullptr)
        {
            if (temp->roll_no == roll_no && temp->Class == Class)
            {
                cout << "Enter grade" << endl;
                string grade;
                cin >> grade;
                temp->grade = grade;
                return;
            }
            temp = temp->next;
        }
        cout << "not found" << endl;
        cout<<"-------------------------------------------------"<<endl;
        return;
    }
       
    void edit_details()
    {
        Student *temp = head;

        if (temp == nullptr)
        {
            cout << "No students in the admission system." << endl;
            return;
        }
        cout<<"----------------Student edit details--------------------"<<endl;
        cout<<"Enter your name"<<endl;
        string name;
        cin>>name;
        cout << "Enter your password" << endl;
        string password;
        cin >> password;
        
        

        while (temp != nullptr)
        {
            if (temp->name == name && temp->password == password)
            {
                cout<<"what details do you want to change?"<<endl;
                string details;
                cin>>details;
                if(details=="name")
                {
                    cout << "Enter new name" << endl;
                string name;
                cin >> name;
                temp->name = name;
                return;

                }
                else if(details=="password")
                {
                    cout << "Enter new password" << endl;
                string password;
                cin >> password;
                temp->password = password;
                return;}
                else if(details=="number")
                {
                    cout << "Enter new phone number" << endl;
                long long phone;
                cin >> phone;
                temp->phone = phone;
                return;

                }
                else if(details=="age")
                {
                     cout << "Enter new age" << endl;
                     int age;
                     cin >> age;
                     temp->age = age;
                     return;

                }
                else
                {
                    cout<<"sorry you cannot change this details"<<endl;
                }
            }
            temp = temp->next;
        }
        cout << "not found" << endl;
        cout<<"----------------------------------------------------------"<<endl;
        return;

    }
};
