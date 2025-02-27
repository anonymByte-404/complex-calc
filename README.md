<h1 align="center">Complex-Calc</h1>

> [!NOTE]
> This project is currently under development. New features and improvements are being added regularly, and the project may not yet be fully stable. Feel free to contribute or follow along as we continue to improve the tool.

<p><b>Complex-Calc</b> is a powerful C++ application designed to solve complex mathematical equations with speed, accuracy, and efficiency. Whether you're dealing with advanced calculus, algebra, or other intricate mathematical problems, Complex-Calc provides solutions within seconds using optimized algorithms.<br /><br />Perfect for students, educators, researchers, or anyone in need of a reliable and fast mathematical solver, Complex-Calc is built to handle a wide variety of real-world problems with precision.</p>

<h2>Key Features</h2>

<ul>
  <li><b>Solve Algebraic Equations</b>: Quickly solve linear, quadratic, and other polynomial equations.</li>
  <li><b>Advanced Calculus Solutions</b>: Solve integrals, derivatives, limits, and more complex calculus problems.</li>
  <li><b>Optimized Performance</b>: Uses efficient algorithms to deliver fast solutions, even for large datasets.</li>
  <li><b>User-Friendly Interface</b>: Easy-to-use command-line interface that guides you through solving different mathematical problems.</li>
  <li><b>Portable</b>: Cross-platform compatibility, works on Windows, macOS, and Linux.</li>
</ul>

<h2>Installation</h2>

<p>To install Complex-Calc, follow the steps below:</p>

<ol>
  <li>
    <h3>Clone the Repository</h3>
    <pre><code>git clone https://github.com/anonymByte-404/complex-calc.git</code></pre>
  </li>
  <li>
    <h3>Build with CMake</h3>
    <p>Navigate to the project directory and run the following commands to build the project:</p>
    <pre><code>mkdir build
cd build
cmake ..
make</code></pre>
  </li>
</ol>

<p>This will generate the <code>algebra_solver</code> executable in the <code>build/</code> directory.</p>

<h2>Usage</h2>
<h3>Command-Line Interface</h3>
<p>Once built, you can run the application by navigating to the build/ directory and executing the following:</p>
<pre><code>./algebra_solver</code></pre>

<h3>Available Features</h3>

<ul>
  <li><b>Solve Linear Equations</b>: Input equations in the form <code>ax + b = 0</code>.</li>
  <li><b>Solve Quadratic Equations</b>: Solve equations of the form <code>ax^2 + bx + c = 0</code>.</li>
  <li><b>Evaluate Polynomials</b>: Solve polynomial equations with any degree.</li>
</ul>

<p>The program will prompt you to input the type of equation you want to solve, and guide you through the necessary steps.</p>

<h2>Example</h2>

<p>Here’s an example of how the tool can be used to solve a linear equation:</p>

<pre><code>Enter the type of equation to solve:
1. Linear Equation (ax + b = 0)
2. Quadratic Equation (ax^2 + bx + c = 0)
...

Choose an option: 1
Enter the value of 'a': 2
Enter the value of 'b': -4
Solution: x = 2</code></pre>

<h2>Contributing</h2>

<p>We welcome contributions to Complex-Calc! If you have suggestions, improvements, or bug fixes, please feel free to fork the repository and create a pull request. Here's how you can contribute:</p>

<ol>
  <li>Fork the repository.</li>
  <li>Create a feature branch.</li>
  <li>Commit your changes.</li>
  <li>Push the changes to your fork.</li>
  <li>Open a pull request.</li>
</ol>

<h2>License</h2>

<p>This project is licensed under the MIT License - see the <a href="LICENSE">LICENSE</a> file for details.</p>
