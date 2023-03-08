#include "TextBox.hpp"
#include <iostream>

int main() {
    // create a TextBox and call draw
    TextBox textbox("Hello", 20, 50);
    Rectangle rectangle(12345, 40, 10);

    // Fix the code to call both draws by using types
    rectangle.draw();
    Rectangle& ref = textbox;
    ref.draw();

    // try with virtual inheritance


}
