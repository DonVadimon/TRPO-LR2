#include "PrismaService.h"

PrismaService::PrismaService(std::string tableName)
{
    this->db = nullptr;
    this->tableName = tableName;
}
