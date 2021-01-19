#include <iostream>
using namespace std;

string encrypt(string plain_text,int shift);
string decrypt(string cipher_text,int shift);
int main(){
    string word;
    cout<<"write your word to encrypt it: "<<endl;
    cin>>word;
    cout<<"word is:"<<word<<", length: "<<word.length()<<endl;
    
    cout<<"Encrypted message is =>"<<encrypt(word,3);
    return 0;
    
}

string encrypt(string plain_text,int shift){
    char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char cipher_alp[26];
    string cipher_text="";
    int i,kk,pos;
    for(i=0;i<26;i++){
        cipher_alp[i]=alp[(i+shift)%26];
        

    }
    int length=plain_text.length();
    for(int i=0;i<length;i++){
        char k=plain_text[i];
        for(kk=0;kk<26;kk++){
            if(k==alp[kk]){
                pos=kk;
                cipher_text+=cipher_alp[pos];
                
            }
        }

    }

        	return cipher_text;
    



}
