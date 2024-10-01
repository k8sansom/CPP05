#include "Form.hpp"

const char	*Form::GradeTooHighException::what() const throw() {
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade too low!");
}

Form::Form(const std::string& name, const int signGrade, const int exGrade ):_name(name), _signGrade(signGrade), _exGrade(exGrade) {
	_isSigned = false;
}

Form::~Form() {}

Form::Form( const Form &copy): _name(copy._name), _signGrade(copy._signGrade), _exGrade(copy._exGrade) {}

Form& Form::operator=( const Form &src) {
	if (this != &src) {
		_isSigned = src._isSigned;
	}
	return (*this);
}

int Form::getSignGrade() {
	return (_signGrade);
}

int Form::getExGrade() {
	return (_exGrade);
}
