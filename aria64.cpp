#include "lib/help.h"
#include "lib/download.h"
#include<iostream>
#include<string>
using namespace std;
int main(string URI){
    cout<<"Welcome to aria2c 64 thread version!\n";
    cout<<"Proudly written in nano!\n";
    cout<<"Author: LJC (zongltd) \n";
    cout<<"Thanks for all aria2 developer!\n";
    if(URI=="" || URI=="--help" || URI=="-h")print_usage();
    cout<<"Start Downloading..."
    Download(URI);
    return 0;
}
