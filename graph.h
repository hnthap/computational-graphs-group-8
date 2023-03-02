// graph.h
#ifndef GRAPH_H // include guard
#define GRAPH_H

#pragma once
#include <iostream>

namespace graph 
{

    class Graph 
    {
        private:

        public:
        Graph()
        {
            std::cout << "Hello!" << std::endl;
        }
        
        ~Graph()
        {
            std::cout << "Goodbye!" << std::endl;
        }
    };
    
}

#endif /* GRAPH_H */