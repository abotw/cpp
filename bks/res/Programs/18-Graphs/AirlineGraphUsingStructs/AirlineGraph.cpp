/*
 * File: AirlineGraph.cpp
 * ----------------------
 * This program initializes the graph for the airline example and then
 * prints the adjacency lists for each of the cities.
 */

#include <iostream>
#include <string>
#include "graph.h"
#include "set.h"
using namespace std;

struct City;      /* Forward references to these two types so  */
struct Flight;    /* that the C++ compiler can recognize them. */

/*
 * Type: City
 * ----------
 * This type defines the node type for the graph.
 */

struct City {
   string name;
   Set<Flight *> arcs;
};

/*
 * Type: Flight
 * ------------
 * This type defines the arc type for the graph.
 */

struct Flight {
   City *start;
   City *finish;
   int distance;
};

/* Function prototypes */

void printAdjacencyLists(Graph<City,Flight> & g);
void initAirlineGraph(Graph<City,Flight> & airline);
void addCity(Graph<City,Flight> & g, string name);
void addFlight(Graph<City,Flight> & airline, string c1, string c2, int miles);

/* Main program */

int main() {
   Graph<City,Flight> airline;
   initAirlineGraph(airline);
   printAdjacencyLists(airline);
   return 0;
}

/*
 * Function: printAdjacencyLists
 * Usage: printAdjacencyLists(g);
 * ------------------------------
 * Prints the adjacency list for each city in the graph.
 */

void printAdjacencyLists(Graph<City,Flight> & g) {
   foreach (City *city in g.getNodeSet()) {
      cout << city->name << " -> ";
      bool first = true;
      foreach (Flight *flight in g.getArcSet(city)) {
         if (!first) cout << ", ";
         cout << flight->finish->name;
         first = false;
      }
      cout << endl;
   }
}

/*
 * Function: initAirlineGraph
 * Usage: initAirlineGraph(airline);
 * ---------------------------------
 * Initializes the airline graph to hold the flight data from Figure 18-2.
 * In a real application, the program would almost certainly read this
 * information from a data file.
 */

void initAirlineGraph(Graph<City,Flight> & airline) {
   airline.addNode("Atlanta");
   airline.addNode("Boston");
   airline.addNode("Chicago");
   airline.addNode("Dallas");
   airline.addNode("Denver");
   airline.addNode("Los Angeles");
   airline.addNode("New York");
   airline.addNode("Portland");
   airline.addNode("San Francisco");
   airline.addNode("Seattle");
   addFlight(airline, "Atlanta", "Chicago", 599);
   addFlight(airline, "Atlanta", "Dallas", 725);
   addFlight(airline, "Atlanta", "New York", 756);
   addFlight(airline, "Boston", "New York", 191);
   addFlight(airline, "Boston", "Seattle", 2489);
   addFlight(airline, "Chicago", "Denver", 907);
   addFlight(airline, "Dallas", "Denver", 650);
   addFlight(airline, "Dallas", "Los Angeles", 1240);
   addFlight(airline, "Dallas", "San Francisco", 1468);
   addFlight(airline, "Denver", "San Francisco", 954);
   addFlight(airline, "Portland", "San Francisco", 550);
   addFlight(airline, "Portland", "Seattle", 130);
}

/*
 * Function: addFlight
 * Usage: addFlight(airline, c1, c2, miles);
 * -----------------------------------------
 * Adds an arc in each direction between the cities c1 and c2.
 */

void addFlight(Graph<City,Flight> & airline, string c1, string c2, int miles) {
   airline.addArc(c1, c2)->distance = miles;
   airline.addArc(c2, c1)->distance = miles;
}
