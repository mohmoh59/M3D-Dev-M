# FOR REFERENCE ONLY. Some of these may have been implemented.

> [!CAUTION]
> All modifications must be done inside the Microsoft Visual Studio editor. Failing to do so will most likely cause **very** annoying compilation errors.

# Editing zoom scroll sensitivity

#### Corresponding branch: [smoother_scroll](https://github.com/Juliapixel/M3da/tree/smoother_scroll)

#### List of [changes](https://github.com/Juliapixel/M3da/compare/master...smoother_scroll)

-----

The file [`M3da/M3daview.cpp`](/M3da/M3daView.cpp) has all the keystroke handling logic. in it, the class method `CM3daView::OnMouseWheel` controls the renderer's display scale by adding the original scale, multiplied by a predefined value `dSR`, to itself. The smaller `dSR` is, the smaller the increments in zoom are, with negative values inverting the zoom direction (scroll down becomes zoom-in, scroll up becomes zoom-out).

`dSR` is defined on [line 589](/M3da/M3daView.cpp#L589).

# Making all submenu entries show up

#### Corresponding branch: [remove_menu_arrows](https://github.com/Juliapixel/M3da/tree/remove_menu_arrows)

#### List of [changes](https://github.com/Juliapixel/M3da/compare/master...remove_menu_arrows)

-----

The file [`M3da/MainFrm.cpp`](/M3da/MainFrm.cpp) has all the keystroke handling logic. in it, the class method `CMainFrame::OnCreate` handles the creation of all elements on the main view, during the initialization of all elements on the window's main frame. On [line 353](/M3da/MainFrm.cpp#L353), the method called makes it so only "basic commands" are shown by default. Commenting out this line, by adding `//` to the start of it, disables this method call and makes all menu options show up.

# Modifying toolbar tooltips

#### Corresponding branch: [update_tooltips](https://github.com/Juliapixel/M3da/tree/update_tooltips)

#### List of [changes](https://github.com/Juliapixel/M3da/compare/master...update_tooltips)

-----

> [!NOTE]
> This guide requires that you have the Microsoft Visual Studio editor installed. Follow [the building guide](building.md) if you haven't, and then come back here.

> [!CAUTION]
> **ALL** modifications made inside this **MUST** invariably have `English (United Kingdom)` set as its language. While failing to follow this instruction might not cause issues for you, it will almost certainly cause missing text or broken UI for other users.

1. Inside Visual Studio 2022, on the Solution Explorer, to the left side of the screen, open the Resource Files folder and double click on M3da.rc.
2. The Resource View will open where the Solution Explorer was. In it you can see the configuration for most of the UI elements for M3D
3. To edit the text on toolbar buttons, open the Toolbar folder and double click on the specific toolbar you want to change. This will open a new editor on the main workspace, which has all the buttons for the selected toolbar laid out on the top part.
4. Double click the button you want to modify.
5. On the right side, a Properties panel will show up if it wasn't already open.
6. The Prompt field is what you're looking for; its first line is what shows up both on the second line of the tooltip and on the bottom left edge of the M3D window and its second line is what shows up as the "title" on the tooltip. It should be formatted as follows:

   `Quite a long description\nTitle`

   <sub>`\n` indicates a line break</sub>
7. Save and build your program