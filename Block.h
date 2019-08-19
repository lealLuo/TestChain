#include <cstdint>
#include <iostream>

using namespace std;

class Block
{
public:
    string sPrevHash; //! hash of previous block

    // sDataIn is a reference and cannot be changed
    Block(uint32_t nIndexIn, const string &sDataIn); //! Constructor

    string GetHash();

    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    int64_t _nNonce;
    string _sData; // Tx Data
    string _sHash; // Hash of Block
    time_t _tTime;

    string _CalculateHash() const; // use const to ensure the method doesn't change any var in bc
};
