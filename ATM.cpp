#include <iostream>
#include <iomanip>

using namespace std;      //ATM

int deposit(float CB)
{
    double d;
    
    cout << "\nKripya jama rashi ko darj kare: ";
    cin >> d;
    
    CB=CB+d;
    
    cout << "\nAAPKE BACHAT KHATE ME " << d << " RUPAY SAFALTAPURVAK JAMA KAR DIE GAE HAI\n        DHANYAWAAD!!!"<<"\n";
    cout << "\n";
    
    cout << "AAPKE KHATE ME AB HAI " << CB << " RUPAY\n\n    JAO JAKE OR PESE KAMAO";
    return 0;
}

int withdrawl(float CB)
{
    double w;
    
    cout << "\nKripya bhugtaan rashi ko darj kare: ";
    cin >> w;
    
    CB=CB-w;
    
    if(CB>0)
    {
    cout << "\nAAPKE BACHAT KHATE SE " << w << " RUPAY SAFALTAPURVAK BHUGTAAN KAR DIE GAE HAI\n       DHANYAWAAD!!!"<<"\n";
    cout << "\n";
    
    cout << "AAPKE KHATE ME AB HAI " << CB << " RUPAY\n\n    JAO JAKE OR PESE KAMAO";
    }
    
    if(CB<0)
    {
        cout << "\n\n SHAMA KARE LEKIN AAPKE KHATE ME ITNE PESE UPASTHIT NAHI HAI\n\n";
        cout <<  "ATAH AAPSE NIVEDAN HAI KI NASHE ME ATM MACHINE KA UPYOG NA KARE\n\n         DHANYAWAAD!!!";
    }
    
    return 0;
}

int main()
{
    int n,p;
    char x;
    double CB;
    
    cout << fixed << setprecision(2);
    
    cout << "NAMASKAR ! ATM ME AAPKA SWAGAT HAI.\n\n";
    
    cout << "Kripya apna account number darj kare:";
    cin >> n;
    
    if(n==123456)
    {
        cout << "ENTER PIN:";
        cin >> p;
        
        if(p==1212)
        {
            CB=1000000;
            
            cout << "\nNAME:SUSHANT \tA/C No. :123456 \tIFSC CODE:bas na koi alsi ka thodi hai\nCurrent Balance:" << CB;
            
            cout << "\n\nPESE JAMA KARNE K LIE 'D' DABAE\t\tPESE BHUGTAN KARNE K LIE 'W' DABAE\n";
            cin >> x;
     
            if(x=='D')
            {
                deposit(CB);
            }
            else if(x=='W')
            {
                withdrawl(CB);
            }
        }
        else
        {
            cout << "WRONG PIN...  OO pols aa gai pols!";
        }
    }
    
    else if(n==123123)
    {
        cout << "ENTER PIN:";
        cin >> p;
        
        if(p==1212)
        {
            CB=2000000;
            
            cout << "\nNAME:HARSH \tA/C No. :123123 \tIFSC CODE:bas na koi alsi ka thodi hai\nCurrent Balance:" << CB;
            
            cout << "\n\nPESE JAMA KARNE K LIE 'D' DABAE\t\tPESE BHUGTAN KARNE K LIE 'W' DABAE\n";
            cin >> x;
     
            if(x=='D')
            {
                deposit(CB);
            }
            else if(x=='W')
            {
                withdrawl(CB);
            }
        }
        else
        {
            cout << "WRONG PIN...  OO pols aa gai pols!";
        }
    }
    
    else if(n==121121)
    {
        cout << "ENTER PIN:";
        cin >> p;
        
        if(p==1212)
        {
            CB=1000000;
            
            cout << "\nNAME:PRIYAL \tA/C No. :121121 \tIFSC CODE:bas na koi alsi ka thodi hai\nCurrent Balance:" << CB;
            
            cout << "\n\nPESE JAMA KARNE K LIE 'D' DABAE\t\tPESE BHUGTAN KARNE K LIE 'W' DABAE\n";
            cin >> x;
     
            if(x=='D')
            {
                deposit(CB);
            }
            else if(x=='W')
            {
                withdrawl(CB);
            }
        }
        else
        {
            cout << "WRONG PIN...  OO pols aa gai pols!";
        }
    }
    
    else if(n==112233)
    {
        cout << "ENTER PIN:";
        cin >> p;
        
        if(p==1212)
        {
            CB=2000000;
            
            cout << "\nNAME:MEGHA \tA/C No. :112233 \tIFSC CODE:bas na koi alsi ka thodi hai\nCurrent Balance:" << CB;
            
            cout << "\n\nPESE JAMA KARNE K LIE 'D' DABAE\t\tPESE BHUGTAN KARNE K LIE 'W' DABAE\n";
            cin >> x;
     
            if(x=='D')
            {
                deposit(CB);
            }
            else if(x=='W')
            {
                withdrawl(CB);
            }
        }
        else
        {
            cout << "WRONG PIN...  OO pols aa gai pols!";
        }
    }
    
    else if(n==123321)
    {
        cout << "ENTER PIN:";
        cin >> p;
        
        if(p==1212)
        {
            CB=2000000;
            
            cout << "\nNAME:ABHISHEK \tA/C No. :123321 \tIFSC CODE:bas na koi alsi ka thodi hai\nCurrent Balance:" << CB;
            
            cout << "\n\nPESE JAMA KARNE K LIE 'D' DABAE\t\tPESE BHUGTAN KARNE K LIE 'W' DABAE\n";
            cin >> x;
     
            if(x=='D')
            {
                deposit(CB);
            }
            else if(x=='W')
            {
                withdrawl(CB);
            }
        }
        else
        {
            cout << "WRONG PIN...  OO pols aa gai pols!";
        }
    }
    
    return 0;
}
