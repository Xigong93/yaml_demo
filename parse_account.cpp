//
// Created by pokercc on 2019/4/20.
//
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "yaml-cpp-master/include/yaml-cpp/yaml.h"

using namespace std;


int main() {

    YAML::Node config = YAML::LoadFile("account.yaml");
    string username, password;
    auto account = config["account"];
    username = account["username"].as<string>();
    password = account["password"].as<string>();
    cout << "username:" << username << endl;
    cout << "password:" << password << endl;

}