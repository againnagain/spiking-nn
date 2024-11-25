project(adaptive-learning-nn)

set(SOURCES  
        main.cpp
        neuron.cpp
        synapse.cpp
    )

add_executable(spiking_nn   ${SOURCES})
