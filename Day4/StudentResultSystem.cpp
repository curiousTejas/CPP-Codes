#include<iostream>
using namespace std;
class student
{
private:
    string name, surname, division, opt_language;
    int ref_no, rollNo, standard, a;
    float eng,marathi,hindi,opt_lang,maths,sci,soc_sci, total, avg, percent;
public:
    void get_student_info()
    {
        cout<<"Enter First Name: "<<endl;
        cin>>name;
        cout<<"Enter Surname: "<<endl;
        cin>>surname;
        cout<<"Enter Standard: "<<endl;
        cin>>standard;
        cout<<"Enter Division: "<<endl;
        cin>>division;
        cout<<"Enter Roll No.: "<<endl;
        cin>>rollNo;
        cout<<"Enter Reference No.: "<<endl;
        cin>>ref_no;
        if(standard>=8 || standard<=10)

        {
            if(division=="A"||division=="B"||division=="C")
                opt_language="Hindi(Entire)";
            else if(division=="D")
                opt_language="Hindi-Sanskrit(Composite)";
            else if(division=="E")
                opt_language="Hindi-French(Composite)";
            else if(division=="F")
                opt_language="Sanskrit(Entire)";
        }
    }
    void get_marks()
    {
        cout<<"Enter Marks out of 100:\nEnglish: "<<endl;
        cin>>eng;
        cout<<"\nMarathi: "<<endl;
        cin>>marathi;
        if (standard<8)
        {
            cout<<"\nHindi: "<<endl;
            cin>>hindi;
        }
        else
        {
            cout<<"\nOptional Language(Hindi/Sanskrit/Hindi-Sanskrit/Hindi-French): "<<endl;
            cin>>opt_lang;
        }
        cout<<"\nMaths: "<<endl;
        cin>>maths;
        cout<<"\nScience: "<<endl;
        cin>>sci;
        cout<<"\nSocial Science(Hist-Geog): "<<endl;
        cin>>soc_sci;
    }
    void display_info()
    {
        cout<<"\n\nName: "<<name<<" "<<surname<<endl;
        cout<<"Standard/Division: "<<standard<<"/"<<division<<endl;
        cout<<"Roll No.: "<<rollNo<<endl;
        cout<<"Reference No.: "<<ref_no<<endl;
    }
    void display_result()
    {
        if(standard<8)
        {
            total = eng+marathi+hindi+maths+sci+soc_sci;
            avg=total/600;
            percent=avg*100;
            cout<<"\nMarks: "<<endl;
            cout<<"English: "<<eng<<endl;
            cout<<"Marathi: "<<marathi<<endl;
            cout<<"Hindi: "<<hindi<<endl;
            cout<<"Maths: "<<maths<<endl;
            cout<<"Science: "<<sci<<endl;
            cout<<"Social Science: "<<soc_sci<<endl;
        }
        else
        {
            total = eng+marathi+opt_lang+maths+sci+soc_sci;
            avg=total/600;
            percent=avg*100;
            cout<<"\n\nName: "<<name<<" "<<surname<<endl;
            cout<<"Standard/Division: "<<standard<<"/"<<division<<endl;
            cout<<"Roll No.: "<<rollNo<<endl;
            cout<<"\nMarks: "<<endl;
            cout<<"English: "<<eng<<endl;
            cout<<"Marathi: "<<marathi<<endl;
            cout<<opt_language<<": "<<opt_lang<<endl;
            cout<<"Maths: "<<maths<<endl;
            cout<<"Science: "<<sci<<endl;
            cout<<"Social Science: "<<soc_sci<<endl;
        }
        if(percent>90)
        {
            cout<<"Congratulations! You've got an A! Keep it up\n!"<<endl;
        }
        else if(percent>75)
        {
            cout<<"You've got a B! Good work!\n"<<endl;
        }
        else if(percent>50)
        {
            cout<<"You've got an C! Not bad!\n"<<endl;
        }
        else if(percent>35)
        {
            cout<<"You've got an D! Improve next time!\n"<<endl;
        }
        else
            cout<<"Unfortunately, you've failed this time. No worries, better luck next time!\n"<<endl;
    }
    void execute()
    {
        cout<<"---------------Welcome to Student Result System!---------------\n\n";
        do
        {
            cout<<"\nMake a choice: \n1. Enter Student Info\n2. Display Student Info\n3. Enter Marks\n4. Display Result\n5. Exit\n"<<endl;
            cin>>a;
            switch(a)
            {
            case 1:
                get_student_info();
                break;
            case 2:
                display_info();
                break;
            case 3:
                get_marks();
                break;
            case 4:
                display_result();
                break;
            case 5:
                cout<<"\nThanks!\n"<<endl;
                break;
            default:
                cout<<"Invalid input! Try again.\n"<<endl;

            }
        }while(a!=5);
    }
};
int main()
{
    student s;
    s.execute();
    return 0;
}
