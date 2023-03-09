with (import (builtins.fetchGit {  name = "nixpkgs-03-08-2023";  url = "https://github.com/nixos/nixpkgs/";  ref = "refs/heads/staging";  rev = "96de0eded6d8a6f84197a65ef9f3f883dbc82aca";
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
