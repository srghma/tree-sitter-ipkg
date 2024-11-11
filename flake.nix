# npm install tree-sitter-cli --save
#
# :lf .
# pkgs = inputs.nixpkgs.outputs.legacyPackages."x86_64-linux"
{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs =
    inputs:
    inputs.flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import inputs.nixpkgs {
          inherit system;
        };
      in
      {
        devShell = pkgs.mkShell {
          buildInputs = with pkgs; [
            watchexec
            gnumake
            nodejs_22
            python3
            clang-tools # clangd
            graphviz # dot
          ];
        };
      }
    );
}
