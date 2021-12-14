#include "bbs.h"

/*
 *  Encontrar dois numeros primos grande, (p) e (q), eles devem ser congruentes
 *  a 3 (mod 4). O produto de (p) e (q), M é um inteiro blum.
 *  
 *  Choose another random integer, (x), which is relatively prime to
 *  (n).  Compute x[0] = (x^2) % n.  x[0] is the seed for the generator.
 *  now we can start computing bits.  The (i)th pseudo-random bit is the
 *  least significant bit of x[i] = (x[i-1] ^ 2) % n.
 */

//Construtor Padrao
BBS::BBS(){
    //parametros padrao
    this->p = 7;
    this->q = 11;
    this->x0 = 5;
    //inteiro blum
    this->m = this->p * this->q;
}

/*
    setar parametros do objeto
    @param Numero Primo Blum p
    @param Numero Primo Blum q
    @param Semente x0
*/
void BBS::setParams(unsigned long long p,unsigned long long q,unsigned long long semente){
    this->p = p;
    this->q = q;
    this->x0 = semente;
    //inteiro blum
    this->m = this->p * this->q;
}

/*
    construtor sobrecarregado com paramentros
    @param Numero Primo Blum p
    @param Numero Primo Blum q
    @param Semente x0
*/
BBS::BBS(unsigned long long p,unsigned long long q,unsigned long long semente){
    this->setParams(p,q,semente);
}

/*
    Obter proximo numero random
*/
unsigned long long BBS::getRandNumero(){
    unsigned long long num = (this->x0 * this->x0) % this->m;
    //atualizo o meu x0 para o numero obtido
    this->x0 = num;
    return num;
}

/*
    Obter proximo bit random
*/
int BBS::getRandBit(){
    return this->getRandNumero() % 2;
}

