#include "blockchain.h"

blockChain::blockChain()
{
    numBlocks = 0;
    block genesis(numBlocks++, "Genesis Block", 0);
    chain.enqueue(genesis);
}

void blockChain::insert(std::string message)
{
    block newBlock(numBlocks++, message, chain.back().getHash());
    chain.enqueue(newBlock);
}
