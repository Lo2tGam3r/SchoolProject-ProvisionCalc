#include <iostream>
#include <iomanip>
#define lowProvision 0.05
#define highProvision 0.06

double totalgeschaeftsfaelle = 0;
double totalProvision = 0;
double provision[20]={0};
double businessCases[20]={0};
int firstEmpty = 0;
std::string eingabe;
bool xExit = false;
int counter = 0;


int addNewCase();

int main(){
    do{
        system("cls");
        std::cout << "Gesch""\x84""ftsf""\x84""lle:""\n";
        //print list of business cases plus provision
        while(businessCases[counter]!=0){
            std::cout << "\n" << counter+1 << ".    " << std::right << std::setw(9) << businessCases[counter] << "       " << std::setw(6) << provision[counter] << "";
            counter++;
        };
        counter = 0;
        //calc total Case Sum and total Provision Sum
        totalgeschaeftsfaelle = 0;
        totalProvision = 0;
        while(businessCases[counter]!=0){
            totalgeschaeftsfaelle = totalgeschaeftsfaelle + businessCases[counter];
            totalProvision = totalProvision + provision[counter];
            counter++;
        }
        counter = 0;
        //print total Case Sum and total Provision Sum to Console
        std::cout << "\n\nSumme Gesch""\x84""ftsf""\x84""lle:    \n" << totalgeschaeftsfaelle << "\n\nSumme Provision:\n" << totalProvision;
        std::cout << "\n\nUm einen Gesch""\x84""ftsfall einzugeben dr""\x81""cken Sie bitte die:     1"
                  << "\nUm das Programm zu beenden dr""\x81""cken Sie bitte die:        2\n";
        std::cin >> eingabe;
        if(eingabe=="2"){xExit=true;}
        if(eingabe=="1"){addNewCase();}
    }
    while(xExit==false);
    return 0;
}

int addNewCase(){
    double eingabeSumme = 0;
    system("cls");
    std::cout << "\n Bitte geben Sie die Summe des Gesch""\x84""ftsfalles ein: ";
    std::cin >> eingabeSumme;
    std::cout << "\n" << firstEmpty;
    businessCases[firstEmpty] = eingabeSumme;
    if(eingabeSumme > 10000){
    std::cout << "\n" << firstEmpty;
        provision[firstEmpty] = eingabeSumme * highProvision;
    }
    else{
    std::cout << "\n" << firstEmpty;
        provision[firstEmpty] = eingabeSumme * lowProvision;
    }
    firstEmpty++;
    return 0;
}
