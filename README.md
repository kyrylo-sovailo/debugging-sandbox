Sandbox for testing different debugger plugins in VScode and VScodium.

Supported extensions:
 1. C/C++
   - extension name: C/C++
   - extension ID: `ms-vscode.cpptools`
   - documentation: [code.visualstudio.com](https://code.visualstudio.com/docs/cpp/launch-json-reference)
   - Verified by VSCode: yes
   - Availability in VScodium: no
   - Linux/gcc/gdb status: :warning: yes, no Eigen printers
   - Linux/clang/gdb status: :warning: yes, no Eigen printers
   - Linux/gcc/lldb status: :warning: yes, no Eigen printers, requires largely abandoned `lldb-mi`
   - Linux/clang/lldb status: :warning: yes, no Eigen printers, requires largely abandoned `lldb-mi`
   - Windows/gcc/gdb status: :question: not tested
   - Windows/clang/gdb status: :question: not tested
   - Windows/gcc/lldb status: :question: not tested
   - Windows/clang/lldb status: :question: not tested
 2. LLDB DAP
   - extension name: LLDB DAP
   - extension ID: `llvm-vs-code-extensions.lldb-dap`
   - documentation: [github.com](https://github.com/llvm/llvm-project/blob/main/lldb/tools/lldb-dap/README.md)
   - Verified by VSCode: yes
   - Availability in VScodium: no
   - Linux/gcc/gdb status: :black_square_button: N/A
   - Linux/clang/gdb status: :black_square_button: N/A
   - Linux/gcc/lldb status: :warning: yes, must set executable path setting to `/usr/bin/lldb-dap`
   - Linux/clang/lldb status: :warning: yes, must set executable path settting to `/usr/bin/lldb-dap`
   - Windows/gcc/gdb status: :black_square_button: N/A
   - Windows/clang/gdb status: :black_square_button: N/A
   - Windows/gcc/lldb status: :question: not tested
   - Windows/clang/lldb status: :question: not tested
   - **Info**: Perfect Eigen printers
 3. Native Debug
   - extension name: Native Debug
   - extension ID: `webfreak.debug`
   - documentation: [open-vsx.org](https://open-vsx.org/extension/webfreak/debug)
   - Verified by VSCode: no
   - Availability in VScodium: yes
   - Linux/gcc/gdb status: :white_check_mark: yes, Eigen printers not very pretty
   - Linux/clang/gdb status: :white_check_mark: yes, Eigen printers not very pretty
   - Linux/gcc/lldb status: :warning: yes, no Eigen printers, requires largely abandoned `lldb-mi`
   - Linux/clang/lldb status: :warning: yes, no Eigen printers, requires largely abandoned `lldb-mi`
   - Windows/gcc/gdb status: :question: not tested
   - Windows/clang/gdb status: :question: not tested
   - Windows/gcc/lldb status: :question: not tested
   - Windows/clang/lldb status: :question: not tested
   - **Warning**: Program output is redirected to Debug Console tab, not Terminal tab
 4. CodeLLDB
   - extension name: CodeLLDB
   - extension ID: `vadimcn.vscode-lldb`
   - documentation: [github.com](https://github.com/vadimcn/codelldb/blob/v1.10.0/MANUAL.md)
   - Verified by VSCode: no
   - Availability in VScodium: yes
   - Linux/gcc/gdb status: :black_square_button: N/A
   - Linux/clang/gdb status: :black_square_button: N/A
   - Linux/gcc/lldb status: :warning: yes, no Eigen printers
   - Linux/clang/lldb status: :warning: yes, no Eigen printers
   - Windows/gcc/gdb status: :black_square_button: N/A
   - Windows/clang/gdb status: :black_square_button: N/A
   - Windows/gcc/lldb status: :question: not tested
   - Windows/clang/lldb status: :question: not tested
   - **Warning**: Debugging starts even in case of a build failure

Conclusion: I recommend Native Debug by WebFreak