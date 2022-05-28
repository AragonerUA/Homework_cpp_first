#include "header.h"
#include <complex>

namespace functions {
    void summary(int &a, int &b) {
        a += b;
    }
    void summary(int *a, const int *b) {
        *a = *a + *b;
    }
    void summary(float &a, float &b) {
        a += b;
    }
    void summary(float *a, const float *b) {
        *a += *b;
    }
    void rounding(float &a) {
        a = static_cast<int> (a);
    }
    void rounding(float *a) {
        *a = static_cast<int> (*a);
    }
    void complex_change(std::complex<double> &z) {
        z = std::conj(z);
    }
    void complex_change(std::complex<double> *z) {
        *z = std::conj(*z);
    }
    void square_move(int &x, int &y, int &x_vec, int &y_vec) {
        x += x_vec;
        y += y_vec;
    }
    void square_move(int *x, int *y, const int *x_vec, const int *y_vec) {
        *x += *x_vec;
        *y += *y_vec;
    }
}
namespace classes {
    void square::get_coords() {
        std::cout << "Введите координаты левой верхней точки Вашего квадрата: ";
        std::cin >> left_up_point.first;
        std::cin >> left_up_point.second;
        std::cout << "Введите координаты правой нижней точки Вашего квадрата: ";
        std::cin >> right_down_point.first;
        std::cin >> right_down_point.second;

        //координаты левой нижней точки
        left_down_point.first = left_up_point.first;
        left_down_point.second = right_down_point.second;

        //координаты правой верхней точки
        right_up_point.first = right_down_point.first;
        right_up_point.second = left_up_point.second;
    }
    void square::sq_center() {
        //координаты центра
        square_center.first = static_cast<float> (left_up_point.first) + static_cast<float> (right_down_point.first - left_up_point.first) / 2;
        square_center.second = static_cast<float> (right_down_point.second) + static_cast<float>(left_up_point.second - right_down_point.second) / 2;
    }
    void square::print_starts_coords() const {
        std::cout << "Координаты Вашего квадрата: 
";
        std::cout << "Координата верхней левой точки: (" << left_up_point.first << " ; " << left_up_point.second << ")
";
        std::cout << "Координата верхней правой точки: (" << right_up_point.first << " ; " << right_up_point.second << ")
";
        std::cout << "Координата нижней правой точки: (" << right_down_point.first << " ; " << right_down_point.second << ")
";
        std::cout << "Координата нижней левой точки: (" << left_down_point.first << " ; " << left_down_point.second << ")
";
        std::cout << "Координаты центра квадрата: (" << square_center.first << " ; " << square_center.second << ")
";
    }
    void square::get_vector() {
        std::cout << "Введите координаты вектора, на который Вы хотите переместить квадрат: ";
        std::cin >> vector_to_move.first >> vector_to_move.second;
    }
    void square::move_coords() {
        left_up_point.first += vector_to_move.first; //NOLINT
        left_up_point.second += vector_to_move.second; //NOLINT

        left_down_point.first += vector_to_move.first; //NOLINT
        left_down_point.second += vector_to_move.second; //NOLINT

        right_up_point.first += vector_to_move.first; //NOLINT
        right_up_point.second += vector_to_move.second; //NOLINT

        right_down_point.first += vector_to_move.first; //NOLINT
        right_down_point.second += vector_to_move.second; //NOLINT
    }
    void square::print_new_coords() const {
        std::cout << "Координаты нового квадрата: 
";
        std::cout << "Координата верхней левой точки: (" << left_up_point.first << " ; " << left_up_point.second << ")
";
        std::cout << "Координата верхней правой точки: (" << right_up_point.first << " ; " << right_up_point.second << ")
";
        std::cout << "Координата нижней правой точки: (" << right_down_point.first << " ; " << right_down_point.second << ")
";
        std::cout << "Координата нижней левой точки: (" << left_down_point.first << " ; " << left_down_point.second << ")
";
        std::cout << "Координаты центра квадрата: (" << square_center.first << " ; " << square_center.second << ")
";
    }

    //pointers:
    void square::get_coords_p() {
        std::cout << "Введите координаты левой верхней точки Вашего квадрата: ";
        std::cin >> *p_left_up_f;
        std::cin >> *p_left_up_s;
        std::cout << "Введите координаты правой нижней точки Вашего квадрата: ";
        std::cin >> *p_right_down_f;
        std::cin >> *p_right_down_s;

        //координаты левой нижней точки
        *p_left_down_f = *p_left_up_f;
        *p_left_down_s = *p_right_down_s;

        //координаты правой верхней точки
        *p_right_up_f = *p_right_down_f;
        *p_right_up_s = *p_left_up_s;
    }

    void square::sq_center_p() {
        //координаты центра
        *p_square_center_f = static_cast<float> (*p_left_up_f) + static_cast<float> (*p_right_down_f - *p_left_up_f) / 2;
        *p_square_center_s = static_cast<float> (*p_right_down_s) + static_cast<float>(*p_left_up_s - *p_right_down_s) / 2;
    }

    void square::print_starts_coords_p() const {
        std::cout << "Координаты Вашего квадрата: 
";
        std::cout << "Координата верхней левой точки: (" << *p_left_up_f << " ; " << *p_left_up_s << ")
";
        std::cout << "Координата верхней правой точки: (" << *p_right_up_f << " ; " << *p_right_up_s << ")
";
        std::cout << "Координата нижней правой точки: (" << *p_right_down_f << " ; " << *p_right_down_s << ")
";
        std::cout << "Координата нижней левой точки: (" << *p_left_down_f << " ; " << *p_left_down_s << ")
";
        std::cout << "Координаты центра квадрата: (" << *p_square_center_f << " ; " << *p_square_center_s << ")
";
    }

    void square::get_vector_p() {
        std::cout << "Введите координаты вектора, на который Вы хотите переместить квадрат: ";
        std::cin >> *p_vector_to_move_f >> *p_vector_to_move_s;
    }

    void square::move_coords_p() {
        *p_left_up_f += *p_vector_to_move_f; //NOLINT
        *p_left_up_s += *p_vector_to_move_s; //NOLINT

        *p_left_down_f += *p_vector_to_move_f; //NOLINT
        *p_left_down_s += *p_vector_to_move_s; //NOLINT

        *p_right_up_f += *p_vector_to_move_f; //NOLINT
        *p_right_up_s += *p_vector_to_move_s; //NOLINT

        *p_right_down_f += *p_vector_to_move_f; //NOLINT
        *p_right_down_s += *p_vector_to_move_s; //NOLINT
    }

    void square::print_new_coords_p() const {
        std::cout << "Координаты нового квадрата: 
";
        std::cout << "Координата верхней левой точки: (" << *p_left_up_f << " ; " << *p_left_up_s << ")
";
        std::cout << "Координата верхней правой точки: (" << *p_right_up_f << " ; " << *p_right_up_s << ")
";
        std::cout << "Координата нижней правой точки: (" << *p_right_down_f << " ; " << *p_right_down_s << ")
";
        std::cout << "Координата нижней левой точки: (" << *p_left_down_f << " ; " << *p_left_down_s << ")
";
        std::cout << "Координаты центра квадрата: (" << *p_square_center_f << " ; " << *p_square_center_s << ")
";
    }
}
