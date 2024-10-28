 #include<bits/stdc++.h>
 #include<conio.h>
 using namespace std;
 void watermark()
 {
    cout<<"----------------CALCULATOR-------------------"<<endl<<endl;
    cout<<"COLLEGE NAME: ARYA COLLEGE OF ENGINEERING JAIPUR"<<endl;
    cout<<"Created By: MD JEHID ALAM,  BRANCH: CSE,   SESSION : 2024-28"<<endl;
    cout<<"Project Made On: Mon, 28 oct 2024"<<endl<<endl;
    cout<<"Press Any key to START"<<endl;

 }
 int main()
 {
    system("cls");
    watermark();
    getch();
    system("cls");
    static float calculation=0;
    float n,n2;
    cin>>n;
    level:
    char choice;
   // cout<<"Enter you choice(+,-,*,/): "<<flush;
   cin>>choice;
    switch(choice) {
        case '+' : 
            cin>>n2;
            calculation = calculation+n+n2;
            n=0;
            system("cls");
            
            cout<<"Ans:"<<calculation<<endl;
            goto level;
            break;
        case '-':
            cin>>n2;
            calculation = calculation+n-n2;
            n=0;
            system("cls");
            
            cout<<"Ans:"<<calculation<<endl;
            goto level;
            break;
        case '*':
            cin>>n2;
            calculation = (calculation+n)*n2;
            n=0;
            system("cls");
             
            cout<<"Ans:"<<calculation<<endl;
            goto level;
            break;
        case '/' : 
            cin>>n2;
            calculation = (calculation+n)/n2;
            n=0;
            system("cls");
 
            cout<<"Ans:"<<calculation<<endl;
            goto level;
            break;
        default: 
            cout<<"Invalid Entered Number/operator"<<endl;
    }
 }