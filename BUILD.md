# Build instructions

### How to compile M3D locally

MS Visual Studio 2019 is used for M3D. If you want to use a free alternative for open-source projects, you can download Visual Studio Community 2022 to build M3D.

1. Install Visual Studio Community edition 2022. Choose the C++ desktop development tools option. For reference, v142 refers to Visual Studio 2019, which is what is needed for the build environment in Visual Studio Community 2022.
After selecting the C++ desktop option, select the tab at the top menu called “Individual components”.

   - Search for "MFC" and select anything related to v142 and x86/x64

   - Select "C++ MFC for latest v143 build tools (x86 & x64)"
   
   - Search for "ATL" and select anything related to v142 and x86/x64
   
   - Beyond this, it is not currently known what other components may be needed, but this image shows a set that has been proven to build M3D.

   https://github.com/MYSTRANsolver/M3D/blob/main/BUILD_COMPONENTS.jpg

2. Now install Visual Studio Community.
2. The M3D repo is at https://github.com/MYSTRANsolver/M3D. You can clone it or alternatively select the green “Code” button and download a ZIP (and then Extract it to a folder).
3. Open Visual Studio. If necessary, choose Visual C++ for the Development Settings
4. Choose "Open a project or solution" and choose M3D.sln
5. Next, to the right of the undo/redo buttons, select "Release" and "x64". "Debug" is also acceptable. However, "Win32" may give warnings so it is recommended to only consider x64.
5. On the left pane, select "Solution Explorer" at the bottom. Then right click on "M3D" and select build. See the following image for reference.

   https://github.com/MYSTRANsolver/M3D/blob/main/BUILD_SETUP.jpg

6. NOTE: "M3D.exe" will be located in the "x64/Debug" folder (the Debug folder will be created even if you selected Release). Do not use the M3D.exe from the Debug folder that is not under x64. 

> [!TIP]
> If you get an error that says "MFC libraries are required for this project. Install them from the 
Visual Studio installer (Individual Components tab) for any toolsets and architectures 
being used." then revisit the installed components. It is possible that image provided above may not be exactly correct.
