-- select *,ifNULL(count(Students.student_name),0) from Students left join Examinations on 
-- Students.student_id=Examinations.student_id  group by Students.student_id,Examinations.subject_name order by Students.student_id;
select Students.student_id,Students.student_name,Subjects.subject_name,ifnull(count(Examinations.student_id),0) as attended_exams
from (Students cross join  subjects) 
left join Examinations on 
Students.student_id=Examinations.student_id 
and Examinations.subject_name=Subjects.subject_name
group by Students.student_id,Subjects.subject_name
order by Students.student_id,Subjects.subject_name ;
