#include<iostream.h>
using namespace std;
class Array{
       
        public:
        int n,Arr_Val[50],pos,Val,c,i,N2,temp,x;
        void Print(){
            cout<<"Welcome to cpp choose the options";
            cout<<"1.insert,2.Delete,3.Append,4.Rotate";
        cin>>x;

        
       switch(x){
       case 1:
            cout<<"Enter the size of the Array";
       for(int i=0;i<n;i++)
       {
           cout<<Arr_Val[i];
       }
       cout<<"Enter the position to insert the value";
        cout<<pos;
        cout<<"Enter the value to insert";
        cout<<Val;
        for(c=n-1;c>=pos-1;c--){
            Arr_Val[c+1]=Arr_Val[c];
            Arr_Val[pos-1]=Val;

        }
        for(i=0;i<n;i++)
        {
            cout<<Arr_Val[i];
        }
        break;
        case 2:
        cout<<"Deletion";
             cout<<"Enter the size of the Array";
       for(int i=0;i<n;i++)
       {
           cout<<Arr_Val[i];
       }
        if(n>=pos-1){
            cout<<"Deletion";
        }
        else{
            for(c=pos-1;c<n-1;c++)
            {
                Arr_Val[c]=Arr_Val[c+1];
                
            }
            for(i=0;i<n;i++)
            {
                cout<<Arr_Val[i];
            }
            break;
            case 3:
            cout<<"Append";
                 cout<<"Enter the size of the Array";
       for(int i=0;i<n;i++)
       {
           cout<<Arr_Val[i];
       }
            cout<<"Enter the value to Append";
                for(i=n;i>0;i--){
                    Arr_Val[i]=Arr_Val[i-1];
                    Arr_Val[0]=N2;
                }
                for(i=0;i<n;i++){
                    cout<<Arr_Val[i];
                }
                break;
                case 4:
                cout<<"Rotation";
                     cout<<"Enter the size of the Array";
       for(int i=0;i<n;i++)
       {
           cout<<Arr_Val[i];
       }
                temp=Arr_Val[0];
                for(i=0;i<n-1;i++){
                     Arr_Val[i]=Arr_Val[i+1];
                     
                }
                temp=Arr_Val[i];
                    for(i=0;i<n-1;i++){
                        cout<<Arr_Val[i];
                    }
                    break;
                    default:
                    cout<<"Choose other than 1,2,3,4";
                    break;

        }
        }
        }
};
int main(){
    Array obj1;
    int m,pos1,Val1,N2_App;
    cin>>m;
    obj1.n=m;
    cin>>pos1;
    obj1.pos=pos1;
    cin>>Val1;
    obj1.Val=Val1;
    cin>>N2_App;
    obj1.N2=N2_App;
    obj1.Print();
    return 0;
}