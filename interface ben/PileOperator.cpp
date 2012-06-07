#include "PileOperator.h"
#include "Constant.h"
#include "Overload.h"
#include <iostream>
#include "Controller.h"
#include "Common.h"


void PileOperator::Operate(std::string op){
    std::map<std::string, CommonTools::Operators> OpMap = CommonTools().GetMap();
    CommonTools::Operators OpRow = OpMap[op];

    //Code de sauvegarde, restauration
    PilePointer->Save();
    try{

     if( (OpRow>=OpMap["+"] && OpRow<=OpMap["/"] )|| OpRow==OpMap["POW"] || OpRow==OpMap["MOD"]){
        BinaryTypeCheck(op);
    } else if ((OpRow>=OpMap["SIGN"] && OpRow<=OpMap["CUBE"] )){//ajouter les autres
        UnaryTypeCheck(op);
    } else
        SpecialOp(op);

    } catch (std::exception e){
        //debug
        std::cout<<"Erreur : "<<e.what()<<std::endl<<"Restauration de la pile...."<<std::endl;
        PilePointer->Restore();
    }
}

void PileOperator::BinaryTypeCheck(std::string str){

    std::string value2 = PilePointer->Pop();
    std::string value1 = PilePointer->Pop();
    std::string result;

    /*détermination du type de constante à utiliser*/

    switch(CommonTools().TypeGuess(value1,value2)){
    case CommonTools::Z:
        result = BinaryOp(Integer(value1),Integer(value2),str);
        break;
    case CommonTools::Q:
        result = BinaryOp(Rational(value1),Rational(value2),str);
        break;
    case CommonTools::R:
        result = BinaryOp(Real(value1),Real(value2),str);
        break;
    case CommonTools::C:
        result = BinaryOp(Complex(value1),Complex(value2),str);
        break;
    case CommonTools::E:
        throw(std::exception("Operation unavailable for Expression Constant"));
    }
    PilePointer->Push(result);
}

void PileOperator::UnaryTypeCheck(std::string str){

    std::string value1 = PilePointer->Pop();
    std::string result;

    /*détermination du type de constante à utiliser*/

    switch(CommonTools().TypeGuess(value1)){
    case CommonTools::Z:
        result = UnaryOp(Integer(value1),str);
        break;
    case CommonTools::Q:
        result = UnaryOp(Rational(value1),str);
        break;
    case CommonTools::R:
        result = UnaryOp(Real(value1),str);
        break;
    case CommonTools::C:
        result = UnaryOp(Complex(value1),str);
        break;
    case CommonTools::E:
        throw(std::exception("Operation unavailable for Expression Constant"));
    }
    PilePointer->Push(result);
}

template<class T>
std::string PileOperator::BinaryOp(T v1,T v2, std::string op)
{
    std::map<std::string, CommonTools::Operators> OpMap = CommonTools().GetMap();

    switch(OpMap[op]){
        case CommonTools::PLUS:
            return (v1+v2).GetString();
        case CommonTools::MINUS:
            return (v1-v2).GetString();
        case CommonTools::TIMES:
            return (v1*v2).GetString();
        case CommonTools::DIV:
            return (v1/v2).GetString();
        default:
            throw(std::exception("Unavailable Binary Operator"));
    }

}

template<class T>
 std::string PileOperator::UnaryOp(T value,std::string op){

     std::map<std::string, CommonTools::Operators> map = CommonTools().GetMap();

     switch(map[op]){
        case CommonTools::COS:
            return cosinus(value).GetString();
        default:
            throw(std::exception("Unavailable Unary Operator"));
     }
 }
  std::string PileOperator::SpecialOp(std::string op){
      std::map<std::string, CommonTools::Operators> map = CommonTools().GetMap();

      std::string retour;
       PileConstantes backup;

      switch(map[op]){
        case CommonTools::SUM:
          /*sauvegarde de la pile
            addition de toute la pile
            retour de la dernière valeur
            restauration */
          backup = *PilePointer;
           // PilePointer->Save();
            while(PilePointer->Length()>1){
                try{
                    BinaryTypeCheck("+");
                } catch (std::exception e){
                    break;/*TROUVER comment couper la boucle en cas d'erreur*/
                }
            }
            retour = PilePointer->Pop();
            *PilePointer=backup;
            break;
        default:
          throw std::exception("Erreur SUM");
      }

      PilePointer->Push(retour);
      return retour; //utile ?
  }
