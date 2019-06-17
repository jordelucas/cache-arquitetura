#ifndef CACHE_H
#define CACHE_H

#include "dado.h"

class Cache {
    private:
        Dado * L1;
        int posicaoAtual;
        int totalPosicoes;
    
    public:
        Cache();
        Cache(int qtd);
        void leitura(Dado * dado);
        bool verificarEnd(int endereco);
        void getL1();
};

#endif