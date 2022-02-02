# Requirements
## Introduction
 --- TBD 

## Research
![Description](Link to Pic)
-- Content 
## Cost and Features and Timeline
![Description](Link to Pic)
-- Content 
## Defining Our System
    -- TBD
## SWOT ANALYSIS
![SWOT-Sample](Link to Pic)

# 4W&#39;s and 1&#39;H

## Who:

**TBD**

## What:

**TBD**

## When:

**TBD**

## Where:

**TBD**

## How:

**TBD**

# Detail requirements
## High Level Requirements:
--- TBD in Tabular Format 
--- ID | Zombie processes usually occur for child processes, as the parent process still needs to read its child’s exit status | Implemented|
--- ID | A child process always first becomes a zombie before being removed from the process table | Implemented |
--- ID  | the orphan process is soon adopted by init process, once its parent process dies |implemented |



##  Low level Requirements:
--- TBD in Tabular Format 
-- ID | either finished or terminated without waiting for its child process to terminate is called an orphan process |Implemented
-- ID  |The parent process reads the exit status of the child process which reaps off the child process entry from the process table|Implemented

## HIGH LEVEL REQUIREMENTS

|ID   |        DESCRIPTION    |       STATUS|
|----------------|-------------------------------|-----------------------------|
|HR_01       | Zombie processes usually occur for child processes, as the parent process still needs to read its child’s exit status|`Implemented`|
|HR_02       | A child process always first becomes a zombie before being removed from the process table|`Implemented`|
|HR_03      |  the orphan process is soon adopted by init process, once its parent process dies |`Implemented`|



## LOW LEVEL REQUIREMENTS

|ID   |        DESCRIPTION    |       STATUS|
|----------------|-------------------------------|-----------------------------|
|LR_01       | either finished or terminated without waiting for its child process to terminate is called an orphan process |`Implemented`|
|LR_02       | The parent process reads the exit status of the child process which reaps off the child process entry from the process table|`Implemented`|
