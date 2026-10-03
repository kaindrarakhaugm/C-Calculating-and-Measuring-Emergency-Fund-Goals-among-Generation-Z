#include <iostream>

using namespace std;

int main()
{
    float totEarning = 0.0, totExpense = 0.0, saving, duration, ratio;  // Deklarasi variabel
    int inp;
    char check = 't';
    
    do {
        check = 't';
        cout << "Input how many months: ";
        cin >> inp;
        if (inp < 1) {
            cout << "INVALID INPUT! (>1)" << endl;
            check = 'f';
        }
    } while (check == 'f');
    
    float earning[inp], expense[inp];
    
    for (int i = 0; i < inp; i++) {
        cout << "\nInput earning for month-" << i+1 << ": ";   // Input
        cin >> earning[i];
        totEarning += earning[i];
        cout << "Input expense for month-" << i+1 << ": ";
        cin >> expense[i];
        totExpense += expense[i];
    }
    
    saving = (totEarning/inp) - (totExpense/inp);                    /*Apriori                                                                                                                                                                       */ float Egg;
    
    if (saving == 0) {                                    // Eliminasi 0 dan negatif
        cout << "\n" << "Your monthly saving is: 0 (You don't have any saving!)";
        return 0;
    } else if (saving < 0) {
        cout << "\n" << "On budget deficit! (Like APBN X0)";
        return 0;
    } else {
        cout << "\n" << "Your monthly saving is: " << saving << " ";
    }
    
    ratio = saving / (totExpense/inp);                         //Apriori
    duration = 6.0 / ratio;                                   //Membagi 6 (Standar Dana Darurat: 6x totExpense bulanan) dengan ratio saving
    
    ratio = saving / (totEarning/inp);                          //Mendapatkan ratio saving terhadap Pendapatan (Efisiensi memori dengan tidak membuat variabel baru)
    cout << "\n" << "Your saving ratio is: " << ratio;
    
    if (ratio < 0.1) {                                     //ratio saving sehat terhadap Pendapatan yang umum dipakai adalah 20% (50/30/20)
        cout << "\n\n" << "Your saving ratio is very low! (Seriously? in this economy??)";
    } else if (ratio < 0.2) {
        cout << "\n\n" << "Your saving ratio is low! (Kurangi Ngafe)";
    } else if (ratio < 0.6) {
        cout << "\n\n" << "Your saving ratio is good! (Santai dulu ga sih?)";
    } else if (ratio <= 1) {
        cout << "\n\n" << "Your saving ratio is... Tinggi, Tinggi, Sekali~ (Don't forget to go healing ya!)";
    } else {
        cout << "\n\n" << "Gamungkinn.. Lu pasti ada maenn (jangan mainin variabel apalagi diminusin woi wkwkwk)";
    }
    
    cout << "\n" << "You'll be having sufficient emergency fund after: " << duration << " Bulan";                                                                                                                                                           Egg = (totEarning/inp) - (totExpense/inp);

    return 0;
    
    
    /* Easter Egg (move this exactly above the last "return 0")  */ if (Egg == 67.0) {cout << "\n"; for(int i = 0; i < 67; i++ ){cout << "\n"<< "SiX sEveNnnN~~~ 67 67 67 SiX sEveNnnN~~~ 67 67 67 SiX sEveNnnN~~~ 67 67 67 SiX sEveNnnN~~~ 67 67 67";}}
}