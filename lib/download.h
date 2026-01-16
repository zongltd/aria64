#pragma once
#include<cstdlib>
//I just want to make this project more complex!hahaha!
void download(string url){
    string command="aria2c --split=64 --max-connection-per-server=16 --min-split-size=1M --continue=true --timeout=120 --max-tries=5 "+url;
    system(command.c_str());
}
