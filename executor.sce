exec("leadacid-ScilabNotes.sci") // load battery voltage function
DoD = [0:0.001:0.99]; // depth of discharge
Nc = 6; // number of cells
// Nickel-cadmium
figure(0)
plot(DoD*100,Ebatt(DoD,Nc,"nickel-cadmium"))
hf=gcf();
hf.background=8;
xgrid()
xlabel("Depth of discharge [%]")
ylabel("Nickel-cadmium battery (6 cells) voltage [V]")
title("x-engineer.org")
xs2png(hf, 'Nickel-cadmium battery (6 cells) voltage.png')
// Lead-acid
figure(1)
plot(DoD*100,Ebatt(DoD,Nc,"lead-acid"))
hf=gcf();
hf.background=8;
xgrid()
xlabel("Depth of discharge [%]")
ylabel("Lead-acid battery (6 cells) voltage [V]")
title("x-engineer.org")
xs2png(hf, 'Lead-acid battery (6 cells) voltage.png')
// Reference https://x-engineer.org/ev-design-battery-simulation/
// Reference https://www.scilab.org/ev-design-battery-simulation/
