# Setup
## [cf-tool](https://github.com/xalanq/cf-tool)  
### config  
path: `Path to CompetitiveProgramming/template/cpp.cpp`  
suffix: `(empty)`  
alias: `cpp`  
Before script: `g++ $%full%$ -o $%file%$.o -std=c++17`  
Script: `./$%file%$.o`  
After script: `rm $%file%$.o`  