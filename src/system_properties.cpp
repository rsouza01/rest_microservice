//
//  Adapted from https://github.com/ivanmejiarocha/micro-service
//  by Ivan Mejia on 12/03/16.
//
//  under MIT License
//
// Copyright (c) 2016 ivmeroLabs. All rights reserved.
//
//
#include <iostream>

#include "stdinc.h"

#include "system_properties.hpp"

using namespace std;
using namespace restws;
using json = nlohmann::json;

SystemProperties::SystemProperties(string fileName)
{
    cout << "SystemProperties::Reading properties from file " << fileName << endl;

    std::ifstream jsonFile(fileName);

    jsonFile >> this->jsonStructure;

    cout << jsonStructure << endl;

    cout << "SystemProperties::Done." << endl;
}

string SystemProperties::GetProperty(string pPropertyName) 
{
    return jsonStructure[pPropertyName];
}