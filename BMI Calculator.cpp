#include <iostream>
#include <string>
using namespace std;

int main() {
string FN;
cout<< "Type Your Full Name Here-";
getline (cin,FN);

string Age;
cout<< "Type Your Age Here-";
cin>> Age;

double feet;
double inches;
double heightM;
cout<< "Enter Your Height in Feet,Inches Here (Dont use commas)-";
cin>>feet>>inches;
heightM = (feet * 0.3048 + inches * 0.0254); 

double Kilograms;
double Grams; 
double Weight;
cout<<"Enter Your Weight in Kilograms,Grams Here (Dont use commas,For acurate measurment use this format- Your weight(Kg) Your weight(gms 0 if dk)";
cin>> Kilograms>>Grams;
Weight = (Kilograms * 1 + Grams/1000);

double BMI= Weight/(heightM * heightM);

    cout << "\nYour Full Name is- " << FN << "\n";
    cout << "Your Age is " << Age << " years old\n";
    cout << "Your BMI is " << BMI << "\n";



  return 0;

}