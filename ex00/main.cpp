#include "Bureaucrat.hpp"

int main() {
    try {
        // Create a Bureaucrat with a valid grade
        Bureaucrat bob(2, "Bob");
        std::cout << bob << std::endl;  // Expected output: Bob, bureaucrat grade 2

        // Increment and decrement the grade
        bob.incrementGrade();
        std::cout << "After incrementing: " << bob << std::endl;  // Expected: Bob, bureaucrat grade 1
        
        bob.decrementGrade();
        bob.decrementGrade();
        std::cout << "After decrementing twice: " << bob << std::endl;  // Expected: Bob, bureaucrat grade 3

        // Test invalid grade (too high)
        Bureaucrat alice(0, "Alice");  // This will throw GradeTooHighException
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        // Test invalid grade (too low)
        Bureaucrat jane(151, "Jane");  // This will throw GradeTooLowException
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}