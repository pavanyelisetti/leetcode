# Write your MySQL query statement below
select name from Employee where (id = ANY(select managerId from Employee
group by managerId having  count(id)>=5));