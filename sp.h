#ifndef SP_H
#define SP_H
#include <cmath>
 class shap
{
public:
    virtual const double per()=0;
    virtual const double s()=0;
};
 class rek: public shap
{
private:
    double l;
    double r;
public:
    const double per();
    const double s();
    double setl(double _l)
    {
        l=_l;
    }
    double setr(double _r)
    {
        r=_r;
    }
    const double getl()
    {
        return l;
    }
    const double getr()
    {
        return r;
    }
    rek(double _l, double _r)
    {
        l=_l;
        r=_r;
    }
    rek()
    {
        l=0;
        r=0;
    }
};
const double rek:: per()
 {
     return 2*(l+r);
 }
 const double rek:: s()
 {
     return l*r;
 }
class circle: public shap
{
private:
    double r;
public:
    const double per();
    const double s();
    double setr(double _r)
    {
        r=_r;
    }
    const double getr()
    {
        return r;
    }
    circle ( double _r)
    {
        r=_r;
    }
    circle()
    {
        r=0;
    }
};
 const double circle:: per()
 {
     return M_PI*r*2;
 }
 const double circle:: s()
 {
     return M_PI*r*r;
 }
 std::ostream& operator << (std::ostream &stream, circle &t)
{
   std::cout<<t.getr()<<'\n';
    return stream;
};
std::istream& operator >> (std::istream &stream, circle &t)
{
    double a;
    std::cin>>a;
    t.setr(a);
    return stream;
}
std::ostream& operator << (std::ostream &stream, rek &t)
{
   std::cout<<t.getl()<< " "<<t.getr()<<'\n';
    return stream;
};
std::istream& operator >> (std::istream &stream,rek &t)
{
    double a, b;
    std::cin>>a>>b;
    t.setl(a);
    t.setr(b);
    return stream;
}
class el: shap
{
private:
    double r1;
    double r2;
public:
     const double per();
    const double s();
    double setr1(double _r1)
    {
        r1=_r1;
    }
     double setr2(double _r2)
    {
        r2=_r2;
    }
    const double getr1()
    {
        return r1;
    }
    const double getr2()
    {
        return r2;
    }
    el( double _r1, double _r2)
    {
        r1=_r1;
        r2=_r2;
    }
    el()
    {
        r1=0;
        r2=0;
    }
};
const double el:: per()
 {
     return M_PI*sqrt(2*(r1*r1+r2*r2));
 }
 const double el:: s()
 {
     return M_PI*r1*r2;
 }

 std::ostream& operator << (std::ostream &stream, el &t)
{
   std::cout<<t.getr1()<< " "<<t.getr2()<<'\n';
    return stream;
};
std::istream& operator >> (std::istream &stream, el &t)
{
    double a, b;
    std::cin>>a>>b;
    t.setr1(a);
    t.setr2(b);
    return stream;
}
#endif // SP_H
