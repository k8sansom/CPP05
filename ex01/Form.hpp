#include "Bureaucrat.hpp"

class Form {
    public:
        Form(const std::string& name, const int signGrade, const int exGrade );
        ~Form();
        Form( const Form &copy);
        Form& operator=( const Form &src);

		//getters
        int getSignGrade();
        int getExGrade();

		void beSigned(Bureaucrat& Bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
    
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signGrade;
        const int           _exGrade;

};