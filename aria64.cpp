#include "lib/help.h"
#include "lib/download.h"
#include<iostream>
#include<string>
using namespace std;
int main(int argc,char* argv[]){
    cout<<"Welcome to aria2c 64 thread version!\n";
    cout<<"Proudly written in nano!\n";
    cout<<"Author: LJC (zongltd) \n";
    cout<<"Thanks for all aria2 developer!\n";
    string URI=argv[1];
    if(argc<1 || URI=="--help" || URI=="-h")print_usage();
    else {
        cout<<"Start Downloading...";
        download(URI);
    }
    return 0;
}
