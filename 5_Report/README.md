
# Requirements
## Introduction
 Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork call parent process. After a new child process is created, both processes will execute the next instruction following the fork system call. A zombie process is a process whose execution is completed but it still has an entry in the process table. Zombie processes usually occur for child processes, as the parent process still needs to read its child’s exit status. Orphan processes are those processes that are still running even though their parent process has terminated or finished. A process can be orphaned intentionally or unintentionally.
 
 ## Folder Structure

| Folder              | Description                                   |
| :------------------ | :-------------------------------------------- |
| 1_Requirements      | Documents detailing requirements              |
| 2_Architecture      | Folders regarding design details              |
| 3_Implementation    | Complete code and documentation               |
| 4_TestPlanAndOutput | Documents with test plan and procedure        |
| 5_Report            | Project Report                                |
| 6_ImagesAndVideos   | Project output and videos                     |
| 7_Others            | Daily stand up report                         |

 ## Contributor

| PS.NO               | Name                                   |
| :------------------ | :-------------------------------------------- |
| 40020845            | AMPAGOWNI VAMSI KRISHNA |

## SWOT ANALYSIS


![swotm1](https://user-images.githubusercontent.com/94233420/152777893-a7d2b282-15cb-43f5-a98c-1df283d6ea56.png)

Strength:

    The system recognises the orphaned child process.

Weakness:

     Created when a child process is running and the parent process is killed.
Opportunities:

    And passes the orphan process to init which then becomes the it's new parent process and terminates it.

Threads:

     Created when a child process loses it's connection to an existing parent process.
    

# 4W&#39;s and 1&#39;H

![istockphoto-1338212241-170667a](https://user-images.githubusercontent.com/94233420/152777335-657e1433-806d-404d-8301-b1408d07061a.jpg)


Who:

    It keeps running but becomes "lost" in the system And so cannot be terminated by it's parent process.

What:

    It just keeps running forever.

What:

    Keeps using system resource by using a slot in the process table

Where:

     It cannot be stopped in a conventional manner The only way to kill a zombie is to reboot the system

# Detail requirements
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


## Design

![m1](https://user-images.githubusercontent.com/94233420/152769693-0bb7af87-d808-4dbd-8203-9c10d5659b5e.png)
 
 ##                                       zombie process in linux

![mini2](https://user-images.githubusercontent.com/94233420/152773726-34802c5b-4d27-4411-b3d1-1c599e50054d.png)



##                     orphan process in linux



![Screenshot 2022-02-03 011736od](https://user-images.githubusercontent.com/94233420/152910090-46c360a2-3996-428e-a112-c2f3f4d7a406.png)


# Test Plan:

## High Level Test Plan:

|Test ID|                            Description                           |  Exp I/P   |  Exp O/P  |  Actual Output |  Type Of Test   |
|:-----:|:----------------------------------------------------------------:|:----------:|:---------:|:--------------:|:---------------:|
| H_01  | if pid>0 then it goes to wait state                 |       2    | child process with id 758 parent process 754      |child process with id 758 parent process 754              |Requirement based|
| H_02  | if pid =0 then it goes to termination state              |   1  | parent process id 810parent process is going to be terminated|parent process id 810parent process is going to be terminated|Requirement based|

        


## Low level test plan:

|Test ID|                            Description                           |  Exp I/P   |  Exp O/P  |  Actual Output |  Type Of Test   |
|:-----:|:----------------------------------------------------------------:|:----------:|:---------:|:--------------:|:---------------:|
| L_01  |if pid>0 then it goes to wait state, if pid=0 then it goes to termination state | 2|parent proces with id 753 child process id 754 |parent proces with id 753 child process id 754|Requirement based|
| L_02  |Created when a child process is running and the parent process is killed. The system recognises the orphaned child process. |1 |child process815 parent id 811 |child process815  parent id 811 |Requirement based  |



## Output


![Screenshot_20220203-122703_Gmail](https://user-images.githubusercontent.com/94233420/152296007-ecee17b4-a902-46bf-bd2c-e15e5c50872b.jpg)

##

![Screenshot_20220203-122655_Gmail](https://user-images.githubusercontent.com/94233420/152296063-9656103b-8279-4861-a4f9-3e0c3c76d81f.jpg)

##

![Screenshot_20220203-122519_Gmail](https://user-images.githubusercontent.com/94233420/152296452-ba3349b6-bc08-465d-a6c4-73efda1c1c9c.jpg)
