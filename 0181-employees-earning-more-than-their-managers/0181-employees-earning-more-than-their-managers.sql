# Write your MySQL query statement below
SELECT b.name as Employee from Employee e JOIN Employee b ON e.id = b.managerId where b.salary>e.salary;