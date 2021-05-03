# Custom Allstat Compile
This project is a console application using the static version of the **allstat** library. When building the **allstat** library, macros are overridden using **SolutionDefines.targets**. Thus, when the application is statically linked, only the data of the specified error types gets into it: **Win32 errors** and **errno**

**SolutionDefines.targets** is included to allstat\AllStat\allstat.vcproj. If **SolutionDefines.targets** is present in the root directory of a solution, it will be included and used at **allstat** library build. You can use **PreprocessorDefinitions** item of **SolutionDefines.targets** to override default values of macros used by allstat (see **Custom Build** in readme.md of **allstat** to get list of supported macros).
