# Write your MySQL query statement below
select  date_format(t1.trans_date,"%Y-%m")as month,
t1.country,count(t1.state) as trans_count,
count(t2.state) as approved_count,
sum(t1.amount) as trans_total_amount,ifnull(sum(t2.amount),0) as approved_total_amount
 from Transactions t1
left join Transactions t2  on t1.id=t2.id and t2.state="approved"
 group by year(t1.trans_date),month(t1.trans_date),t1.country;