Problem URL : https://www.acmicpc.net/problem/25206

Mirko is calculating his GPA for the semester. He took 20 subjects, and for each subject, he knows the **subject name**, **credits**, and **grade**.

The grades are given as follows:

| Grade | Score |
|-------|-------|
| A+    | 4.5   |
| A0    | 4.0   |
| B+    | 3.5   |
| B0    | 3.0   |
| C+    | 2.5   |
| C0    | 2.0   |
| D+    | 1.5   |
| D0    | 1.0   |
| F     | 0.0   |

Your task is to calculate the GPA based on the given subjects, **excluding subjects with grade `P` (Pass)** from the calculation.

---
* Input:

```
ObjectOrientedProgramming1 3.0 A+
IntroductiontoComputerEngineering 3.0 A+
ObjectOrientedProgramming2 3.0 A0
CreativeComputerEngineeringDesign 3.0 A+
AssemblyLanguage 3.0 A+
InternetProgramming 3.0 B0
ApplicationProgramminginJava 3.0 A0
SystemProgramming 3.0 B0
OperatingSystem 3.0 B0
WirelessCommunicationsandNetworking 3.0 C+
LogicCircuits 3.0 B0
DataStructure 4.0 A+
MicroprocessorApplication 3.0 B+
EmbeddedSoftware 3.0 C0
ComputerSecurity 3.0 D+
Database 3.0 C+
Algorithm 3.0 B0
CapstoneDesigninCSE 3.0 B+
CompilerDesign 3.0 D0
ProblemSolving 4.0 P
```

---
* Output:

```
3.284483
```
