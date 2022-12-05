//This script recalls functions in ebatt.sci. You can modify the functions there.

//execute ebatt.sci first
exec("C:\Github Repositories\scilab-xcos\ebatt.sci") //Modify your filepath here unless you are using Linux OS
DoD = [0:0.001:0.99]; //Depth of Discharge from 0 to 0.99

//Define the parameters
//Number of cells
Nc = 1
//Battery type


//graph NiCd battery voltage vs DoD
figure(0)
plot(DoD*100,Ebatt(DoD,Nc,"nickel-cadmium")) //Change the battery type here

hf = gcf();
hf.background = 8;

xgrid()
xlabel("Depth of discharge in %")
ylabel("Nickel-Cadmium battery voltage")
title("Nickel-Cadmium battery voltage vs Depth of discharge")
//legend write the amount of battery cell based on Nc
legend(["NiCd " + string(Nc) + " cell(s)"])
//save the graph as a png file
save("NiCd.png")

//graph Lead-acid battery voltage vs DoD
figure(1)
plot(DoD*100,Ebatt(DoD,Nc,"lead-acid")) //Change the battery type here

hf = gcf();
hf.background = 8;

xgrid()
xlabel("Depth of discharge in %")
ylabel("Lead-acid battery voltage")
title("Lead-acid battery voltage vs Depth of discharge")
//legend write the amount of battery cell based on Nc
legend(["Lead-acid " + string(Nc) + " cell(s)"])
//save the graph as a png file
save("Lead-acid.png")
