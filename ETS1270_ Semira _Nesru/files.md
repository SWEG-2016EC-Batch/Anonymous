##pseudocode

 *Start

 * Initialize transmission_rate = 960

 * Initialize bytes_per_character = 1

 * Declare variables: filesize, transmission_time, days, hour, min, sec

 * Print "Enter file size in bytes: "

 * Input filesize

 * Calculate transmission_time = filesize / (transmission_rate * bytes_per_character)

 * Calculate days = transmission_time / (24 * 3600)

 * Update transmission_time = transmission_time % (24 * 3600)

 * Calculate hour = transmission_time / 3600

 * Update transmission_time = transmission_time % 3600

 * Calculate min = transmission_time / 60

 * Calculate sec = transmission_time % 60

 * Print "Transmission time is: days days: hour hours: min minutes sec seconds"
 End

## FLOW CHART
``` mermaid


  graph TD
    A(Start) --> B[Initialize transmission_rate = 960, bytes_per_character = 1]
    B --> C[Declare variables: filesize, transmission_time, days, hour, min, sec]
    C --> D["Print 'Enter file size in bytes: '"]
    D --> E["Input filesize"]
    E --> F["Calculate transmission_time = filesize / (transmission_rate * bytes_per_character)"]
    F --> G["Calculate days = transmission_time / (24 * 3600)"]
    G --> H["Update transmission_time = transmission_time % (24 * 3600)"]
    H --> I["Calculate hour = transmission_time / 3600"]
    I --> J["Update transmission_time = transmission_time % 3600"]
    J --> K["Calculate min = transmission_time / 60"]
    K-->  L["Calculate sec = transmission_time % 60"]
    L --> M["Print 'Transmission time is: days days: hour hours: min minutes sec seconds'"]
    M-->  N(End)

