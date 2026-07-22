# Write your MySQL query statement below

SELECT eu.unique_id,e.name
FROM Employees as e 
LEFT JOIN       ###########unique id of each user pucha hai########
EmployeeUNI as eu
ON
e.id=eu.id