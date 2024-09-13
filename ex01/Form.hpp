#include "Bureaucrat.hpp"

class Form {
    public:
        Form(const std::string& name, const int signGrade, const int exGrade );
        ~Form();
        Form( const Form &copy);
        Form& operator=( const Form &src);

        int getSignGrade();
        int getExGrade();
    
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signGrade;
        const int           _exGrade;

};