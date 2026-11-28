{
  description = "Raylib development environment";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs = {
    self,
    nixpkgs,
    ...
  }: let
    system = "x86_64-linux";
  in {
    devShells."${system}".default = let
      pkgs = import nixpkgs {
        inherit system;
      };
    in
      pkgs.mkShell {
        packages = with pkgs; [
          pkgs.libGL

          # X11 dependencies
          libx11
          libx11.dev
          libxcursor
          libxi
          libxinerama
          libxrandr
          raylib
          gtk4
          glib
          gsettings-desktop-schemas
          adwaita-icon-theme

          pkg-config
          bear
          clang-tools
          wrapGAppsHook4
        ];

        # Audio dependencies
        LD_LIBRARY_PATH = pkgs.lib.makeLibraryPath [pkgs.alsa-lib];

        shellHook = ''
          exec zsh
          export XDG_DATA_DIRS="$GSETTINGS_SCHEMAS_PATH:$XDG_DATA_DIRS"
        '';
      };
  };
}
