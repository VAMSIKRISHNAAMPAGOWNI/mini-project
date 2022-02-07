
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






![Screenshot_20220203-122703_Gmail](https://user-images.githubusercontent.com/94233420/152296007-ecee17b4-a902-46bf-bd2c-e15e5c50872b.jpg)

##

![Screenshot_20220203-122655_Gmail](https://user-images.githubusercontent.com/94233420/152296063-9656103b-8279-4861-a4f9-3e0c3c76d81f.jpg)

##

![Screenshot_20220203-122519_Gmail](https://user-images.githubusercontent.com/94233420/152296452-ba3349b6-bc08-465d-a6c4-73efda1c1c9c.jpg)
