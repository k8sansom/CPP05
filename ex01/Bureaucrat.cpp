#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low!");
}

Bureaucrat::Bureaucrat(int grade, const std::string &name) : _grade(grade), _name(name) {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
	if (this != &src) {
		_grade = src._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}


std::string	Bureaucrat::getName() const {
	return (_name);
}

int	Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
}

void	Bureaucrat::signForm(Form& f) {
	if (f.getSignedStatus()) {
		std::cout << _name << " signed " << f.getName() << std::endl;
	} else {
		std::cout << _name << " could not sign form " << f.getName() << " because " << _grade << " is too low a grade." << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}