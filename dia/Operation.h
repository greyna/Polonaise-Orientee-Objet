#include "PileExpression.h"

/// class Operation - 
class Operation : public Expression {
protected:
  enum TypeOp type;
  
  set_string_associe ();
  set_type ();
  
public:
  bool isNumber ();
  Nombre evaluer (Nombre operande, enum Mode mode = C, enum ModeAngle mode_angle = deg);
  Nombre evaluer (Nombre operande1, Nombre operande2, enum Mode mode = C);
  evaluer (PileExpression pile_stockage, enum Mode mode = C, int x = 0, int y = 0);
  Nombre evaluer (PileExpression operande, enum Mode mode = C, enum ModeAngle mode_angle = deg);
};

