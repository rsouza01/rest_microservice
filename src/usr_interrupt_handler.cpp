//
//  Adapted from https://github.com/ivanmejiarocha/micro-service
//  by Ivan Mejia on 12/03/16.
//
//  under MIT License
//
// Copyright (c) 2016 ivmeroLabs. All rights reserved.
//
//

#include "usr_interrupt_handler.hpp"

static std::condition_variable _condition;
static std::mutex _mutex;

void cfx::InterruptHandler::hookSIGINT() {
    signal(SIGINT, InterruptHandler::handleUserInterrupt);        
}

void cfx::InterruptHandler::handleUserInterrupt(int signal) {
    if (signal == SIGINT) {
        std::cout << std::endl << "SIGINT trapped ..." << std::endl;
        _condition.notify_one();
    }
}

void cfx::InterruptHandler::waitForUserInterrupt() {
    std::unique_lock<std::mutex> lock { _mutex };
    _condition.wait(lock);
    std::cout << "User has signaled to interrupt program..." << std::endl;
    lock.unlock();
}