class staff : public human, public AdmissionSystem
{
public:
    string exp;
    string level;
    string subject;
    staff *next;
    staff(string Name, int Age, long long Number, string Password, string Exp, string Subject, string Level)
    {
        name = Name;
        age = Age;
        phone = Number;
        password = Password;
        exp = Exp;
        level = Level;
        subject = Subject;
        next = nullptr;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "experience: " << phone << endl;
        cout << "level: " << phone << endl;
        cout << "subject: " << phone << endl;
        cout << "-------------------------------------------------------" << endl;
    }
};