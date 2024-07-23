# Write your MySQL query statement below
select employee_id,department_id from Employee a 
group by 
employee_id having count(primary_flag)=1
union 
select employee_id,department_id from Employee a 
where( primary_flag="Y") order by employee_id;
