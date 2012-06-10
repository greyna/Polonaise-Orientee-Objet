/// class Expression - 
class Expression {
  // Attributes
protected:
  string string_associe;
  // Operations
public:
  virtual bool isNumber () = 0;
  string get_string_associe ();
protected:
  virtual set_string_associe () = 0;
};

