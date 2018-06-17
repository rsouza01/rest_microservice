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

#include "system_properties.hpp"

using namespace std;
using namespace restws;

SystemProperties::SystemProperties(string fileName)
{
    cout << "Reading properties from file " << fileName << endl;

}

string SystemProperties::GetProperty(string pPropertyName) {

    return "";
}