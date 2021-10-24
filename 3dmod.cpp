#include <iostream>
#include <fstream>

using namespace std;


int main ()
{
        int ch, key;
        string fn;
        char c;
        cout<<"Enter 1 for Encryption.\nEnter 2 to Decryption."<<endl;
        cin>>ch;
        cout<<"Enter Key : ";
        cin>>key;
        cout<<"Enter name of the File : ";
        cin>>fn;

        ifstream fin;
        ofstream fout;

        switch(ch)
        {
            case 1: fin.open(fn.c_str(), ios::binary);
                    fn = "Enc_output";
                    fout.open(fn.c_str(), ios::binary);
                    while (!fin.eof())
                    {
                        fin>>noskipws>>c;
                        int temp = (c + key);
                        fout<<(char)temp;
                    }
                    fin.close();
                    fout.close();

                    break;

            case 2: fin.open(fn.c_str(), ios::binary);
                    fn = "Dec_output";
                    fout.open(fn.c_str(), ios::binary);
                    while (!fin.eof())
                    {
                        fin>>noskipws>>c;
                        int temp = (c - key);
                        fout<<(char)temp;
                    }
                    fin.close();
                    fout.close();

                    break;

            default: cout<<"Invalid Choice";
        }
}
