#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {
		// Create Bureaucrats with invalid grades
		try {
            Bureaucrat invalidBureaucrat("InvalidBureaucrat", 0);  // Grade too high
        } catch (std::exception &e) {
            std::cerr << "Bureaucrat is invalid because " << e.what() << std::endl;
        }
        try {
            Bureaucrat anotherInvalidBureaucrat("AnotherInvalidBureaucrat", 200);  // Grade too low
        } catch (std::exception &e) {
            std::cerr << "Bureaucrat is invalid because " << e.what() << std::endl;
        }
		// Create invalid AForms
		try {
            AAForm invalidAForm("InvalidForm", 0, 100);  // Sign grade too high (invalid)
        } catch (std::exception &e) {
            std::cerr << "AForm is invalid because " << e.what() << std::endl;
        }
        try {
            AForm anotherInvalidAForm("AnotherInvalidAForm", 151, 100);  // Sign grade too low (invalid)
        } catch (std::exception &e) {
            std::cerr << "AForm is invalid because " << e.what() << std::endl;
        }
				// Create Bureaucrats with different grades
        Bureaucrat alice("Alice", 50);
        Bureaucrat bob("Bob", 5);
        Bureaucrat charlie("Charlie", 150); // Lowest possible grade
        // Create AForms with different signing and execution grades
        AForm AFormA("AFormA", 60, 100);
        AAForm AFormB("AFormB", 10, 50);
        AForm AFormC("AAFormC", 150, 150); // Easiest AForm to sign
        // Display the AForm inAFormation
        std::cout << AFormA << std::endl;
        std::cout << AFormB << std::endl;
        std::cout << AFormC << std::endl;

        // Test signing AForms with different Bureaucrats
        bob.signAForm(AFormA);      // Bob has grade 5, should sign successfully
        alice.signAForm(AFormA);    // Alice has grade 50, should also sign successfully
        charlie.signAForm(AFormC);  // Charlie has grade 150, can sign the easiest AForm

        charlie.signAForm(AFormA);  // Charlie cannot sign (grade too low for AFormA)
        alice.signAForm(AFormB);    // Alice cannot sign (grade too low for AFormB

    return 0;
}
