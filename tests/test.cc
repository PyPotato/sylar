#include <iostream>
#include <thread>
#include "sylar/log.h"
#include "sylar/util.h"

int main(int argc, char** argv) {
    sylar::Logger::ptr logger(new sylar::Logger);
    logger->addAppender(sylar::LogAppender::ptr(new sylar::StdoutLogAppender));
    
    // sylar::LogEvent::ptr event(new sylar::LogEvent(__FILE__, __LINE__, 0, sylar::GetThreadId(), sylar::GetCoroutineId(), time(0)));
    // logger->log(sylar::LogLevel::DEBUG, event);
    std::cout << "Hello sylar log" << std::endl;

    SYLAR_LOG_INFO(logger) << "test micro";
    return 0;
}