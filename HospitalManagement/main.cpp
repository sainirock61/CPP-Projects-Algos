#include <bits/stdc++.h>
using namespace std;

class Hospital
{
public:
    string H_name;
    string location;
    int available_beds;
    float rating;
    string contact ;
    string doctor_name;
    int price;
    
};

class Patient : public Hospital 
{
public:
    string P_name;
    int P_id;
};

void PrintHospitalData(vector<Hospital> & hospitals)
{
    cout<<"PRINT hosptials DATA : "<<endl;
    cout<<"HospitalName             "<<"Location\t          "<<"Beds_AVAIABLE\t       "<<"Rating\t            "<<"Hospital_contact\t            "<<"Doctor_name\t          "<<"Price_Per_Bed\n";
    for(int i=0;i<4;i++){
        cout<<hospitals[i].H_name<<"                        "<<hospitals[i].location<<"             "<<hospitals[i].available_beds<<"                       "<<hospitals[i].rating<<"               "<<hospitals[i].contact<<"                "<<hospitals[i].doctor_name<<"                           "<<"           "<<hospitals[i].price<<"                  "<<endl;
    }
    cout<<endl;
    }
    void PrintPatientData(vector<Patient>& patients ,vector<Hospital>& hospitals)
    {
        cout<<"Printpatient DATA: "<<endl;
        cout<<"Patient_Name          "
             <<"Patient_Id        "
             <<"Patient_contact        "
             <<"Alloted_Hospital       "
             <<"Patient_Expenditure         \n";
             for(int i=0;i<4;i++)
             {
                 cout<<patients[i].P_name
                 <<"                    "
                 <<"             "
                 <<patients[i].P_id
                 <<"                  "
                 <<"              "
                 <<patients[i].contact
                 <<"                    "
                 <<hospitals[i].H_name
                 <<"                     "
                 <<patients[i].price
                 <<"                "
                 <<endl;
             }
             cout<<endl;
    }
    bool SortHospitalByName(vector<Hospital>hospitals)
    {
        sort(hospitals.begin(),hospitals.end());
        
        cout<<"SORT BY NAME: "
        <<endl;
        PrintHospitalData(hospitals);
    }
    bool rating(Hospital&A,Hospital&B)
    {
        return A.rating>B.rating;
    }
    void SortHospitalByRating(vector<Hospital>hospitals)
    {
        sort(hospitals.begin(),hospitals.end(),rating);
        cout<<"SORT BY Rating:"<<endl;
        PrintHospitalData(hospitals);
    }
    
    bool beds(Hospital& A,Hospital& B)
    {
        return A.available_beds>B.available_beds;
        
    }
    
    void SortByBedsAvailable(vector<Hospital> hospitals)
    {
        sort(hospitals.begin(),hospitals.end(),beds);
        
        cout<<"Sort By Available Beds: "<<endl;
PrintHospitalData(hospitals); 
    }
    
    bool beds_price(Hospital& A,Hospital& B)
    {
        return A.price<B.price;
    }
    
    void SortByBedsPrice(vector<Hospital> hospitals)
    {
        sort(hospitals.begin(),hospitals.end(),beds_price);
         cout<<"Sort By Available Beds Price:"<<endl;
         PrintHospitalData(hospitals);
    }
    void PrintHospitalBycity( string city,vector<Hospital> hospitals)
    {
        cout<<"Print Hospital by Name: "<<city<<endl;
        cout<<"HospitalName       "
             <<"Location       "
             <<"Beds_Avaiable      "
             <<"Rating         "
             <<"Hospital_contact     "
             <<"Doctor_Name    "
             <<"Price_Per_Bed         \n";
             
              for(int i=0;i<4;i++){
                  if(hospitals[i].location !=city)
                      continue;
        cout<<hospitals[i].H_name<<"                        "<<hospitals[i].location<<"             "<<hospitals[i].available_beds<<"                       "<<hospitals[i].rating<<"               "<<hospitals[i].contact<<"                "<<hospitals[i].doctor_name<<"                           "<<"           "<<hospitals[i].price<<"                  "<<endl;
    }
    cout<<endl;
    
    }
    
    void HospitalManagement(string patient_Name[],int patient_Id[],
    string patient_contact[], int bookingCost[],
    string hospital_Name[],string location[],int beds[],
    float ratings[],string hospitals_Contact,
    string doctor_Name[], int price[])
    {
        vector<Hospital> hospitals;
        
        Hospital h;
        
        
        for(int i=0;i<4;i++){
            h.H_name = hospital_Name[i];
            h.location = location[i];
            h.available_beds = beds[i];
            h.rating = ratings[i];
            h.contact = hospitals_Contact[i];
            h.doctor_name = doctor_Name[i];
            h.price = price[i];
            hospitals.push_back(h);
        }
        
        vector<Patient> patients;
        Patient p;
        
        for(int i = 0;i<4;i++){
            p.P_name = patient_Name[i];
            p.P_id = patient_Id[i];
            p.contact = patient_contact[i];
            p.price = bookingCost[i];
            patients.push_back(p);
        }
        cout<<endl;
        
        PrintHospitalData(hospitals);
        PrintPatientData(patients , hospitals);
        
        
        SortHospitalByName(hospitals);
        SortHospitalByRating(hospitals);
        PrintHospitalBycity("Bangalore",hospitals);
        SortByBedsAvailable(hospitals);
        SortByBedsPrice(hospitals);
    }
    int main()
    {
        string patient_Name[]={"P1","P2","P3","P4"};
        int patient_Id[]={2,3,4,1};
        string patient_Contact[]={"234534XXX7","234576XXXX2","85765XXX9","567657XXX0"};
        int bookingCost[]={1000,1200,1100,600};
        
        string hospital_Name[]={"H1","H2","H4","H3"};
        string location[]={"bangalore","banaglore","mumbai","prayagraj"};
        int beds[]={4,5,6,9};
        float ratings[]={5.2,4.1,3.4,5.9};
        string hospitals_Contact[]={"65734XXXX&","299766XXX2","32465XXX9","343456XXX4"};
        string doctor_Name[]={"D1","D4","D3","D2"};
        int price[]={100,200,100,290};
        
        HospitalManagement(
        patient_Name,patient_Id,patient_Contact,
        bookingCost,hospital_Name,location,beds,
        ratings,hospitals_Contact,doctor_Name,price);
        return 0;
        
        
    }
