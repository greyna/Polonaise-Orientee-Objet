#include "Pileconstantes.h"
#include "sstream"

PileConstantes& PileConstantes::Push(const std::string & str, bool b)
{
    std::stack<std::string>*  p=(b)? &stack: &backup;
    p->push(str);
    return *this; //pour chainer les push
}

std::string PileConstantes::Pop(bool b){
    std::stack<std::string>*  p=(b)? &stack: &backup;

    if (p->size()==0)
        throw(std::exception("Empty stack"));
    std::string returnvalue = p->top();
    p->pop();
    return returnvalue;
}

 std::ostream & PileConstantes::DebugDisplay(std::ostream& f){
     std::stack<std::string> tmpStack;
     while(stack.size()>0){
         tmpStack.push(Pop());
     }
     while(tmpStack.size()>0){
         f<<tmpStack.top()<<"|";
         stack.push(tmpStack.top());
         tmpStack.pop();
     }
     f<<std::endl;
     return f;
 }

 QString PileConstantes::GetStringOutput(){ /*MOCHE*/
     std::stringstream f;
     std::stack<std::string> tmpStack;
     while(stack.size()>0){
         tmpStack.push(Pop());
     }
     while(tmpStack.size()>0){
         f<<tmpStack.top()<<"|";
         stack.push(tmpStack.top());
         tmpStack.pop();
     }
     f<<std::endl;
     QString retour;
     retour = retour.fromStdString(f.str()); //cast Qstring <- string
     return retour;

 }

 void PileConstantes::Save(){
     backup = stack;
 }

 void PileConstantes::Restore(){
     stack = backup;
 }

 int PileConstantes::Length(bool b){
     std::stack<std::string>*  p=(b)? &stack: &backup;

     return p->size();
 }





