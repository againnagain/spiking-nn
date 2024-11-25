#ifndef NEURON_H
#define NEURON_H

#include <list>
#include <ctime>

class Synapse;

class Neuron {
    /*
        Leaky Integrate-and-fire neuron model.
    */

    public:
        Neuron(){};

    private:
        std::list<Synapse*> synapses;
        double membrance_potential;
        double threshold;
        double leak_rate;
        double refractory_preiod;
        
};

#endif