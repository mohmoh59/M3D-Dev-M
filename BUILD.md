# Build instructions

### How to compile M3D locally

1. Install Visual Studio Community edition. Choose the C++ desktop development tools option.
After selecting the C++ desktop option, select the tab at the top menu called “Individual components”. Then select the following components (they may be in separate sub-headings in the Individual components menu):
   - MSVC v142 x64/x86 build tools

     May appear as something like: MSVC v142 – VS 2019 C++ x64/x86 build tools (v14.29-16.11)
   - MSVC v142 x64/x86 Spectre-Mitigated libs

     May appear as something like: MSVC v142 – VS 2019 C++ x64/x86 Spectre-mitigated libs (v14.29-16.11)
   - C++ ATL for v142 build tools (x86 & x64)

     May appear as something like: C++ v14.29 (16.11) ATL for v142 build tools (x86 & x64)
   - C++ MFC for v142 build tools (x86 & x64)

     May appear as something like: C++ v14.29 (16.11) MFC for v142 build tools (x86 & x64)
1. On the pane on the right, the list of Individual components is shown for reference. Now install it.
2. The M3D repo is at https://github.com/MYSTRANsolver/M3D. You can clone it or alternatively select the green “Code” button and download a ZIP (and then Extract it to a folder).
3. Open Visual Studio. Choose Visual C++ for the Development Settings. Choose the appropriate option based on your choice from Step 3. For example, if you extracted the ZIP to a folder, choose “Open a Local Folder”. If you open the “M3da-master” folder, then right click on the `.sln` file that is in the M3d_Setup folder and select “Build”. This will create a “Debug” folder that contains M3da.exe.

> [!TIP]
> On the top part of the window, you can pick between build configurations, with the 2 dropdown selectors next to the `Local Windows Debugger` button.
>
> Once you're done with your modifications, you can change the first selector to Release, to produce an optimized executable.