#ifndef GENKEY_HPP
#define GENKEY_HPP

#include "cryxor_global.hpp"

class CRYXORSHARED_EXPORT Genkey
{
    public:
        Genkey();
        int setfd(int fd);
        int getfd();
        int setfilename(QString filename);
        int setfilename(char *filename);
        int generate(unsigned int n);

    private:
        int m_fd;
};

#endif // GENKEY_HPP
