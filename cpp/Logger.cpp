#include "Logger.h"

Logger::Logger()
{
    this->prefix = "";
}

Logger::Logger(std::string prefix)
{
    this->prefix = prefix;
}
