# Write your MySQL query statement below
select s.user_id,round(ifnull(count(c2.action)/count(c.action),0),2) as confirmation_rate from (Signups s left join Confirmations c on s.user_id=c.user_id)
left join confirmations c2 on c.time_stamp=c2.time_stamp and  c2.action="confirmed"
group by s.user_id;
;