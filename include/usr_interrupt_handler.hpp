//
//  Adapted from https://github.com/ivanmejiarocha/micro-service
//  by Ivan Mejia on 12/03/16.
//
//  under MIT License
//
// Copyright (c) 2016 ivmeroLabs. All rights reserved.
//
//

#include <condition_variable>
#include <mutex>
#include <iostream>
#include <signal.h>

namespace cfx {

    class InterruptHandler {
        
    public:
        static void hookSIGINT();

        static void handleUserInterrupt(int signal);

        static void waitForUserInterrupt();
    };
}