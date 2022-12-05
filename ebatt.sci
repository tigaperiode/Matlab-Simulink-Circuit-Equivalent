//Defining function for battery modelling
//This .sci function calcuilates the number of cells, type of battery, and the voltage open circuit

function y = ebatt(DoD,Nc,batt_type) //DoD is depth of discharge, Nc is number of cells, batt_type is type of battery
    if batt_type == "lead-acid" then
        y = (2.15-(2.15-2.00)*DoD)*Nc;
    elseif batt_type=="nickel-cadmium" then
        y = (-8.2816*DoD.^7+23.5749*DoD.^6-30*DoD.^5+23.7053*DoD.^4-12.5877*DoD.^3+4.1315*DoD.^2-0.8658.*DoD+1.37)*Nc;
    end
endfunction

//You can add other y=... equation using the function elsif batt_type = "battery_name_here" then write the y= function underneath
