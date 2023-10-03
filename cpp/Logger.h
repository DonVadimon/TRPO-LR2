#pragma once;
#include <iostream>

/**
    @file "Logger.h"
    @brief Логирует в консоль
    @author v.khizhnyakov
    @copyright BMSTU
    @date 03-10-2023
    @version 1.0.0
  \par Ипользуется в файлах:
    @ref ChatService.h
    @ref Logger.cpp
 */
class Logger
{
private:
    /**
     @brief Префикс лога
    */
    std::string prefix;

public:
    /**
    @file "Logger.h"
    @brief Конструктор по умолчанию
    */
    Logger();
    /**
    @file "Logger.h"
    @brief Конструктор с префиксом логов
    */
    Logger(std::string prefix);
    /**
    @file "Logger.h"
    @brief Залогировать информацию
    @param input что логнуть
    */
    void info(std::string *input);
};
