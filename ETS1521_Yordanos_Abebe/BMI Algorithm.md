# THE PSEUO-CODE

* start

* use for loop to repeat how many times you want to calculate bmi
  
* ddeclare and accept the inputs (height, weight, and number)
  
* calculate body mass indedx(BMI) as BMI=weight/(height*height)

* if(BMI<18.5) then weight=under weight

* if(BMI>18.5 & BMI<=24.9) then weight=normal weight

* if(BMI>24.918.5 & BMI<=29.9) then weight=over weight

* if(BMI>29.9) then weight=obese

* print the BMI and it's category
  
* End
  
# THE FLOWCHART 

  ``` mermaid
        graph TD
    A(Start) --> B[For loop to repeat as many times as needed to calculate BMI]
    B--> C[Declare and accept inputs: height, weight, and number]
    C --> D[Calculate BMI: BMI = weight / height * height]
    D --> E{BMI < 18.5?}
    E -- Yes --> F[Category: Underweight]
    E -- No --> G{BMI <= 24.9?}
    G -- Yes --> H[Category: Normal weight]
    G -- No --> I{BMI <= 29.9?}
    I -- Yes --> J[Category: Overweight]
    I -- No --> K[Category: Obese]
    F --> L[Print BMI and category]
    H --> L
    J --> L
    K --> L
    L --> M[End]