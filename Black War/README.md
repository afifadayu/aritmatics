# Black War

## At the beginning of the program consists of 4 menus:

```sh
      -=Black War=-
--------------------------
1.View number of Troops
2.Add Troops
3.Battle
4.Exit

Enter your choice[1..4] : <input your choice>
```

## If user chooses View number of Troops (menu ‘1’), then:

> Show the number of troops based on types, The type such as:  
> * Knight  
> * Archer  
> * Balista  
> * Warrior  
> * Swordsman  
> Give a number of initial values for each troops:  
> * Knight : 50 <before change>  
> * Archer : 200 <before change>  
> * Balista  : 100 <before change>  
> * Warrior  : 100 <before change>  
> * Swordsman : 250 <before change>  

```sh
Your Army
+++++++++++++++++++++++
1.Knight Troops = 50
2.Archer Troops = 200
3.Balista Troops = 100
4.Warrior Troops = 100
5.Swordman Troops = 250


Press Enter to continue...
```

## If user chooses View number of Troops (menu ‘2’), then:  

> Show all types of troops and their amount.  
> Ask user to input types of troops that want to be added. The types must be between 1 and 5.  
> Ask user to input numbers of troops that want to be added. The amount must be between 0 and [1000 – numbers of troops].  

```sh
Your Army
+++++++++++++++++++++++
1.Knight Troops = 50 <before change> 
2.Archer Troops = 200 <before change> 
3.Balista Troops = 100 <before change> 
4.Warrior Troops = 100 <before change> 
5.Swordman Troops = 250 <before change> 

Input the number of troops[1..5]: <input troops>
Input the number of the <your choice> to be added[0..<1000-total troops>]: <input number>
```

## If user chooses View number of Troops (menu ‘3’), then:  

> Show all types of troops and their amount.  
> Ask user to input the numbers of troops that will participate in battle. The number must be between 0 and [maximum number of the troops].  
> Show number of troops who died in the battle by random numbers starting from 0 up to the number of troops that participate in battle.  

```sh
Your Army
+++++++++++++++++++++++
1.Knight Troops = 50 <before change> 
2.Archer Troops = 200 <before change> 
3.Balista Troops = 100 <before change> 
4.Warrior Troops = 100 <before change> 
5.Swordman Troops = 250 <before change> 

Input the number of Knight [0..50]: <input troops>
Input the number of Archer [0..200]: <input troops>
Input the number of Balista [0..100]: <input troops>
Input the number of Warrior [0..100]: <input troops>
Input the number of Swordman [0..250]: <input troops>

The number of Tropps who died in the battle :
-------------------------------------------------

Knight = <your input>
Archer = <your input>
Balista = <your input>
Warrior = <your input>
Swordman = <your input>

Press Enter to Continue...
```

## If user chooses Exit (menu ‘4’), then:  

> Program ends.  

#### by. SLC Binus University 2016/2017.  
