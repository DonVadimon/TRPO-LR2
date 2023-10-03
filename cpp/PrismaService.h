#pragma once;
#include <string>

/**
    @file "PrismaService.h"
    @brief Сервис для работы с БД
    @author v.khizhnyakov
    @copyright BMSTU
    @extends PrismaService
    @date 03-10-2023
    @version 1.0.0
  \par Ипользует файлы:
    @ref PrismaService.h
  \par Ипользуется в файлах:
    @ref ChatService.h
    @ref PrismaService.cpp
*/
class PrismaService
{
private:
    /**
     @brief Указатель на коннектор в БД
    */
    void *db;
    /**
     @brief Имя таблицы в БД
    */
    std::string tableName;

public:
    /**
    @file "PrismaService.h"
    @throws NotFoundException, ConnectionException
    @brief Конструктор класса
    @param tableName Имя таблицы в БД
    */
    PrismaService(std::string tableName);
};
