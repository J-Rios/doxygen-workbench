# Doxygen Workbench

Doxygen installation and basic usage examples.

## Notes

- Use provided script (Debian/Ubuntu based system) to automate Doxygen and requeriments installation:

    ```bash
    sudo ./doxygen_install
    ```

- Go to any example documentation directory and run the Doxygen generation script:

    ```bash
    cd examples/c/basic/doc
    ./doxygen_run
    ```

- Doxygen project parameters (name, description, version, etc.) needs to be set in project Doxyfile, you can modified them from outside through generation scripts, take a look on it.
