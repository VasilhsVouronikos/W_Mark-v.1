# W_Mark version 1.0
W_Mark version 1.0 is an application integrating algorithms for watermarking and tamper detection in images. 
The application allows the user to create baches of images so as sequentially to be watermarked with either authenticity information (watermarking) or integrity information (tamper detection & localization).

## Utilies
  * Bach creation (from scrach or from folder)
  * Master folder creation (Many baches may be stored in the same master folder)
  * Establisment of a root save directory (all watermarked images within the folder will be there)
  * Creation of a split number (Meaning that for large baches we can parallelize the watermarking proscess by splitting the bach) - under development
  * Creation of a default robustness parameter (a factor of the aythenticity watermarking proscess)
  * Selection of either marking or validation

## About the software
W_Mark was created using Python 3.11 with the help of TKinter for the GUI. The code then was compiled into C code using Nuitka 1.9.7 creating .exe file.


## Based on
W_Mark is based on the watermarking and tamper detection approaches from the following scientific papers
* Chroni, M., Nikolopoulos, S. D., Polenakis, I., & Vouronikos, V. (2023, July). A Code-Based Multiple Watermarking Scheme for the Preservation of Authenticity of Forensic Images. 
In 2023 14th International Conference on Information, Intelligence, Systems & Applications (IISA) (pp. 1-8). IEEE.
* Chroni, M., Katsi, A., Nikolopoulos, S., Polenakis, I., & Vouronikos, V. (2023, June). Tamper Detection and Localization in Forensic Images. In Proceedings of the 24th International Conference on Computer Systems and Technologies (pp. 117-122).
* Chroni, M., Nikolopoulos, S. D., Polenakis, I., & Vouronikos, V. (2022, July). A Repetitive Watermarking Scheme for Digital Images based on Self-Inverting Permutations. In 2022 13th International Conference on Information, Intelligence, Systems &   Applications (IISA) (pp. 1-8). IEEE.
* Chroni, M., Nikolopoulos, S. D., Polenakis, I., & Vouronikos, V. (2022, July). Digital image watermarking using self inverting permutations-a comparative study. In 2022 13th International Conference on Information, Intelligence, Systems & Applications (IISA) (pp. 1-8). IEEE.


## Image of the app
![sneak pic](https://github.com/VasilhsVouronikos/W_Mark-v.1/blob/main/images/run1.PNG?raw=true)
