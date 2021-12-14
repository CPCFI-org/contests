# Steps to create a new contest:

1. UPDATE README.md file's CPCFI Contests table:
   1. **Period**: either **1** or **2** depending if its the first part of the CPCFI year (units 1-5, usually August-December) or the second part of the CPCFI year (units 6-10, usually January-July)
   2. **Semester**: use the following format: **\<Term\> <\YYYY\>**
      1. **Term**: either **Spring**, **Fall**, **Summer** or **Winter**. These last two options should only be used if the CPCFI runs a contest within summer or winter school holidays and should use **1** and **2** for the period attribute respectively. For example, if creating a contest in summer for 2021, the period should be **2** and the term should be **Summer 2021**
      2. **YYYY**: year
   3. For example:
      | Period | Semester | Link |
      | ------ | -------- | ---- |
      | 1 | Fall 2021 | [here](https://github.com/CPCFI-org/contests/tree/main/1_Fall_2021) |
      | 2  | Spring 2022  | [here](https://github.com/CPCFI-org/contests/tree/main/2_Spring_2022) |
2. CREATE a new directory with the following format: **\<Period\>_\<Season\>_\<YYYY\>/**
   1. **Period**: either *1* or *2*
   2. **Season**: Spring, Summer, Fall, Winter
   3. **YYYY**: year
3. ADD the following information to step 2 newly created directory:
   1. **README.md**
      1. Should contain a markdown table with the following columns (use the table template in the section **CPCFI Contests table template** below):
         1. **\# of contest**: counts the number of contests made for each unit
         2. **Unit**: number and name of the current unit in the format \<#\>-\<Unit Name\>. For example, _1-Introduction to Competitive Programming_
         3. **Contest**: url to the contest problem sets or scoreboard
         4. **Editorial**: url to the contest editorial. Ideally, the editorial must be created in this repository by CPCFI's current professors and alumni
         5. **Editorial Status**: one of the following: **Missing**, **Partially Complete** or **Complete**
      2. For example:

      | \# of Contest | Unit | Contest | Editorial | Editorial Status |
      | ------------- | ---- | ------- | --------- | ---------------- |
      | 1 | 1 - Introduction to Competitive Programming  |  https://open.kattis.com/contests/cfdfas |  | Missing |
      | 1 | 2 - Data Structures and Libraries  | https://open.kattis.com/contests/xjy9uy |  | Missing |
   2. **Contest editorial directories**
      1. Name format: **\<Number of contest\>-\<Number of Unit\>-\<Unit name\>/**
      2. Directory content:
         1. README.md file
            1. Markdown table (see template **CPCFI Contest table template** below) with one entry for each problem within the problem set
         2. Problemset in PDF format if possible
         3. Create a new directory for every problem
            1. For example, **C-Spider-Trap/**, where **C** indicates that it's problem C (3) within the problemset and **Spider Trap** is the name of the problem
            2. C++ source file and any additional files required (input or output)
            3. PDF with hand written editorial or url to problem editorial if possible


## CPCFI Contests table template

The following table template should be used when creating a new set of contests for a particular term

\# CPCFI Contests: [Fall or Spring] YYYY - [1st or 2nd] period

| \# of Contest | Unit | Contest | Editorial | Editorial Status |
| ------------- | ---- | ------- | --------- | ---------------- |
| - | -  | -  | -  | -  |


## CPCFI Contest table template

The following table template should be used inside the editorial directories

\# CPCFI Contest

| Problem ID | Problem Name | Categories |
| ---------- | ------------ | ---------- |
| -  | -  |  - |

- **Problem ID**: refers to the problem id within the contest's problemset (A, B, C, D, ...)
- **Problem Name**: name of the problem, Spider Trap for example
- **Categories**: competitive programming categories: math, ad hoc, string, dp, etc, ...
