# Write your MySQL query statement below
select B.id  
from Weather A join Weather B 
on  DATEDIFF(B.recordDate,A.recordDate)=1
 where (B.temperature>A.temperature) ;