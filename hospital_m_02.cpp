#include<iostream>
using namespace std;

class hospital{
    public:
        string name;
        int id;
        int age;
        string occupation;
        string city;
        string nationality;
        string disease;
        string sex;
        int x;
        int doc;
        int cate;
        int y;
    void administration()
    {
        cout << "\t\t\t###  ASHIRBAD HOSPITAL  ###" << endl;
        cout << "\t\t\t---------------------------\t\t" << endl;
        cout << "\t\t***REGISTRATION FORM OF PATIENT***" << endl;
        cout << "Enter the patient name:";
        cin >> name;
        cout << "\nEnter the age:";
        cin >> age;
        cout << "\nEnter the occupation:";
        cin >> occupation;
        cout << "\nEnter the city:";
        cin >> city;
        cout << "\nEnter the nationality:";
        cin >> nationality;
        cout << "\nEnter the disease:";
        cin >> disease;
        cout << "\nEnter the sex:";
        cin >> sex;

        cout << "Departments:1. EYE/EAR\n 2. CARDIAC\n 3. FEMALE & CHILD\n";
        cout << "Enter your choice:";
        cin>> x;
        switch(x)
        {
        case 1:
            cout << "\t\tWELCOME TO EYE/EAR DEPARTMENT\n" << endl;
            cout << "Available doctors: 1. MR. X 2.MR.Y";
            cout << "\nChose your category:";
            cin>> cate;
            if(cate==1)
            {
            cout << "\nMR.X"<< endl;
            cout << "Speciality: eye/ear" << endl;
            cout << "Qualification: MBBS" << endl;
            cout << "\nis patient cured(1/2)?";
            cin>>y;
            if(y==1)
            {
                cout << "patient is going home";
            }
            else
            {
                cout << "patient is died";
            }

            }
            if(cate==2)
            {
             cout << "\nMR. Y" << endl;
             cout << "Speciality: eye/ear" << endl;
             cout << "Qualification: MBBS & FRCS" << endl;
             cout << "\nis patient cured(1/2)?";
            cin>>y;
            if(y==1)
            {
                cout << "patient is going home";
            }
            else
            {
                cout << "patient is died";
            }
            }
            break;
        case 2:
             cout << "\t\tWELCOME TO CARDIAC DEPARTMENT\n" << endl;
             cout << "Available doctors: 1. MR. M 2.MR. N";
             cout << "\nChose your category:";
             cin>> cate;
             if(cate==1)
             {
             cout << "\nMR. M"<< endl;
             cout << "Speciality: cardiac" << endl;
             cout << "Qualification: MBBS" << endl;
             cout << "\nis patient cured(1/2)?";
            cin>>y;
            if(y==1)
            {
                cout << "patient is going home";
            }
            else
            {
                cout << "patient is died";
            }
             }
             if(cate==2)
             {
             cout << "\nMR. N"<< endl;
             cout << "Speciality: cardiac" << endl;
             cout << "Qualification: MBBS & FRCS" << endl;
             cout << "\nis patient cured(1/2)?";
            cin>>y;
            if(y==1)
            {
                cout << "patient is going home";
            }
            else
            {
                cout << "patient is died";
            }
             }
             break;
        case 3:
              cout << "\t\tWELCOME TO FEMALE & CHILD DEPARTMENT\n" << endl;
              cout << "Available doctors: 1. MR.P 2.MR. Q";
              cout << "\nChose your category:";
              cin>> cate;
              if(cate==1)
              {
             cout << "\nMR. P"<< endl;
             cout << "Speciality: female & child" << endl;
             cout << "Qualification: MBBS" << endl;
             cout << "\nis patient cured(1/2)?";
            cin>>y;
            if(y==1)
            {
                cout << "patient is going home";
            }
            else
            {
                cout << "patient is died";
            }
              }
              if(cate==2)
              {
             cout << "\nMR.Q"<< endl;
             cout << "Speciality: eye/ear" << endl;
             cout << "Qualification: MBBS & FRCS" << endl;
             cout << "\nis patient cured(1/2)?";
            cin>>y;
            if(y==1)
            {
                cout << "patient is going home";
            }
            else
            {
                cout << "patient is died";
            }
              }
              break;
        default:
            cout << "your input is invalid......." <<endl;
        break;

        }

    }

};

int main()
{
    hospital p;
    p.administration();
    return 0;
}

