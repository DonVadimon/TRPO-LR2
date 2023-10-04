#pragma once;
#include <string>

/**
    @file PrismaService.h
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
  @brief Конструктор класса
  @param tableName Имя таблицы в БД
  @throws NotFoundException - не смог найти сущность
  @throws ConnectionException - нет коннекта к БД
  */
  PrismaService(std::string tableName);
  /**
  @throws NotFoundException - не смог найти сущность
  @throws ConnectionException - нет коннекта к БД
  @brief найти одну запись
  @param predicate паттерн поиска
  @return void
  */
  void find(void *predicate);
  /**
  @throws NotFoundException - не смог найти сущность
  @throws ConnectionException - нет коннекта к БД
  @brief найти много записей
  @param predicate паттерн поиска
  @return void
  */
  void findMany(void *predicate);
  /**
  @throws NotFoundException - не смог найти сущность
  @throws ConnectionException - нет коннекта к БД
  @brief создать одну запись
  @param dto пейлад для создания
  @return void
  */
  void create(void *dto);
  /**
  @throws NotFoundException - не смог найти сущность
  @throws ConnectionException - нет коннекта к БД
  @brief создать много записей
  @param dto пейлад для создания
  @return void
  */
  void createMany(void *dto);
  /**
  @throws NotFoundException - не смог найти сущность
  @throws ConnectionException - нет коннекта к БД
  @brief удалить одну запись
  @param predicate пейлад для удаления
  @return void
  */
  void remove(void *predicate);
  /**
  @throws NotFoundException - не смог найти сущность
  @throws ConnectionException - нет коннекта к БД
  @brief удалить много записtq
  @param predicate пейлад для удаления
  @return void
  */
  void removeMany(void *predicate);
};
