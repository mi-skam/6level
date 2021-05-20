{ sources ? import ./nix/sources.nix,
  pkgs ? import sources.nixpkgs {  }
}:

let
  compile = with pkgs; (writeScriptBin "c" ''
    #!${stdenv.shell}
    SRC=''$1
    NAME=''${SRC%.c}

    # remove old program if present
    [ -f ''${NAME} ] && rm ./''${NAME}
    # checking the code
    echo "-- norminette --"
    norminette ''$1
    # compile the code
    echo "-- compiling --"
    gcc -Wall -Wextra "$@" -o "$NAME"
  '');

  norminette = pkgs.python3.pkgs.buildPythonPackage rec {
    pname = "norminette";
    version = "3.2.95";

    src = pkgs.python3.pkgs.fetchPypi rec {
      inherit pname version;
      sha256 = "b3589097adcbd6b5f3c8315b1294d115df2e00cd41163f50311d20eb1887f655";

    };

    doCheck = false;

    meta = {
      homepage = "https://github.com/42School/norminettehttps://github.com/42School/norminette";
      description = "Open source norminette to apply 42's norme to C files";
    };
  };
  python-with-ps = pkgs.python3.withPackages( ps: [ norminette ] );


in
pkgs.mkShell {
  buildInputs = with pkgs; [
    compile
    clang
    lldb
    gcc
    gdb
    python-with-ps
    uncrustify

    # keep this line if you use bash
    bashInteractive
  ];
}
