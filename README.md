## Getting Started

Run Command Prompt.

Go to the directory where you would like your Zephyr project to be.

```shell
cd <path\to\zephyr-projects>
```

Create a new virtual environment.

```shell
python -m venv zephyr-project\.venv
```

Activate the virtual environment.

```shell
zephyr-project\.venv\Scripts\activate.bat
```

Once activated your shell will be prefixed with `(.venv)`. The virtual environment can be deactivated at any time by running `deactivate`.

Install west.

```shell
pip install west
```

Initialize the workspace and get the Zephyr source code.

```shell
west init -m https://github.com/borrelunde/zephyr-application --mr master zephyr-project
cd zephyr-project
west update
```

Export a `Zephyr CMake package`. This allows CMake to automatically load boilerplate code required for building Zephyr applications.

```shell
west zephyr-export
```

Zephyr's `scripts\requirements.txt` file declares additional Python dependencies. Install them with `pip`.

```shell
pip install -r zephyr\scripts\requirements.txt
```

Enter the application directory.

```shell
cd zephyr-application
```

Build the application. You can replace the board name `nrf52840dk_nrf52840` with a board of your liking.

```shell
west build -b nrf52840dk_nrf52840 app
```

Flash the application to the board.

```shell
west flash
```