#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int n, i, t;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string direction;
    string message;
    cin>>direction;
    cin>>message;
    int length = message.size();
    if(direction == "R"){
        for(i=0; i<length; i++){
            for(int j=0; j<30; j++){
                if(message[i] == keyboard[j]){
                    cout<<keyboard[j-1];
                    break;
                }
            }
        }
    }else{
        for(i=0; i<length; i++){
            for(int j=0; j<30; j++){
                if(message[i] == keyboard[j]){
                    cout<<keyboard[j+1];
                    break;
                }
            }
        }
    }
    /*for(i=0; i<length; i++){
        cout<<final[i];
    }
    cout<<endl;*/
}
