<div align = "center">
  <h1> BMI calcuator </h1>
<body>
  <div align ="left">
<body>
    <h1>Problem Analysis for File Transmission Time Calculation Program</h1>
        The program requires the following input from the user:
    </p>
    <ul>
        <li><strong>File Size</strong> (<code>long long filesize</code>):<br>
            A numeric input indicating the size of the file to be transmitted, measured in bytes.</li>
    </ul>
   <h2>Operations</h2>
     <h3>Calculate Transmission Time:</h3>
     <pre><code>transmission_time = filesize / (transmission_rate * bytes_per_character)</code></pre>
    <h3>Convert Seconds into Days, Hours, Minutes, and Seconds:</h3>
    <ul>
        <li><strong>Days Calculation:</strong>
            <pre><code>days = transmission_time / (24 * 3600)</code></pre>
        </li>
        <li><strong>Remaining Seconds Calculation for Hours:</strong>
            <pre><code>transmission_time = transmission_time mod (24 * 3600)</code></pre>
        </li>
        <li><strong>Hours Calculation:</strong>
            <pre><code>hour = transmission_time / 3600</code></pre>
        </li>
        <li><strong>Remaining Seconds Calculation for Minutes:</strong>
            <pre><code>transmission_time = transmission_time mod 3600</code></pre>
        </li>
        <li><strong>Minutes Calculation:</strong>
            <pre><code>min = transmission_time / 60</code></pre>
        </li>
        <li><strong>Seconds Calculation:</strong>
            <pre><code>sec = transmission_time mod 60</code></pre>
        </li>
    </ul>
 <h2>Output</h2>
    <p>
        The program outputs the total transmission time broken down into days, hours, minutes, and seconds in the following format:
    </p>
    <pre><code>Transmission time is: X days: Y hours: Z minutes: W seconds</code></pre>
</body>
</html>
