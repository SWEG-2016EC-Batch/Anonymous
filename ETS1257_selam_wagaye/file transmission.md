<div align = "center">
  <h1> File transmission time calcuator </h1>
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
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pseudocode for File Transmission Time Calculation Program</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
            line-height: 1.6;
        }
        h1 {
            color: #333;
        }
        pre {
            background-color: #f4f4f4;
            padding: 10px;
            border-left: 5px solid #ccc;
            font-family: 'Courier New', Courier, monospace;
        }
    </style>
</head>
<body>
    <h1>Pseudocode for File Transmission Time Calculation Program</h1>
    <pre>
        <code>
START
    SET transmission_rate = 960             // in bits per second
    SET bytes_per_character = 1              // 1 byte per character
    DECLARE long long filesize                // variable for file size
    DECLARE int transmission_time              // variable for total transmission time in seconds
    DECLARE int days, hour, min, sec          // variables for output time components

    OUTPUT "Enter file size in bytes:"
    INPUT filesize                             // Get the file size from the user

    // Calculate transmission time in seconds
    SET transmission_time = filesize / (transmission_rate * bytes_per_character)

    // Convert seconds to days, hours, minutes, and seconds
    SET days = transmission_time / (24 * 3600)
    transmission_time = transmission_time % (24 * 3600)              // Remaining seconds after days
    SET hour = transmission_time / 3600
    transmission_time = transmission_time % 3600                     // Remaining seconds after hours
    SET min = transmission_time / 60
    SET sec = transmission_time % 60                                   // Remaining seconds

    // Output the transmission time
    OUTPUT "Transmission time is: ", days, " days: ", hour, " hours: ", min, " minutes: ", sec, " seconds."
END
 </pre>
</body>
</html>
<h2> flowchart for file transmission time calculator</h2>
<a href="https://github.com/user-attachments/assets/d8f48e57-f369-465a-a5cc-04125bbd7ff7

" target="_blank">Click here to see the flowchart of the file transmission time calculator  calculator </a>
    
</html>      
