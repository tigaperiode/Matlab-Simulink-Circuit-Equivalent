// Function for open circuit voltage calculation
// inputs: DoD [-] - depth of discharge
//         Nc [-] - number of battery cells
//         batt_type [string] - type of battery
// output: E [V] - battery open circuit voltage
function y = Ebatt(DoD,Nc,batt_type)
    if batt_type=="lead-acid" then
        y=(2.15-(2.15-2.00)*DoD)*Nc;
    elseif batt_type=="nickel-cadmium" then
        y=(-8.2816*DoD.^7+23.5749*DoD.^6-30*DoD.^5+23.7053*DoD.^4- ..
        12.5877*DoD.^3+4.1315*DoD.^2-0.8658.*DoD+1.37)*Nc;
    else
        disp("Type of battery should be ""nickel-cadmium"" or ""lead-acid""");
    end
endfunction
// Reference https://x-engineer.org/ev-design-battery-simulation/
// Reference https://www.scilab.org/ev-design-battery-simulation/
