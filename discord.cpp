#include <iostream>
#include <discord.h> // Замените на правильный заголовочный файл Discord-C++

const std::string BOT_TOKEN = "YOUR_BOT_TOKEN_HERE";

void onMessage(discord::Client* client, const discord::Message& message)
{
    // Ваш обработчик сообщений
    // Пример: отправим сообщение "Hello, World!" в канал, если бот получит сообщение "привет"
    if (message.content == "привет") {
        client->createMessage(message.channel_id, "Hello, World!");
    }
}

int main()
{
    discord::Client client(BOT_TOKEN);
    client.onMessage(onMessage);

    client.run();

    return 0;
}
