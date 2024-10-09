# Elix Graphics Engine

**Elix** is a lightweight graphics engine designed for creating simple 2D interfaces with support for text fields, buttons, and other minimal UI elements. The engine is focused on using the GPU for accelerated rendering and features a flexible font management system with dynamic resizing and pre-generated textures.

## Key Features

- **Text Field Support**: Easy creation of text fields with font rendering supported through the GPU.
- **Flexible Font Handling**: Supports TTF fonts with dynamic resizing and pre-generated textures for faster rendering.
- **UI Elements**: Minimal set of basic UI elements such as buttons and labels.
- **GPU Acceleration**: Rendering is accelerated by leveraging GPU capabilities (OpenGL).
- **Scalability and Caching**: Optimized texture caching system for fonts to enhance performance.

## Dependencies

The project uses the following external libraries:
- **FreeType**: For font rendering and working with TTF files.
- **OpenGL**: For graphics rendering.
- **GLFW/SDL** (optional): For window creation and user input handling.

## Installation and Build

The project uses **CMake** as its build system. Follow the steps below to set up and compile the project.

### Build Steps

1. **Clone the repository:**

```bash
git clone https://github.com/yourusername/elix-engine.git
cd elix-engine
```

2. **Create a build directory:**

```bash
mkdir build
cd build
```

3. **Generate the Makefile with CMake:**

```bash
cmake ..
```

4. **Build the project:**

```bash
make
```

5. **Run the example:**

After a successful build, you can run the example:

```bash
./elix_example
```

## Example Usage

Elix allows for quick creation of interfaces with text fields and buttons, with flexible font handling. An example of code to create a text field can be found in the `examples` directory.

## Future Development

- Adding new UI elements (sliders, checkboxes).
- Optimizing rendering and working with texture atlases.
- Supporting more advanced font effects and animations.

## License

This project is licensed under the GPL 3.0 License. See the `license` file for details.

