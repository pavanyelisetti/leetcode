# Write your MySQL query statement below
select  q1.query_name ,
round(sum(q1.rating/q1.position)/count(q1.result),2)as quality ,
round(count(q2.rating)/count(q1.result)*100,2) as poor_query_percentage 
from Queries q1 left join  Queries q2
on  q1.result =q2.result and q2.rating <3 
group by query_name  having q1.query_name!= "null";