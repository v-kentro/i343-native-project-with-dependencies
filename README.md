# Sample Use of Native NuGet Packages

An example of a C++ project that makes use of native NuGet packages.

## Quick-Start

First, check out these other projects:

1. [i343-native-static-library](<https://github.com/v-kentro/i343-native-static-library>)
1. [i343-native-dynamic-library](<https://github.com/v-kentro/i343-native-dynamic-library>)

Second, build both projects.  You need to build both Debug and Release for both x86 and x64.

Third, create the NuGet packages for each.

```
nuget.exe pack
```

Fourth, install both NuGet packages into this project.  The `-Source` parameter allows installing packages from a directory.

```
Install-Package i343-native-static-library
Install-Package i343-native-dynamic-library
```
