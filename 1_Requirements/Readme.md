# Requirements
## Introduction
 Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork call parent process. After a new child process is created, both processes will execute the next instruction following the fork system call. A zombie process is a process whose execution is completed but it still has an entry in the process table. Zombie processes usually occur for child processes, as the parent process still needs to read its child’s exit status. Orphan processes are those processes that are still running even though their parent process has terminated or finished. A process can be orphaned intentionally or unintentionally.
 
 ## Folder Structure

| Folder              | Description                                   |
| :------------------ | :-------------------------------------------- |
| 1_Requirements      | Documents detailing requirements and research |
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
![SWOT-Analysis](https://user-images.githubusercontent.com/94233420/152287322-2c01d17b-62f4-42d7-8dd9-3599356a15f5.jpg)

Strength:

    The system recognises the orphaned child process.

Weakness:

     Created when a child process is running and the parent process is killed.

Opportunities:

    And passes the orphan process to init which then becomes the it's new parent process and terminates it.

Threads:

     Created when a child process loses it's connection to an existing parent process.
    

# 4W&#39;s and 1&#39;H
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
