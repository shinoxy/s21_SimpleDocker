#include <fcgi_stdio.h>

void handle_request()
{
    printf("Content-type: text/html\r\n\r\n");
    printf("<html><head><title>Hello World</title></head><body>");
    printf("<h1>Hello World!</h1>");
    printf("</body></html>");
}

int main()
{
    while (FCGI_Accept() >= 0)  // Непрерывная обработка запросов, пока FastCGI-сервер не будет остановлен или произойдет ошибка.
    {
        handle_request();
    }

    return 0;
}
