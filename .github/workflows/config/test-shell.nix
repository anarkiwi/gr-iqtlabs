with (import (builtins.fetchGit {
  name = "nixpkgs-01-27-2023";
  url = "https://github.com/nixos/nixpkgs/";
  ref = "refs/branches/staging";
  rev = "e4cc388f86b9e3056092cc58c501b429e2765170";
}) {} );
let
  test-py-packages = python-packages: with python-packages; [
    pandas
    numpy

    pybind11
    cython
  ];
  python-with-packages = python3.withPackages test-py-packages;
in
mkShell {
  propagatedBuildInputs = [
    # stuff cmake needs
    spdlog
    gmp
    boost
    volk

    gnuradio
    gnuradio.python
    gnuradio.python.pkgs.numpy
    gnuradio.python.pkgs.pybind11
    gnuradio.python.pkgs.pandas
    cmake

    zstd
    boost
    libsndfile
    soapysdr
    cppcheck
  ];
}
