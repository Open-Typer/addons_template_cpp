# Open-Typer C++ addon template

This template can be used to quickly create C++ addons for Open-Typer.

**Note:** This template is used only for some of the official addons. If you want to avoid compiling multiple times, write the addon in QML (support for this is coming soon).

Before using this template, rename the `template.pro` file and change the
library name in this file. Then, rename the TemplateAddon namespace in
Addon.cpp and Addon.h to the name of your addon.

**Tips:**

- Put all classes into the addon namespace.
- Declare all classes with the `Q_DECL_EXPORT` macro.
