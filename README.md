## Getting Started

Run Command Prompt.

Go to the directory where you would like your Zephyr project to be:

```shell
cd <path\to\zephyr-projects>
```

Create a new virtual environment:

```shell
python -m venv zephyr-t2-workspace-project\.venv
```

Activate the virtual environment:

```shell
zephyr-t2-workspace-project\.venv\Scripts\activate.bat
```

Once activated your shell will be prefixed with `(.venv)`. The virtual environment can be deactivated at any time by running `deactivate`.

Initialize workspace:

```shell
west init -m https://github.com/borrelunde/zephyr-t2-workspace --mr master zephyr-t2-workspace-project
```

```shell
cd zephyr-t2-workspace-project
```

```shell
west update
```

Export a `Zephyr CMake package`. This allows CMake to automatically load boilerplate code required for building Zephyr applications.

```shell
west zephyr-export
```

Zephyr?s `scripts\requirements.txt` file declares additional Python dependencies. Install them with `pip`.

```shell
pip install -r zephyr\scripts\requirements.txt
```

```shell
cd zephyr-t2-workspace
```

```shell
west build -b nrf52840dk_nrf52840 app
```

```shell
west flash
```