# Week6GED

## ---SCREENSHOTS-OF-Final-Result---

### Annotated Blueprints

![Annotated Blueprints](<Screenshot 2026-10-23 194400.png>)

### Debug Log

![Debug Log](<Screenshot 2026-10-23 194521.png>)

## ---Explination-Of-DLL-Creation---

I'm not too sure what to write here so I'm just going to talk about what happened during creation.

Essentially to begin, I created a .dll file inside of VisualStudio holding 3 main "Methods" 

1. Set Preferred Language
    Sets the native language for the game

2. Get Preferred Language
    Gets the set language for the game

3. Scale Speed
    Increase the movement speed of the player by a multiplier

After building the dll file, I created a simple plugin for UnrealEngine that exposes these methods in blueprints so that I can use their functionality in engine.

By creating a BP library header file I am able to expose the methods as blueprints by getting a path directly to the dll file regardless of what computer it is on. This allows the mod to be used by anyone rather than just my machine.

To use this mod, you do have to put the dll file into the proper folder otherwise it may refuse to launch.

Some things I can do with this would be adding new languages to our game for player diversity. And Expidite playtesting by giving programmers an easy way to alter the players' speed without doing the math.

After doing some testing with the variables, you get a set output that can be changed on demand with some extra blueprint logic.
