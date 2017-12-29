#pragma once

class Solid{

    private:
    std::string name
    Point 2d location;
    int height;
    int weight;
    
    public:
    Solid (Point2d & location, std::string name, int h, int w);
  
};