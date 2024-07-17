# Write your MySQL query statement below
select A.machine_id, ROUND(AVG(B.timestamp-A.timestamp),3) as processing_time
from Activity A JOIN Activity B
on   A.activity_type="start" and  B.activity_type="end" and A.machine_id=B.machine_id and A.process_id=B.process_id group by machine_id;