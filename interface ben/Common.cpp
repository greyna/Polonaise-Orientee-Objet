#include "Common.h"

void CommonTools::InitOperatorsMap(std::map<std::string, CommonTools::Operators> *map){
    map->insert(std::pair<std::string, CommonTools::Operators>("SIN", SIN));
    map->insert(std::pair<std::string, CommonTools::Operators>("COS", COS));
    map->insert(std::pair<std::string, CommonTools::Operators>("TAN", TAN));
    map->insert(std::pair<std::string, CommonTools::Operators>("SINH", SINH));
    map->insert(std::pair<std::string, CommonTools::Operators>("COSH", COSH));
    map->insert(std::pair<std::string, CommonTools::Operators>("TANH", TANH));
    map->insert(std::pair<std::string, CommonTools::Operators>("LN", LN));
    map->insert(std::pair<std::string, CommonTools::Operators>("LOG", LOG));
    map->insert(std::pair<std::string, CommonTools::Operators>("INV", INV));
    map->insert(std::pair<std::string, CommonTools::Operators>("SQRT", SQRT));
    map->insert(std::pair<std::string, CommonTools::Operators>("SQR", SQR));
    map->insert(std::pair<std::string, CommonTools::Operators>("CUBE", CUBE));
    map->insert(std::pair<std::string, CommonTools::Operators>("+", PLUS));
    map->insert(std::pair<std::string, CommonTools::Operators>("-", MINUS));
    map->insert(std::pair<std::string, CommonTools::Operators>("*", TIMES));
    map->insert(std::pair<std::string, CommonTools::Operators>("/", DIV));
    map->insert(std::pair<std::string, CommonTools::Operators>("%", MOD));
    map->insert(std::pair<std::string, CommonTools::Operators>("POW", POW));
    map->insert(std::pair<std::string, CommonTools::Operators>("!", FACT));
    map->insert(std::pair<std::string, CommonTools::Operators>("EVAL", EVAL));
    map->insert(std::pair<std::string, CommonTools::Operators>("SIGN", SIGN));
    map->insert(std::pair<std::string, CommonTools::Operators>("SWAP", SWAP));
    map->insert(std::pair<std::string, CommonTools::Operators>("SUM", SUM));
    map->insert(std::pair<std::string, CommonTools::Operators>("MEAN", MEAN));
    map->insert(std::pair<std::string, CommonTools::Operators>("CLEAR", CLEAR));
    map->insert(std::pair<std::string, CommonTools::Operators>("DUP", DUP));
    map->insert(std::pair<std::string, CommonTools::Operators>("DROP", DROP));
}

std::map<std::string, CommonTools::Operators>CommonTools::GetMap(){
    std::map<std::string, CommonTools::Operators> OperatorsMap;
    InitOperatorsMap(&OperatorsMap);
    return OperatorsMap;
}

CommonTools::ConstantType CommonTools::TypeGuess(std::string value1, std::string value2){
    ConstantType Type = Z;
    if(value1.find("/")!=std::string::npos || value2.find("/")!=std::string::npos)
        Type = Q;
    if(value1.find(".")!=std::string::npos || value2.find(".")!=std::string::npos)
        Type = R;
    if(value1.find("$")!=std::string::npos || value2.find("$")!=std::string::npos)
        Type = C;
    if(value1.find("'")!=std::string::npos || value2.find("'")!=std::string::npos)
        Type = E;
    return Type;
}
