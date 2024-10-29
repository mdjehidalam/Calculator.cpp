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
     if(choice=='0' ||choice=='1'||choice=='2'||choice=='3'|| choice=='4' ||choice=='5' ||choice=='6' ||choice=='7' ||choice=='8' || choice=='9')
    {
        calculation= calculation*10 +(choice-'0');
        system("cls");
        cout<<"ans:"<<calculation<<endl;
        goto level;
    }
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
