<h1 align="center">Complex-Calc</h1>

> [!NOTE]
> This project is currently under development. New features and improvements are being added regularly, and the project may not yet be fully stable. Feel free to contribute or follow along as we continue to improve the tool.

<p><b>Complex-Calc</b> is a powerful C++ application designed to solve complex mathematical equations with speed, accuracy, and efficiency. Whether you're dealing with advanced calculus, algebra, or other intricate mathematical problems, Complex-Calc provides solutions within seconds using optimized algorithms.<br /><br />Perfect for students, educators, researchers, or anyone in need of a reliable and fast mathematical solver, Complex-Calc is built to handle a wide variety of real-world problems with precision.</p>

<h2>Key Features</h2>

<ul>
  <li><b>Solve Algebraic Equations</b>: Quickly solve linear, quadratic, and other polynomial equations.</li>
  <li><b>Matrix Operations</b>: Perform matrix addition and subtraction with ease.</li>
  <li><b>Optimized Performance</b>: Uses efficient algorithms to deliver fast solutions, even for large datasets.</li>
  <li><b>User-Friendly Interface</b>: Easy-to-use command-line interface that guides you through solving different mathematical problems.</li>
  <li><b>Cross-Platform</b>: Works on Windows, macOS, and Linux.</li>
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

<p>This will generate the <code>main</code> executable in the <code>build/</code> directory.</p>

<h2>Usage</h2>
<h3>Command-Line Interface</h3>
<p>Once built, you can run the application by navigating to the <code>build/</code> directory and executing the following:</p>
<pre><code>./main</code></pre>

<h3>Available Features</h3>

<ul>
  <li><b>Matrix Operations</b>:
    <ul>
      <li>Matrix Addition</li>
      <li>Matrix Subtraction</li>
    </ul>
  </li>
  <li><b>Equation Solvers:</b>:
    <ul>
      <li>Linear Equations (<code>ax + b = 0</code>)</li>
      <li>Quadratic Equations (<code>ax<sup>2</sup> + bx + c = 0</code>)</li>
      <li>Cubic Equations (<code>ax<sup>3</sup> + bx<sup>2</sup> + cx + d = 0</code>)</li>
      <li>Quartic Equations (<code>ax<sup>4</sup> + bx<sup>3</sup> + cx<sup>2</sup> + dx + e = 0</code>)</li>
      <li>Quintic Equations (<code>ax<sup>5</sup> + bx<sup>4</sup> + cx<sup>3</sup> + dx<sup>2</sup> + ex + f = 0</code>)</li>
      <li>Sextic Equations (<code>ax<sup>6</sup> + bx<sup>5</sup> + cx<sup>4</sup> + dx<sup>3</sup> + ex<sup>2</sup> + fx + g = 0</code>)</li>
      <li>Septic Equations (<code>ax<sup>7</sup> + bx<sup>6</sup> + cx<sup>5</sup> + dx<sup>4</sup> + ex<sup>3</sup> + fx<sup>2</sup> + gx + h = 0</code>)</li>
      <li>Octic Equations (<code>ax<sup>8</sup> + bx<sup>7</sup> + cx<sup>6</sup> + dx<sup>5</sup> + ex<sup>4</sup> + fx<sup>3</sup> + gx<sup>2</sup> + hx + i = 0</code>)</li>
    </ul>
  </li>
</ul>

<p>The program will prompt you to input the type of equation you want to solve, and guide you through the necessary steps.</p>

<h2>Example</h2>

<h3>Matrix Addition</h3>

<pre><code class="language-bash">Select an operation:
1. Matrix Addition
2. Matrix Subtraction
...
Choose an option: 1

Matrix A:
1 2
3 4

Matrix B:
5 6
7 8

Result of matrix addition:
6 8
10 12</code></pre>

<h3>Solving a Quadratic Equation</h3>

<pre><code class="language-bash">Select an operation:
1. Matrix Addition
2. Matrix Subtraction
3. Solve Linear Equation
4. Solve Quadratic Equation
...
Choose an option: 4

Enter coefficient a: 1
Enter coefficient b: -3
Enter coefficient c: 2

Two distinct real roots: 2 and 1</code></pre>

<h2>Contributing</h2>

<p>We welcome contributions to Complex-Calc! If you have suggestions, improvements, or bug fixes, please feel free to fork the repository and create a pull request. Here's how you can contribute:</p>

<ol>
  <li><b>Fork the repository.</b></li>
  <li>
    <b>Create a feature branch.</b>
    <pre><code class="language-bash">git checkout -b feature/YourFeatureName</code></pre>
  </li>
  <li>
    <b>Commit your changes.</b>
    <pre><code class="language-bash">git commit -m "Add your message here"</code></pre>
  </li>
  <li>
    <b>Push the changes to your fork.</b>
    <pre><code class="language-bash">git push origin feature/YourFeatureName</code></pre>
  </li>
  <li><b>Open a pull request.</b></li>
</ol>

<h2>License</h2>

<p>This project is licensed under the MIT License - see the <a href="LICENSE">LICENSE</a> file for details.</p>
