# Write your MySQL query statement below
select contest_id ,ROUND(
    COUNT(R.user_id) / (SELECT COUNT(*) FROM Users) * 100
,2) as percentage 
from Users as U
right join Register as R
on U.user_id = R.user_id
group by R.contest_id
ORDER BY  percentage DESC,contest_id ASC;
