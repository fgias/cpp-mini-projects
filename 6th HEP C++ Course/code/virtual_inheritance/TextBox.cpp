#include "TextBox.hpp"
#include <iostream>

Drawable::Drawable(int id) : m_id(id) {};

void Drawable::draw() const {
    std::cout << "Drawing " << m_id << '\n';
};

Rectangle::Rectangle(int id, float width, float height) :
    Drawable(id), m_width(width), m_height(height) {}

Text::Text(int id, const std::string &content) :
    Drawable(id), m_content(content) {}

TextBox::TextBox(const std::string &content,
                 float width, float height) :
    Drawable(width), Rectangle(1, width, height), Text(2, content) {}
