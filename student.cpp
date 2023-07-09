class Student : public human
{
public:
    string grade;
    int Class;
     int roll_no;
    Student *next;
   

    Student(string n, int a, string p, long long ph, int cl)
    {
        name = n;
        age = a;
        phone = ph;
        Class = cl;
        grade = "None";
        password = p;
        roll_no = -1;
        next = nullptr;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "Roll no: " << roll_no << endl;
        cout << "class: " << Class << endl;
        cout << "Grade: " << grade << endl;
        cout<<"-------------------------------------------------------------"<<endl;
    }
};