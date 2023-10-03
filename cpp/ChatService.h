#include "PrismaService.h"
#include "Logger.h"

/**
    @file "ChatService.h"
    @brief Сервис для работы с сущностью "Чат"
    @author v.khizhnyakov
    @copyright BMSTU
    @extends PrismaService
    @date 03-10-2023
    @version 1.0.0
  \par Ипользует файлы:
    @ref PrismaService.h
    @ref Logger.h
  \par Ипользуется в файлах:
    @ref ChatService.cpp
 */
class ChatService : PrismaService
{

private:
    /**
    @file "ChatService.h"
    @brief инстанс логгера
    */
    Logger logger;

public:
    /**
    @file "ChatService.h"
    @throws NotFoundException, ConnectionException
    @brief Конструктор по умолчанию
    */
    ChatService();
    /**
    @file "ChatService.h"
    @param username никнейм пользователя, чьи чаты ищем
    @return список идентификаторов чатов пользователя
    @throws NotFoundException, ConnectionException
    @brief Получить список идентификаторов чатов пользователя
    */
    std::string *getUserRooms(std::string username);
    /**
    @file "ChatService.h"
    @brief Создать чат с именем roomName
    @param roomName имя чата, который надо создать
    @return идентификатор созданного чата
    @throws AlreadyExistException, ConnectionException
    */
    std::string createRoom(std::string roomName);
};
