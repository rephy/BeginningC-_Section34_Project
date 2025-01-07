#ifndef POINT_H
#define POINT_H



class Point {
    public:
        //constructors & destructors
        explicit Point();
        explicit Point(double xy);
        explicit Point(double x, double y);
        Point(const Point& p) = default;
        ~Point();

        //member functions (const)
        double distance(const Point& p = *origin) const;
        double get_x() const;
        double get_y() const;

        //member function (non-const)
        double& get_x();
        double& get_y();
        Point* get_address();
        void print_info();

        //static functions
        static unsigned int get_count();

        //friend functions
        friend void cleanup();
    private:
        //member variables
        double x {};
        double y {};

        //static variables
        static const Point* origin;
        inline static unsigned int count {};
};



#endif
