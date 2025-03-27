/*
Project 1
    Project scope:
        The aim of this project is to create the backend of an application that will be used to calculate the average productivity of user inputted data
        Once the backend is fully operational, this will be reworked to be a GUI application

    Project goals:
        The goals of this project are to come to a better understanding of OOP and classes as well as to learn how to create GUI applications
*/


#include <iostream>
#include <ostream>
#include <limits>
#include <iomanip>

using namespace std;

float Hours = 7.5;

const int arrayMax = 26;

//Calls Values
float TSProgVal = 3.25,
ADEMCallVal = 3.76,
AllPanelCallVal = 3.76,
VideoCallVal = 2.89,
UNRADEMCallVal = 2.89,
ConfirmCallVal = 2.74,
TSDataCallVal = 1.26,
SGDataCallVal = 0.94,
DataSourceCallVal = 1.37,
ClarkConfirmCallVal = 1.26,
ClarkDataCallVal = 0.90;

//Other Values
float ADSVal = 0.95,
ARRVal = 0.54,
ADDRESVal = 0.95,
DATAction = 0.87,
DLAAction = 2.06,
PICAction = 0.22,
NCLAction = 1.41,
NOCAction = 0.87,
PTRAction = 0.54,
OCSAction = 0.87,
WTDAXMAction = 1.41,
XNANCAction = 3.25,
WTDASRAction = 2.16,
WTDAECAction = 2.60,
XWPAction = 0.87;




class StorageClass {
private:
    float _value;
    string _name;

public:
    int _quantity;
    StorageClass(float value, int quantity, string name) {
        _value = value;
        _quantity = quantity;
        _name = name;
    }//End of constructor
    StorageClass() {
        _value = 0;
        _quantity = 0;
    }


    float getValue() {
        return _value;
    }

    int getQuantity() {
        return _quantity;
    }

    string getName() {
        return _name;
    }

    float getDailyValue() {
        float returnValue;

        returnValue = (_quantity * _value);

        return returnValue;
    }

    void printInfo() {
        cout << getName() << " - Quantity: " << getQuantity() << " | Daily Total - " << getDailyValue() << endl;
    }



};// End of storagClass



