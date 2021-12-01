#ifndef CAR_H
#define CAR_H

class Car {
   
public:
   
   //Protoypes, since this is the header file
   
   //Constructors
   Car();							// default
   Car(int, std::string bodyStyle);	//2 arguments
   
   //sets and gets
   void setCar(int, std::string);
   void setPrice(int);
   void setBodyStyle(std::string);
   int getPrice() const;
   std::string getBodyStyle() const;
   
   //overloaded + operator function
   Car operator+(const int);
   
private:
   int price;
   std::string bodyStyle;
};

#endif
