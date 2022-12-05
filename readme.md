# Instructions on how to use this module
## Introduction
The module are separated into two formats, in SciLab Notes and Xcos. SciLab are necessary to open both modules. If you haven't got the software package, you can download them for free on [this link](https://www.scilab.org/download/scilab-6.1.1). No library installation are necessary.
### Project checklist
- [x] Finished SciLab Notes module
- [ ] Finished Xcos module
- [ ] Find raw data for Xcos `y=` equation

### How to download
Simply click the 'Code' button on the top right of the repository followed by 'Download ZIP' afterwards. If you have a GitHub account, you can fork this project instead.

### Modification of scripts
I would recommend using Visual Studio Code (VSC) instead of native SciLab editor to open any script files. Pairing VSC with [GitHub Co-pilot](https://copilot.github.com/) or any other AI-based code assistant would be superb. However, native SciLab editor is sufficient to be used at any scale.

## SciLab Notes
There are **two files** in SciLab Notes repository, a function script (.sci) and an executor script (.sce). They are both based on a mother script written by SciLab developer themselves [^1]. This simple file work if you already provide a `y=` function of DoD and Voc in the function script. If you have a raw experimental data, you can use Microsoft Excel, Minitab, or Python processing to obtain the curve fit equation. To add a new `y=...` equation, you can write an `elseif` function below the existing ones. Below are the example of such function.

```
{
elseif batt_type=="nickel-cadmium" then 
        y = (-8.2816*DoD.^7+23.5749*DoD.^6-30*DoD.^5+23.7053*DoD.^4-12.5877*DoD.^3+4.1315*DoD.^2-0.8658.*DoD+1.37)*Nc;
}
``` 

Test

## SciLab Xcos
Instructions coming soon

# Footnote
[^1] : Adopted from [Scilab EV Design Battery Simulation](https://www.scilab.org/ev-design-battery-simulation) and [Its adaption from X-engineer](https://x-engineer.org/ev-design-battery-simulation/).