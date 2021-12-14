class BBS {
    private:
        unsigned long long p, q, m, x0;

    public:
        BBS();
        BBS(unsigned long long p,unsigned long long q,unsigned long long semente);
        unsigned long long getRandNumero();
        int getRandBit();
        void setParams(unsigned long long p,unsigned long long q,unsigned long long semente);
};