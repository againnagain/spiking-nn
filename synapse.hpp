#ifndef SYNAPSE_H
#define SYNAPSE_H

class Neuron;

class Synapse {
    /*
        Synapses pass signals through the network.
    */

    public:
        Synapse(){};
        
    private:
        Neuron* predcessor;
        Neuron* successor;
        float weight; // will change with Spike-timing-dependent plasticity (STDP) rule
};

#endif