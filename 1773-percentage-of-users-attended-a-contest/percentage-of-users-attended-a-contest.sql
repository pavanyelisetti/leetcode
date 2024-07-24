# Write your MySQL query statement below\
select  Register.contest_id,
round(count(Register.user_id)/(select count(*)Users from Users)*100,2)
as percentage from Register 
group by Register.contest_id order by percentage DESC,Register.contest_id;
