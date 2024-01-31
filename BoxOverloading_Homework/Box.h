#pragma once
class Box
{
public:
	Box();
	Box(int width, int length, int heigth);
	
	void setWidth(int width);
	void setLength(int length);
	void setHeight(int height);
	void print();

	int getWidth();
	int getLength();
	int getHeight();

	Box operator+(Box const& box2);
private:
	int width;
	int length;
	int height;
};