int main() {
    int userSelect = 1;
    int userQuan;

    cout << setprecision(2);




    StorageClass StorageArray[arrayMax] = {
                                 StorageClass(TSProgVal,0,"TSProgCall"),
                                 StorageClass(ADEMCallVal,0,"ADEMCall"),
                                 StorageClass(AllPanelCallVal,0,"AllPanCall"),
                                 StorageClass(VideoCallVal,0,"VideoProgCall"),
                                 StorageClass(UNRADEMCallVal,0,"UnresADEMCall"),
                                 StorageClass(ConfirmCallVal,0,"ConfirmCall"),
                                 StorageClass(TSDataCallVal,0,"DataCall"),
                                 StorageClass(SGDataCallVal,0,"SGDataCall"),
                                 StorageClass(DataSourceCallVal,0,"DataSourceCall"),
                                 StorageClass(ClarkConfirmCallVal,0,"ClarkConfirmCall"),
                                 StorageClass(ClarkDataCallVal,0,"ClarkDataCall"),
                                 StorageClass(ADSVal,0,"ADS"),
                                 StorageClass(ARRVal,0,"ARR"),
                                 StorageClass(ADDRESVal,0,"ADDRES"),
                                 StorageClass(DATAction,0,"DAT"),
                                 StorageClass(DLAAction,0,"DLA"),
                                 StorageClass(PICAction,0,"PIC"),
                                 StorageClass(NCLAction,0,"NCL"),
                                 StorageClass(NOCAction,0,"NOC"),
                                 StorageClass(PTRAction,0,"PTR"),
                                 StorageClass(OCSAction,0,"OCS"),
                                 StorageClass(WTDAXMAction,0,"WTDAX"),
                                 StorageClass(XNANCAction,0,"XNANC"),
                                 StorageClass(WTDASRAction,0,"WTDASR"),
                                 StorageClass(WTDAECAction,0,"WTDAEC"),
                                 StorageClass(XWPAction,0,"XWP")
    };

    float userTotal = 0;



    cout << "|-------Isaac Handran Productivity Tracker 9000-------|" << endl;
    cout << "|---------------------INSTRUCTIONS--------------------|" << endl;
    cout << "|This program is meant to be used to help agents keep |" << endl;
    cout << "|track of their performance metrics, hereby refered to|" << endl;
    cout << "|as Actions Per Hour, or APH. This program will allow |" << endl;
    cout << "|agents to input their total quantity of calls and ...|" << endl;
    cout << "|actions so they can better understand how much work..|" << endl;
    cout << "|they have completed through out the day.After reading|" << endl;
    cout << "|instructions, you may begin to input your work by ...|" << endl;
    cout << "|navigating through the menus using the numbers 1 - 25|" << endl;
    cout << "|depending on which catagory you wish to enter. If ...|" << endl;
    cout << "|0 or any letter is entered instead, this program will|" << endl;
    cout << "|exit                                                 |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << endl;


    while (userSelect != 0) {
    userTotal = 0;


        for (int i = 0; i <= (arrayMax - 1);i++) {
            userTotal = userTotal + StorageArray[i].getDailyValue();
        }

        userTotal = userTotal / Hours;

        cout << "|----------------- Todays Total = " << userTotal << "APH ------------------|" << endl;
        cout << "| 0: Exit Program                                        |" << endl;
        cout << "| 1: TS Programming Calls - " << StorageArray[0].getQuantity() << "                            |" << endl;
        cout << "| 2: ADEMCO Programming Calls - " << StorageArray[1].getQuantity() << "                        |" << endl;
        cout << "| 3: All Panels Programming Calls - " << StorageArray[2].getQuantity() << "                    |" << endl;
        cout << "| 4: Video Programming Calls - " << StorageArray[3].getQuantity() << "                         |" << endl;
        cout << "| 5: ADEMCO Unrestricted Programming Calls - " << StorageArray[4].getQuantity() << "           |" << endl;
        cout << "| 6: Confirmation Calls - " << StorageArray[5].getQuantity() << "                              |" << endl;
        cout << "| 7: TS Data Calls - " << StorageArray[6].getQuantity() << "                                   |" << endl;

        cout << "| 8: SG Data Calls - " << StorageArray[7].getQuantity() << "                                   |" << endl;
        cout << "| 9: DataSource Calls - " << StorageArray[8].getQuantity() << "                                |" << endl;
        cout << "|10: Clark Confirmation Calls - " << StorageArray[9].getQuantity() << "                        |" << endl;
        cout << "|11: Clark Data Calls - " << StorageArray[10].getQuantity() << "                                |" << endl;
        cout << "|12: ADS Project Tickets Closed - " << StorageArray[11].getQuantity() << "                      |" << endl;
        cout << "|13: ARR Actions - " << StorageArray[12].getQuantity() << "                                     |" << endl;
        cout << "|14: ADDRES Actions - " << StorageArray[13].getQuantity() << "                                  |" << endl;
        cout << "|15: DAT Actions - " << StorageArray[14].getQuantity() << "                                     |" << endl;
        cout << "|16: DLA Actions - " << StorageArray[15].getQuantity() << "                                     |" << endl;
        cout << "|17: PIC Actions - " << StorageArray[16].getQuantity() << "                                     |" << endl;
        cout << "|18: NCL Actions - " << StorageArray[17].getQuantity() << "                                     |" << endl;
        cout << "|19: NOC Actions - " << StorageArray[18].getQuantity() << "                                     |" << endl;
        cout << "|20: PTR Actions - " << StorageArray[19].getQuantity() << "                                     |" << endl;
        cout << "|21: OCS Actions - " << StorageArray[20].getQuantity() << "                                     |" << endl;
        cout << "|22: WTDAXM Actions - " << StorageArray[21].getQuantity() << "                                  |" << endl;
        cout << "|23: XNANC Actions - " << StorageArray[22].getQuantity() << "                                   |" << endl;
        cout << "|24: WTDASR Actions - " << StorageArray[23].getQuantity() << "                                  |" << endl;
        cout << "|25: WTDAEC Actions - " << StorageArray[24].getQuantity() << "                                  |" << endl;
        cout << "|26: XWP Actions - " << StorageArray[25].getQuantity() << "                                     |" << endl;
        cout << "|--------------------------------------------------------|" << endl;

        cout << "Enter a Selection !";
        cin >> userSelect;



        switch (userSelect) {
        case 0:
            cout << "The total APH for today was " << userTotal << " for an average " << Hours << " hour long day" << endl;
            break;
        case 1:
            cout << "Please enter the amount of Programming Calls to increment by:";
            cin >> userQuan;
            StorageArray[0]._quantity = StorageArray[0]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

            break;
        case 2:
            cout << "Please enter the amount of ADEMCO Calls to increment by:";
            cin >> userQuan;
            StorageArray[1]._quantity = StorageArray[1]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 3:
            cout << "Please enter the amount of All Panels Calls to increment by:";
            cin >> userQuan;
            StorageArray[2]._quantity = StorageArray[2]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 4:
            cout << "Please enter the amount of Video Calls to increment by:";
            cin >> userQuan;
            StorageArray[3]._quantity = StorageArray[3]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 5:
            cout << "Please enter the amount of UNR ADEMCO Calls to increment by:";
            cin >> userQuan;
            StorageArray[4]._quantity = StorageArray[4]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 6:
            cout << "Please enter the amount of Confirmation Calls to increment by:";
            cin >> userQuan;
            StorageArray[5]._quantity = StorageArray[5]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 7:
            cout << "Please enter the amount of TS DataCalls to increment by:";
            cin >> userQuan;
            StorageArray[6]._quantity = StorageArray[6]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 8:
            cout << "Please enter the number of SG Data Calls to increment by:";
            cin >> userQuan;
            StorageArray[7]._quantity = StorageArray[7]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 9:
            cout << "Please enter the number of DataSource Calls to increment by:";
            cin >> userQuan;
            StorageArray[8]._quantity = StorageArray[8]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 10:
            cout << "Please enter the number of Clark Confirmation Calls to increment by:";
            cin >> userQuan;
            StorageArray[9]._quantity = StorageArray[9]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 11:
            cout << "Please enter the number of Clark Data Calls to increment by:";
            cin >> userQuan;
            StorageArray[10]._quantity = StorageArray[10]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 12:
            cout << "Please enter the number of ADS Actions to increment by:";
            cin >> userQuan;
            StorageArray[11]._quantity = StorageArray[11]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;

        case 13:
            cout << "Please enter the number of ARR Actions to increment by:";
            cin >> userQuan;
            StorageArray[12]._quantity = StorageArray[12]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 14:
            cout << "Please enter the number of ADDRES Actions to increment by:";
            cin >> userQuan;
            StorageArray[13]._quantity = StorageArray[13]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 15:
            cout << "Please enter the number of DAT Actions:";
            cin >> userQuan;
            StorageArray[14]._quantity = StorageArray[14]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 16:
            cout << "Please enter the number of DLA Actions:";
            cin >> userQuan;
            StorageArray[15]._quantity = StorageArray[15]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 17:
            cout << "Please enter the number of PIC Actions:";
            cin >> userQuan;
            StorageArray[16]._quantity = StorageArray[16]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 18:
            cout << "Please enter the number of NCL Actions:";
            cin >> userQuan;
            StorageArray[17]._quantity = StorageArray[17]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 19:
            cout << "Please enter the number of NOC Actions:";
            cin >> userQuan;
            StorageArray[18]._quantity = StorageArray[18]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 20:
            cout << "Please enter the number of PTR Actions:";
            cin >> userQuan;
            StorageArray[19]._quantity = StorageArray[19]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 21:
            cout << "Please enter the number of OCS Actions:";
            cin >> userQuan;
            StorageArray[20]._quantity = StorageArray[20]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 22:
            cout << "Please enter the number of WTDAXM Actions:";
            cin >> userQuan;
            StorageArray[21]._quantity = StorageArray[21]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 23:
            cout << "Please enter the number of XNANC Actions:";
            cin >> userQuan;
            StorageArray[22]._quantity = StorageArray[22]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 24:
            cout << "Please enter the number of WTDASR Actions:";
            cin >> userQuan;
            StorageArray[23]._quantity = StorageArray[23]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 25:
            cout << "Please enter the number of WTDAEC Actions:";
            cin >> userQuan;
            StorageArray[24]._quantity = StorageArray[24]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        case 26:
            cout << "Please enter the number of XWP Actions:";
            cin >> userQuan;
            StorageArray[25]._quantity = StorageArray[25]._quantity + userQuan;
            userQuan = 0;
            cin.clear();
            break;
        default:
            cout << "Try again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;





        }



    }


    return 0;
}//End of int main
