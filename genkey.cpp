#include "genkey.hpp"
#include <QString>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

Genkey::Genkey()
{
    m_fd = 1;
}

int Genkey::setfd(int fd)
{
    if (fd > 0)
        m_fd = fd;
    return (m_fd);
}

int Genkey::getfd()
{
    return (m_fd);
}

int Genkey::setfilename(QString filename)
{
    int  fd;

    fd = open(filename.toUtf8().data(), O_APPEND);
    if (fd > 0)
        m_fd = fd;
    close(fd);
    return (m_fd);
}

int Genkey::setfilename(char *filename)
{
    int  fd;

    fd = open(filename, O_APPEND);
    if (fd > 0)
        m_fd = fd;
    close(fd);
    return (m_fd);
}

int Genkey::generate(unsigned int n)
{
    int test;
    char buff;

    test = 1;
    for (; test >= 0 && n; n--)
    {
        buff = char(qrand());
        test = write(m_fd, &buff, 1);
    }
    return (1);
}
