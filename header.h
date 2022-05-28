#pragma once

#include <iostream>
#include <complex>

namespace functions {
    //Для первых трех заданий реализуем функции, принимающие ссылки и указатели соответственно
    void summary(int &a, int &b);
    void summary(int *a, const int *b);
    void summary(float &a, float &b);
    void summary(float *a, const float *b);
    void rounding(float &a);
    void rounding(float *a);
    void complex_change(std::complex<double> &z);
    void complex_change(std::complex<double> *z);

//    void square_move(int &x, int &y, int &x_vec, int &y_vec);
//
//    void square_move(int *x, int *y, const int *x_vec, const int *y_vec);
}
namespace classes {
    class square {
    private:
        std::pair <int, int> left_up_point; //left up
        std::pair <int, int> left_down_point; //left down
        std::pair <int, int> right_up_point; //right up
        std::pair <int, int> right_down_point; //right down
        std::pair <float, float> square_center; //square center
        std::pair <float, float> vector_to_move; //vector
        //for pointers:
        std::pair <int, int> left_up_point_p; //left up
        std::pair <int, int> left_down_point_p; //left down
        std::pair <int, int> right_up_point_p; //right up
        std::pair <int, int> right_down_point_p; //right down
        std::pair <float, float> square_center_p; //square center
        std::pair <float, float> vector_to_move_p; //vector
        int *p_left_up_f = &left_up_point_p.first;
        int *p_left_up_s = &left_up_point_p.second;
        int *p_right_down_f = &right_down_point_p.first;
        int *p_right_down_s = &right_down_point_p.second;
        int *p_left_down_f = &left_down_point_p.first;
        int *p_left_down_s = &left_down_point_p.second;
        int *p_right_up_f = &right_up_point_p.first;
        int *p_right_up_s = &right_up_point_p.second;
        float *p_square_center_f = &square_center_p.first;
        float *p_square_center_s = &square_center_p.second;
        float *p_vector_to_move_f = &vector_to_move.first;
        float *p_vector_to_move_s = &vector_to_move.second;
    public:
        //функции, принимающие указатели и ссылки соответственно
        void get_coords(); //links
        void get_coords_p(); //pointers
        void sq_center(); //links
        void sq_center_p(); //pointers
        void print_starts_coords() const;
        void print_starts_coords_p() const;
        void get_vector();
        void get_vector_p();
        void move_coords();
        void move_coords_p();
        void print_new_coords() const;
        void print_new_coords_p() const;
    };
}
