# Open-Typer addon template

This template can be used to quickly create addons for Open-Typer.

Before using this template, rename the `template.pro` file and change the
library name in this file. Then, rename the TemplateAddon namespace in
Addon.cpp and Addon.h to the name of your addon.

**Tips:**

- Put all classes into the addon namespace.
- Declare all classes with the `Q_DECL_EXPORT` macro.
