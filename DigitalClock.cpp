#include<iostream>
#include<windows.h>
using namespace std;


void helper(){
    int hr,min,sec;
    int d=1000;
    cout<<"------------------------------------------------"<<"Set Time: "<<"----------------------------------------------"<<endl;
    cout<<"Enter hour: ";
    cin>>hr;
    cout<<endl;
    cout<<"Enter Min: ";
    cin>>min;
    cout<<endl;
    cout<<"Enter Sec: ";
    cin>>sec;
    cout<<endl;

    //If input is not valid
    if(hr>12 || min>60 || sec>60){
        cout<<"Please Enter Valid data!";
        exit(0);
    }

//Infinite loop for printing the clock time.
while (1){
      //set the background color
      system("color 4C");
       sec++;
        // This increases the minutes
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        // This increases the hour
        if (min > 59)
        {
            hr++;
            min = 0;
        }
        // This will reset the hour
        if (hr > 12)
        {
            hr = 00;
        }


        //Printing the clock time
        cout << "-------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"    ================================================================================================================================"<<endl;
        cout<<"    ================================================================================================================================"<<endl;
        cout<<"  ==============================================="<<"The digital time is :"<<"========================================================"<<endl;
        cout<<"   ===================================================  "<<hr<<":"<<min<<":"<<sec<<"  ================================================"<<endl;
        cout<<"    ================================================================================================================================"<<endl;
        cout<<"    ================================================================================================================================"<<endl;
        cout << "-------------------------------------------------------------------------------------------------------------------------------"<<endl;

        //suspended the execution for 1000 milliseconds
        Sleep(1000);
        
        //It will clear the screen
        system("cls");
     }
}

int main(){
    
    helper();

    return 0;
} 
