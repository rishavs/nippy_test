# Package

version      = "0.1.0"
author       = "Rishav Sharan"
description  = "test package"
license      = "MIT"

# Dependencies

requires "nim >= 0.15.2", "sdl2"

# Optionals
srcDir      = "src"
binDir      = "bin"

bin = @["main"]
